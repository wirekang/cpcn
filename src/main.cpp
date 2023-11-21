#include "Foo.h"
#include <memory>

int main() {
    std::unique_ptr<Foo> foo(new Foo());
    foo->print();
    return 0;
}
