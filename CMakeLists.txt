cmake_minimum_required(VERSION 3.26)
project(cpcn)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpcn
        src/main.cpp
        src/Foo.h
        src/FooWin.cpp
        src/FooWin.h
        src/FooLin.cpp
        src/FooLin.h
)

# Windows
if (WIN32)
    target_compile_definitions(cpcn PUBLIC P_WIN)
endif (WIN32)

# Linux
if (UNIX AND NOT APPLE)
    target_compile_definitions(cpcn PUBLIC P_LIN)
    find_package(X11 REQUIRED)
    target_include_directories(cpcn PUBLIC ${X11_INCLUDE_DIR})
    target_link_libraries(cpcn PUBLIC ${X11_LIBRARIES})
endif (UNIX AND NOT APPLE)

# Apple
if (APPLE)
    target_compile_definitions(cpcn PUBLIC P_APP)
endif (APPLE)
