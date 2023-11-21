#ifdef P_WIN

#include "FooWin.h"
#include "windows.h"
#include "iostream"

void Foo::print() {
    std::cout << "win" << std::endl;
    MessageBox(nullptr, "Hello, Windows!", "CPCN", MB_OK);
}

Foo::~Foo() {
    std::cout << "des win" << std::endl;
}

#endif
