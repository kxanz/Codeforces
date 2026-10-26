cmake_minimum_required(VERSION 3.20)
project(Codeforces LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-g -Wall -Wextra -fsanitize=address,undefined)
add_link_options(-fsanitize=address,undefined)

# Find every .cpp file in the project
file(GLOB_RECURSE ALL_SOURCES CONFIGURE_DEPENDS "*.cpp")

# Exclude anything CMake writes into the build directory itself
list(FILTER ALL_SOURCES EXCLUDE REGEX "^${CMAKE_BINARY_DIR}")

foreach(SOURCE_FILE ${ALL_SOURCES})
    # Get path relative to project root
    file(RELATIVE_PATH REL_PATH "${CMAKE_SOURCE_DIR}" "${SOURCE_FILE}")

    # Turn "800/watermelon.cpp" into target name "800_watermelon"
    string(REPLACE "/" "_" TARGET_NAME "${REL_PATH}")
    string(REPLACE " " "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE ".cpp" "" TARGET_NAME "${TARGET_NAME}")

    add_executable("${TARGET_NAME}" "${SOURCE_FILE}")
endforeach()
