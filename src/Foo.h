#ifndef CPCN_FOO_H
#define CPCN_FOO_H
#include <memory>


class Foo {
public:
    virtual ~Foo() = default;

    virtual void print() = 0;

    static std::unique_ptr<Foo> Create();
};


#endif //CPCN_FOO_H
