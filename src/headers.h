#ifndef HEADERS_H
#define HEADERS_H

/*
 * include std
 */
#include <string.h>
#include <map>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

/*
 * include Lua
 */
extern "C"
{
#include "lua/lua.h"
#include "lua/lauxlib.h"
#include "lua/lualib.h"
}

/*
 * include mine
 */
#include "define.h"
#include "gameBase.h"

#endif
