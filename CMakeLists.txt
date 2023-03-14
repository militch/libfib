cmake_minimum_required(VERSION 3.24)

project(fib)
set(CMAKE_CXX_STANDARD 11)

include_directories("/Library/Java/JavaVirtualMachines/temurin-17.jdk/Contents/Home/include")

include_directories("/Library/Java/JavaVirtualMachines/temurin-17.jdk/Contents/Home/include/darwin")

aux_source_directory(src SRC)
aux_source_directory(jni SRC_JNI)


add_executable(main ${SRC} main.c)

add_library(fib SHARED ${SRC} ${SRC_JNI})