#include <iostream>
#include <cstring>
#include "CString.h"
#pragma warning(disable : 4996) // removing warning for STRNCPY

int GStore = 3;

namespace w1 {
    //int GStore = 3;

    /*CString::CString(){
        max = 0; 
        string[0] = '\0';
    }*/

    CString::CString() :max { 0 } , string { '\0' } {}

    CString::CString(const char* str) : max{GStore} {
        if (str == nullptr) {
            string[0] = '\0'; 
        }
        else {
            strncpy(string, str, max);
            string[max] = '\0';
        }
        
    }
    void CString::display(std::ostream & os) const {
		os << string;
	}
    std::ostream& operator<<(std::ostream& os, CString& str) {
		str.display(os);
		return os;
	}

}
