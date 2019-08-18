cmake_minimum_required (VERSION 3.8)

project(ASCII LANGUAGES C CXX)

#add_executable(
#	ascii_lines 
#	"Source.cpp" 
#	"ASCII_Lines.cpp")

set(BUILD_SHARED_LIBS YES)

add_library(
	ascii_lines_lib
	STATIC
	ASCII_LINES.h
	ASCII_LINES.cpp
)

