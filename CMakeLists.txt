cmake_minimum_required(VERSION 3.27)

set(LIBRARY_VERSION 0.2)
project(RetroFont VERSION ${LIBRARY_VERSION})

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES RetroFont.cpp)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../lib/retrofontV${LIBRARY_VERSION}/retrofont/libRetroFont)

#copies the header to the lib folder
set(SOURCE_HEADER_PATH ${CMAKE_SOURCE_DIR}/RetroFont.h)
set(TARGET_INCLUDE_PATH ${CMAKE_SOURCE_DIR}/lib/retrofontV${LIBRARY_VERSION}/retrofont/include)
file(MAKE_DIRECTORY ${TARGET_INCLUDE_PATH})
file(COPY ${SOURCE_HEADER_PATH} DESTINATION ${TARGET_INCLUDE_PATH})

#copies the readme to the lib folder
set(SOURCE_README_PATH ${CMAKE_SOURCE_DIR}/README.md)
set(TARGET_README_PATH ${CMAKE_SOURCE_DIR}/lib/retrofontV${LIBRARY_VERSION}/retrofont)
file(MAKE_DIRECTORY ${TARGET_README_PATH})
file(COPY ${SOURCE_README_PATH} DESTINATION ${TARGET_README_PATH})



if(WIN32)
    set(LIBRARY_STATIC_NAME RetroFont_Static_WIN)
    set(LIBRARY_SHARED_NAME RetroFont_Shared_WIN)
elseif (APPLE)
    set(LIBRARY_STATIC_NAME RetroFont_Static_MACOS)
    set(LIBRARY_SHARED_NAME RetroFont_Shared_MACOS)
elseif (UNIX)
    set(LIBRARY_STATIC_NAME RetroFont_Static_UNIX)
    set(LIBRARY_SHARED_NAME RetroFont_Shared_UNIX)
else ()
    set(LIBRARY_STATIC_NAME RetroFont)
    set(LIBRARY_SHARED_NAME RetroFont)
endif ()

    add_library(${LIBRARY_STATIC_NAME} STATIC ${SOURCE_FILES})
    add_library(${LIBRARY_SHARED_NAME} SHARED ${SOURCE_FILES})

set_target_properties(${LIBRARY_STATIC_NAME} PROPERTIES
        LIBRARY_OUTPUT_NAME "${LIBRARY_STATIC_NAME}"
)

# Version and so version for the shared library
set_target_properties(${LIBRARY_SHARED_NAME} PROPERTIES
        LIBRARY_OUTPUT_NAME "${LIBRARY_SHARED_NAME}"
 #         VERSION 1.0
        #      SOVERSION 1
)

set_target_properties(${LIBRARY_SHARED_NAME} PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

target_include_directories(${LIBRARY_STATIC_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${LIBRARY_SHARED_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
