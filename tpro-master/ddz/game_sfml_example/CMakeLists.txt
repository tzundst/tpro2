cmake_minimum_required(VERSION 3.13)
project(ddz)

set(CMAKE_CXX_STANDART 14)
# set(CMAKE_MODULE_PATH "/usr/share/SFML/cmake/Modules/" ${CMAKE_MODULE_PATH}})
find_package(SFML 2.4.2 COMPONENTS graphics audio REQUIRED)

add_executable(Arkanoid_s Arkanoid_simple/main.cpp)
target_link_libraries(Arkanoid_s sfml-graphics sfml-audio sfml-window sfml-system)

add_executable(Arkanoid_c Arkanoid_chrono/main.cpp)
target_link_libraries(Arkanoid_c sfml-graphics sfml-audio sfml-window sfml-system)

add_executable(Arkanoid_cl Arkanoid_clock/main.cpp Arkanoid_clock/Ball.cpp Arkanoid_clock/Block.cpp Arkanoid_clock/BlocksField.cpp Arkanoid_clock/Game.cpp Arkanoid_clock/Paddle.cpp Arkanoid_clock/GlobalObjects.cpp)
target_link_libraries(Arkanoid_cl sfml-graphics sfml-audio sfml-window sfml-system)
