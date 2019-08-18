cmake_minimum_required (VERSION 3.8)

project(Character_Codes LANGUAGES C CXX)

add_executable(
	character_codes
	"Source.cpp" 
	"ASCII_Lines.h"
	"ASCII_Lines.cpp")

#set(BUILD_SHARED_LIBS YES)

add_library(
	line_codes
	STATIC
	ASCII_LINES.h
	ASCII_LINES.cpp
)

