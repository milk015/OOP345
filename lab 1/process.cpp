#include <iostream>
#include "process.h"
#include "CString.h"

namespace w1{
    void process(const char * string, std::ostream& os) {
        static int cnt = 0;
        CString string2(string);
        //prints out as 
        //0: oop
        //1: dps
        os << cnt++ << ": " << string2 << std::endl; 
    }
}