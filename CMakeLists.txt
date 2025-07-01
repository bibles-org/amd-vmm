cmake_minimum_required(VERSION 3.22)
project(amd-vmm LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/vendor/crosswdk/")
find_package(CrossWDK REQUIRED)

set(CMAKE_CXX_STANDARD 23)

wdk_add_driver(${PROJECT_NAME}
        main.cpp
)