#include "Foo.h"
#include <memory>

#ifdef P_WIN

#include "FooWin.h"

#endif

#ifdef P_LIN
#include "FooLin.h"
#endif

std::unique_ptr<Foo> Foo::Create() {
#ifdef P_WIN
    auto foo = std::unique_ptr<Foo>(new FooWin());
#endif
#ifdef P_LIN
    auto foo = std::unique_ptr<Foo>(new FooLin());
#endif
    return foo;
}
