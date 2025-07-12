cmake_minimum_required(VERSION 3.30)
project(cpp_hello)

set(CMAKE_CXX_STANDARD 20)

# utils lib
#add_library(hnjzsdx_utils
#        SHARED
#        class_utils/*.h
#        thread_utils/*.h
#        class_utils/non_copyable.h
#)
#target_include_directories(hnjzsdx_utils
#        PUBLIC
#        class_utils
#        thread_utils
#)

# example
add_executable(thread_pool_test thread_pool_test.cpp
        thread_utils/thread_pool_executor.cpp)
target_include_directories(thread_pool_test
        PRIVATE
        thread_utils
        class_utils
)