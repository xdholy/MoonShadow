/*
 * Define.h
 *
 *  Created on: 2016年12月20日
 *      Author: XDHOLY
 */

#ifndef DEFINE_H_
#define DEFINE_H_

#include "headers.h"
#include <iostream>
using namespace std;


#define PRINT_MSG(msg) cout<<msg<<endl;
#define ERROR(msg) cout<<"error:"<<endl<<msg<<endl;
#define ERROR_EXIT(msg) ERROR(msg);exit(1);

#define MAIN_LUA_FILE_PATH "../Script/Test.lua"	//Script/Test.lua

#define my_map std::map

static int MAX_OPTION_NUM = 4;
#define INVALID_ID -1;

#endif /* DEFINE_H_ */
