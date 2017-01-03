//============================================================================
// Name        : MoonLight.cpp
// Author      : XDHOLY
// Version     :
// Copyright   : Light of Moon Shadow
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "headers.h"
#include "gameCont.h"

static lua_State* _L;
static GameCont game_cont;
static int LoadGameCont()
{
	if (!lua_isinteger(_L,1))
		return 0;

	int index = lua_tointeger(_L, 1);
	int next_index = lua_tointeger(_L, 2);
	int pre_index = lua_tointeger(_L, 3);
	const char* msg = lua_tostring(_L, 4);
	bool optional = lua_toboolean(_L, 5);
	CONTENT new_cont(index, next_index, pre_index, msg, optional);
	if(optional)
	{
		for(int i=0; i<MAX_OPTION_NUM; i++)
		{
			new_cont.Options[i] = lua_tointeger(_L, i+6);
		}
	}

	game_cont.game_msg[index] = new_cont;

	return 0;
}

static void LoadFunction()
{
	lua_register(_L, "LoadGameCont", (lua_CFunction)LoadGameCont);
}

static void InitLua(std::string filename)
{
	_L = luaL_newstate();
	if (!_L)
	{
		ERROR_EXIT("no state!");
	}
	PRINT_MSG("lua inited!");
	luaopen_base(_L);
	luaopen_io(_L);
	luaopen_string(_L);
	luaopen_math(_L);
	LoadFunction();
	//loadfile
	int err = luaL_dofile(_L, filename.c_str());
	if(err)
	{
		lua_error(_L);
		ERROR("load file error!")
	}
}

int main(int argc,char**argv) {
	InitLua(argv[1]);
	game_cont.ShowCont();
	return 0;
}

#include "footers.h"
