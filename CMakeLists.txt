cmake_minimum_required(VERSION 3.0.0)
project(Regev VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Regev main.cpp Regev/Regev.h myMat.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_link_libraries(Regev ntl m gmp pthread)