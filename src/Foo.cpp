#include "Foo.h"

#ifdef P_WIN

#include "FooWin.h"

#endif
#ifdef P_LIN
#include "FooLin.h"
#endif

Foo *Foo::NewInstance() {
#ifdef P_WIN
    auto *foo = new FooWin();
#endif
#ifdef P_LIN
    auto *foo = new FooLin();
#endif
    return foo;
}
