# CMakeLists.txt (fragment of) 
cmake_minimum_required(VERSION 2.8.0)
project(MathsLib) 
include(CTest)

if(WIN32)
set(CPACK_GENERATOR "NSIS")
else()
set(CPACK_GENERATOR "ZIP")
endif()
include(CPack)

if( NOT BUILD_SHARED_LIBS )
# if static libs are compiled we need
# to shomehow communicate that to the 
# source code. The definition will be 
# used to determine how MATHSLIB_API
# is defined in adder.h
add_definitions( -Dmaths_STATIC )
endif()


add_library (maths adder.h adder.cpp)

add_executable(calc calc.cpp)
target_link_libraries(calc maths)

add_executable(test1 test1.cpp) 
target_link_libraries(test1 maths)

install(TARGETS calc maths
RUNTIME DESTINATION bin
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib/static)


add_test(test1 test1)