cmake_minimum_required (VERSION 3.1)
set(PROJECT "cppsqlite-example")
project (${PROJECT} VERSION 0.1.0)

add_subdirectory(libsqlite3)
INCLUDE_DIRECTORIES(libsqlite3)


add_executable(example main.cpp)
target_link_libraries(example sqlite3)
