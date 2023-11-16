#include "Foo.h"

int main() {
    auto foo = Foo::Create();
    foo->print();
    return 0;
}
