cmake_minimum_required(VERSION 3.3)
project(Game)

set(CMAKE_MODULE_PATH  "~/Documents/findCMake/" ${CMAKE_MODULE_PATH})
set(EXECUTABLE_NAME "myproject")
set(SOURCE_FILES main.cpp)
add_executable(${EXECUTABLE_NAME} main.cpp)




#Find any version 2.X of SFML
#See the FindSFML.cmake file for additional details and instructions
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()


# Install target
install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)


# CPack packaging
include(InstallRequiredSystemLibraries)
include(CPack)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
