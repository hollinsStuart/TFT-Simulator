cmake_minimum_required(VERSION 3.24)
project(TFT-Simulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(TFT main.cpp Champion.cpp Gear.cpp Synergy.cpp Synergy.h Item.cpp Item.h Player.cpp Player.h Board.cpp Board.h Game.cpp Game.h HelperFunctions.cpp HelperFunctions.h Unit.cpp Unit.h Exceptions.h)
