#ifndef CPCN_FOO_H
#define CPCN_FOO_H


class Foo {
public:
    virtual ~Foo() = default;

    virtual void print() = 0;

    static Foo *NewInstance();
};


#endif //CPCN_FOO_H
