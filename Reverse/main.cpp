#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	char* nameList[3];
	size_t size = 0; 
	for (;;)
	{
		auto p = cin.peek();
		if (p != '\n')
		{
			char name1[258];
			cin >> name1;
			const auto length1 = strlen(name1);
			char* const cname1 = new char[length1 + 1];
			nameList[size++] = cname1;
			strcpy(cname1, name1);
		}
		else
		{
			//TODO - cout in reverse order
		}
	}

    return 0;
}

