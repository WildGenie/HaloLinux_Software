# find all source and header files in build directory
file(GLOB SRCS_CPP "*.cpp")
file(GLOB SRCS_H "*.h")


# OpticsMountScienceLibraries_API
set(CMAKE_CPP_CREATE_STATIC_LIBRARY on)
add_library(OpticsMountScienceLibraries_API STATIC ${SRCS_H} ${SRCS_CPP})
SET_TARGET_PROPERTIES(OpticsMountScienceLibraries_API PROPERTIES LINKER_LANGUAGE CXX)
#TARGET_LINK_LIBRARIES(pthread)

