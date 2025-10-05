cmake_minimum_required(VERSION 3.10)
project(Incremental)

set(CMAKE_CXX_STANDARD 17)

set(SRC
    ./src/main.cpp
    ./src/Player/Player.cpp
)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${SRC})

link_directories(${CMAKE_SOURCE_DIR}/lib)
target_link_libraries(${PROJECT_NAME} PRIVATE
    "${CMAKE_SOURCE_DIR}/lib/libraylib.a"
    winmm
)