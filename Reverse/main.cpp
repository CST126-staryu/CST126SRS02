#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;


int main()
{
	const char** nameList = nullptr;
	size_t size = 0; 
	size_t capacity = 0;
	for (;;)
	{
		auto p = cin.peek();
		if (p != '\n')
		{
			char name1[258];
			cin >> name1;
			const auto length1 = strlen(name1);
			char* const cname1 = new char[length1 + 1];
			assert(size <= capacity);
			if (size == capacity)
			{
				++capacity;
				const auto tempList = new const char*[capacity]; 
				memcpy(tempList, nameList, sizeof(char*) * capacity);
				delete[] nameList;
				nameList = tempList;
			}
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

