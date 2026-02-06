#pragma once

namespace THPrac {


#define THPRAC_VERSION_0 0
#define THPRAC_VERSION_1 9
#define THPRAC_VERSION_2 0
#define THPRAC_VERSION_3 0

#define STRR(X) #X
#define STR(X) STRR(X)


const char* GetVersionStr();
const wchar_t* GetVersionWcs();
const int* GetVersionInt();
}
