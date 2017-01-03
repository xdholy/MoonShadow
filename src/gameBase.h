#ifndef GAMEBASE_H
#define GAMEBASE_H

#include "headers.h"
#include "define.h"

struct CONTENT
{
	int Index;
	int NextIndex;
	int PreIndex;

	const char* Msg;
	bool Optional;
	int Options[4];

	CONTENT() {CleanUp();}
	CONTENT(int index, int next_index, int pre_index, const char* msg, bool optional)
	{
		Index = index;
		NextIndex = next_index;
		PreIndex = pre_index;
		Msg = msg;
		Optional = optional;
	}
	void CleanUp()
	{
		Index = INVALID_ID;
		NextIndex = INVALID_ID;
		PreIndex = INVALID_ID;
		Msg = "";
		Optional = false;
	}
	void CleanOption()
	{
		for (int i=0; i<MAX_OPTION_NUM; i++)
		{
			Options[i] = INVALID_ID;
		}
	}

	void Display()
	{
		cout<<"Index: "<<Index<<endl;
		cout<<"Next Index: "<<NextIndex<<endl;
		cout<<"Pre Index: "<<PreIndex<<endl;
		cout<<"Msg: "<<Msg<<endl;
		if (Optional)
		{
			for(int i=0; i<MAX_OPTION_NUM; i++)
			{
				cout<<"Option "<<i+1<<": "<<Options[i]<<endl;
			}
		}

	}
};

#endif
