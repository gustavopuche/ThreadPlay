cmake_minimum_required(VERSION 3.15)
project( ThreadPlay )
# Enable C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Threads REQUIRED)
add_executable( ThreadPlay ThreadPlay.cpp )
target_link_libraries(ThreadPlay Threads::Threads)
add_custom_target(run)
add_custom_command( TARGET run
	POST_BUILD COMMAND ./ThreadPlay)
