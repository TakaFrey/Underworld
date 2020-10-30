# a file to deal with examples in this folder.

# sfml can be tricky (3 hours latter...) you need to precise where your sfml find package.cmake dwell
set(CMAKE_MODULE_PATH "/usr/lib/x86_64-linux-gnu/cmake/SFML/SFMLConfig.cmake" ${CMAKE_MODULE_PATH})


# we add the directories containing the .h files
include_directories(${CMAKE_SOURCE_DIR}/src)

## pour linker statiquement
# set(SFML_STATIC_LIBRARIES TRUE)

find_package(SFML COMPONENTS graphics window system audio network REQUIRED)

add_executable(Launch main.cpp)
target_link_libraries(Launch Game)
target_link_libraries(Launch States)
target_link_libraries(Launch Entities)
target_link_libraries(Launch sfml-graphics sfml-window sfml-system sfml-audio sfml-network)