/*
 ============================================================================
 Name        : Text.cpp
 Author      : Jorge Bejarano
 Email       : jbejarano@myseneca.ca
 StudentNum   : 023042153
 Course Code : OOP345
 Section     : SAA
 Date        : May 28, 2019 -
 Workshop    : Workshop 2 - Lab
 ============================================================================
 */

#include "Text.h"
#include <string>
#include <fstream>

namespace sict{

    Text::Text(){
        strStored = 0;
        stringAry = nullptr;
    }

    Text::Text(const char* str) {
        std::string buff = {};
		std::ifstream file;
		file.open(str);

		if (file.is_open())
		{
			while (std::getline(file, buff))
				++strStored;
		}

		stringAry = new std::string[strStored];

		int x = 0;
		std::string l = {};

		while (std::getline(file, l))
			stringAry[x] = l;
    }

    Text::Text(const Text& strObj){
        stringAry = nullptr;
        *this = strObj;
    }

    Text& Text::operator=(const Text& obj){
        if (this != &obj) {
			strStored = obj.strStored;

			stringAry = new std::string[strStored];

			for (size_t cnt = 0; cnt < (size_t)strStored; cnt++)
				stringAry[cnt] = obj.stringAry[cnt];
		}
		return *this;
    }
}