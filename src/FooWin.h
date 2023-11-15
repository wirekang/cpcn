#ifdef P_WIN
#ifndef CPCN_FOOWIN_H
#define CPCN_FOOWIN_H


#include <iostream>
#include "Foo.h"

class FooWin : public Foo {
public:
    ~FooWin() override;

    void print() override;
};


#endif //CPCN_FOOWIN_H
#endif
