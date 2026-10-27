cmake_minimum_required(VERSION 3.16)

project(olio-ohjelmointi-test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio-ohjelmointi-test main.cpp)

include(GNUInstallDirs)
install(TARGETS olio-ohjelmointi-test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
