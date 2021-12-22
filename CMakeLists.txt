cmake_minimum_required(VERSION 3.21)
project(Advertiser_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(Advertiser_System main.cpp BaseAdvertising.h BaseAdvertising.cpp Advertiser.h Advertiser.cpp)
