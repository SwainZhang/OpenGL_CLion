cmake_minimum_required(VERSION 3.7)
project(testGL)

find_package(OpenGL REQUIRED)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp )

set(GCC_COVERAGE_LINK_FLAGS "-lglfw -lglew")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v")

add_executable(testGL ${SOURCE_FILES})
target_link_libraries(testGL ${OPENGL_gl_LIBRARY})

