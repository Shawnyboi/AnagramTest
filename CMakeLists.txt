cmake_minimum_required(VERSION 3.17)
project(Anagram)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")

add_executable(Anagram main.cpp AnagramMap.cpp AnagramMap.h DictionaryLoader.cpp DictionaryLoader.h Anagrams.cpp Anagrams.h InputOutputHandler.cpp InputOutputHandler.h)