cmake_minimum_required(VERSION 3.5.0)
project(15.6 VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)
# include(CTest)
# enable_testing()

add_executable(15.6 src/main.cpp src/vehicule.cpp src/voiture.cpp src/moto.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
