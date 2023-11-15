# Cross-platform practice

The name `cpcn` is just a random characters without meaning.

## Build tools
Cmake->Ninja

## Abstraction

The `Foo` is an abstract class that has virtual destructor and `print` method.
Each platform has its own `Foo` implementation.
`Foo::NewInstance()` is a static function that allocate new `Foo` implementation of the current platform.

## Platforms

### Windows
Compiler: MINGW g++

includes "windows.h"

### Linux
Compiler: g++

includes "X11"

### Apple
TODO
