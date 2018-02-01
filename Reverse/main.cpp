#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cassert>
#include <string>
using namespace std;


int main()
{
	const char** nameList = nullptr;
	size_t size = 0; 
	size_t capacity = 0;
	while (cin.good())
	{
		auto p = cin.peek();
		if (p != '\n' && p != EOF)
		{
			char name1[258];
			cin >> name1 >> ws;
			if(!cin.good())
			{
				break;
			}
			const auto length1 = strlen(name1);
			char* const cname1 = new char[length1 + 1];
			assert(size <= capacity);
			if (size == capacity)
			{
				++capacity;
				const auto tempList = new const char*[capacity]; 
				memcpy(tempList, nameList, sizeof(char*) * size);
				delete[] nameList;
				nameList = tempList;
			}
			nameList[size++] = cname1;
			strcpy(cname1, name1);
		}
		else
		{
			cin.get();
			while (size != 0)
			{
				--size;
				cout << nameList[size];
				if(size != 0)
				{
					cout << " "; 
				}
				delete[] nameList[size];
			}
			cout << endl;
		}
	}

	delete[] nameList; 

    return 0;
}

