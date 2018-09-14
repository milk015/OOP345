#ifndef _CSTRING_H_
#define _CSTRING_H_

#include <iostream>

namespace w1{
    class CString {
        const int max;
        //char string[15];
        char string[10];
        public:
		CString();
		CString(const char* str);
		void display(std::ostream& os) const;
	};

    std::ostream& operator<<(std::ostream& os, CString& str);
}

#endif