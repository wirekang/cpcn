#ifdef P_LIN
#ifndef CPCN_FOOLIN_H
#define CPCN_FOOLIN_H
#include "Foo.h"


class FooLin: public Foo {
public:
    ~FooLin() override;

    void print() override;
};


#endif //CPCN_FOOLIN_H
#endif
