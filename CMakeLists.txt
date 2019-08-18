cmake_minimum_required (VERSION 3.8)

project(Character_Codes LANGUAGES C CXX)

add_executable(
	character_codes
	"Source.cpp" 
	"Line_Codes.h"
	"Line_Codes.cpp")

#set(BUILD_SHARED_LIBS YES)

add_library(
	line_codes
	STATIC
	LINE_CODES.h
	LINE_CODES.cpp
)

