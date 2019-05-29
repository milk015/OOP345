/*
 ============================================================================
 Name        : Text.h
 Author      : Jorge Bejarano
 Email       : jbejarano@myseneca.ca
 StudentNum   : 023042153
 Course Code : OOP345
 Section     : SAA
 Date        : May 28, 2019 -
 Workshop    : Workshop 2 - Lab
 ============================================================================
 */

#ifndef TEXT_H_
#define TEXT_H_

#include <iostream>

namespace sict{
    class Text{
        int strStored;
        std::string* stringAry;
    public:
        Text();
        Text(const char* str);
        Text(const Text& strObj);
        Text& operator=(const Text& obj);
        ~Text();
        size_t size() const{return strStored;};
    };
}
#endif //TEXT_H_