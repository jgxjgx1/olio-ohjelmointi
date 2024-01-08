cmake_minimum_required(VERSION 3.5)

project(vk1_t1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vk1_t1 main.cpp)

include(GNUInstallDirs)
install(TARGETS vk1_t1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
