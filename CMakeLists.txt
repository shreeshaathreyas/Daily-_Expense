cmake_minimum_required(VERSION 3.10)

# Project Name
project(ExpenseTracker)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Add Source Files
add_executable(ExpenseTracker main.cpp ExpenseManager.cpp)
