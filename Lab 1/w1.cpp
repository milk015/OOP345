/*
 ============================================================================
 Name        : w1.cpp
 Author      : Jorge Bejarano
 Email       : jbejarano@myseneca.ca
 StudentNum   : 023042153
 Course Code : OOP345
 Section     : SAA
 Date        : May 17, 2019 -
 Workshop    : Workshop 1 - Lab
 ============================================================================
 */
/*
 ============================================================================
 Description : Workshop 1 in-lab, to grab the first 3 characters from course 
 codes presented in command line arguments.
 ============================================================================
*/
#include "process.h"
#include <iostream>


namespace sict{

    int initial = 3;

    int main(int argc, char* argv[]) {
        
        std::cout << "Command line: ";
        for (int i = 0; i < argc; i++ ){
            std::cout << argv[i];
        }
        if (argc < 2){
            std::cout << "*** insufficient number of arguments***" << std::endl;
            return 1;
        }

        for (int i = 1; i < argc; i++) {
            process(argv[i]);
        }

        return 0;
    }
}