#include <memory>
#include "Foo.h"

int main() {
    std::unique_ptr<Foo> foo(Foo::NewInstance());
    foo->print();
    return 0;
}
