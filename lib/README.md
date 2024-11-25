

cmake commands
when you have a lib folder with lib -> retrofont -> include / libRetroFont
set(RETROFONT_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/lib/retrofont/include")
set(RETROFONT_LIB_DIR "${CMAKE_SOURCE_DIR}/lib/retrofont/libRetroFont")

# Add the include directory for RetroFont
target_include_directories(SDLPong PRIVATE ${RETROFONT_INCLUDE_DIR})

# Link with the static library
target_link_libraries(SDLPong PRIVATE ${RETROFONT_LIB_DIR}/libRetroFont_Static.a)

then you can include with "RetroFont.h"


For c you need to do #define RETROFONT_C before the header inclusion