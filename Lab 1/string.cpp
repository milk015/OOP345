#include "String.h"
#include <cstring>

namespace sict{
    String::String(const char* str){
      if (str == nullptr) {
            courseCode[0] = '\0'; 
        }
        else {
            int cnt = 0;
          while (cnt != MAX){
              courseCode[cnt] = str[cnt];
              cnt++;
          }
          courseCode[MAX] = '\0';
        }
    }

    void String::display(std::ostream &os){
        os << courseCode;
    }

    std::ostream& operator<<(std::ostream& os, String& str){

        str.display(os);
        return os;
    }
}