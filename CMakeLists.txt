cmake_minimum_required(VERSION 3.28)
project(RetroFont)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES RetroFont.cpp)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../lib)

add_library(RetroFont_Static STATIC ${SOURCE_FILES})
add_library(RetroFont_Shared SHARED ${SOURCE_FILES})

set_target_properties(RetroFont_Static PROPERTIES
        ARCHIVE_OUTPUT_NAME "RetroFont_Static"
)

# Version and so version for the shared library
set_target_properties(RetroFont_Shared PROPERTIES
        LIBRARY_OUTPUT_NAME "RetroFont_Shared"
        VERSION 1.0
        SOVERSION 1
)

set_target_properties(RetroFont_Shared PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

target_include_directories(RetroFont_Static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(RetroFont_Shared PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
