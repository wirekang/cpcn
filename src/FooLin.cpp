#ifdef P_LIN

#include "FooLin.h"
#include <iostream>
#include <unistd.h>
#include <X11/Xlib.h>

void Foo::print() {
    std::cout << "lin" << std::endl;
    Display *display;
    Window window;

    display = XOpenDisplay(NULL);

    if (display == NULL) {
        std::cout << "no display" << std::endl;
        return;
    }

    window = XCreateSimpleWindow(display, DefaultRootWindow(display), 0, 0, 200, 100, 0, 0, 0);
    XMapWindow(display, window);
    XFlush(display);
    sleep(2);
    XCloseDisplay(display);
}

Foo::~Foo() {
    std::cout << "des lin" << std::endl;
}

#endif
