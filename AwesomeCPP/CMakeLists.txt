﻿# CMakeList.txt : CMake project for AwesomeCPP, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (AwesomeCPP "AwesomeCPP.cpp" "AwesomeCPP.h" "functions.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AwesomeCPP PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
