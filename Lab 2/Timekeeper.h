/*
 ============================================================================
 Name        : Timekeeper.h
 Author      : Jorge Bejarano
 Email       : jbejarano@myseneca.ca
 StudentNum   : 023042153
 Course Code : OOP345
 Section     : SAA
 Date        : May 28, 2019 -
 Workshop    : Workshop 2 - Lab
 ============================================================================
 */
/*
 ============================================================================
 Description : Workshop 2 in-lab
 ============================================================================
*/

#ifndef TIMEKEEPER_H_
#define TIMEKEEPER_H_

#include <iostream>
#include <chrono>

namespace sict{
    const int ten = 10;//used for struct.
    class Timekeeper{
        const int maxRecords = 10;
        int numOfRecords = 0;
        size_t cnt;
        std::chrono::steady_clock::time_point startT;
        std::chrono::steady_clock::time_point finish;
        struct	{
			const char* msgStr;
			const char* timeUnits;
			std::chrono::steady_clock::duration elapsedTime;
		} record[ten];
    public:
        Timekeeper();
        void start();
        void stop();
        void recordEvent(char* strObj);
        std::ostream& report(std::ostream& Obj);
    };
}
#endif //TIMEKEEPER_H_