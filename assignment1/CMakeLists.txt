#cmake_minimum_required (VERSION 2.6)
project(kalman)
set(SRC_LIST KalmanFilter.cpp)
add_executable(kalman ${SRC_LIST})
