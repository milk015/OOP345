#ifndef _STRING_H_
#define _STRING_H_
#include <iostream>

namespace sict{

    class String {
        const int MAX = 3;
        char courseCode[4];

    public:
        String(const char* str);
        void display(std::ostream &os);
    };
    //helper function
}
#endif