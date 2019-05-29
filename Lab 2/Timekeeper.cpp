/*
 ============================================================================
 Name        : Timekeeper.cpp
 Author      : Jorge Bejarano
 Email       : jbejarano@myseneca.ca
 StudentNum   : 023042153
 Course Code : OOP345
 Section     : SAA
 Date        : May 28, 2019
 Workshop    : Workshop 2 - Lab
 ============================================================================
 */

#include "Timekeeper.h"

#include <string>
#include <cstring>
#include <chrono>

namespace sict{

    Timekeeper::Timekeeper() {
        numOfRecords = 0;
        
    }

    void Timekeeper::start(){
        startT = std::chrono::steady_clock::now();
    }

    void Timekeeper::stop() {
        finish = std::chrono::steady_clock::now();
    }

    void Timekeeper::recordEvent(char* strObj) {

        auto begin = startT;
        auto end = finish;

        if (cnt<maxRecords) {
            record[cnt].msgStr = strObj;
            record[cnt].elapsedTime = end - begin;
            cnt++;
        }
    }
    std::ostream &Timekeeper::report(std::ostream & Obj){
        Obj << "\nExecution Times:" << std::endl;

		for (size_t i = 0; i < cnt; ++i)
			Obj << record[i].msgStr << std::setw(6) << std::chrono::duration_cast<std::chrono::milliseconds>(record[i].elapsedTime).count() << " " << record[i].timeUnits << std::endl;
		return Obj;
    }
}