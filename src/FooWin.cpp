#ifdef WIN32

#include "FooWin.h"
#include "windows.h"

void FooWin::print() {
    std::cout << "win" << std::endl;
    MessageBox(NULL, "Hello, Windows!", "CPCN", MB_OK);
}

FooWin::~FooWin() {
    std::cout << "des win" << std::endl;
}

#endif
