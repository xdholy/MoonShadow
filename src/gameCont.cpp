/*
 * gameCont.cpp
 *
 *  Created on: 2017年1月3日
 *      Author: XDHOLY
 */

#include "gameCont.h"

void GameCont::ShowCont()
{
	my_map<int, CONTENT>::iterator cit = game_msg.begin();
	while(cit != game_msg.end())
	{
		CONTENT cont = cit->second;
		cont.Display();
		PRINT_MSG("");
		cit++;
	}
}


