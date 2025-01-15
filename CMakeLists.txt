cmake_minimum_required(VERSION 3.30)

enable_testing()

project(raycasting)

include(CTest)

set(SOURCES src/raycasting.c)

add_compile_options(-std=c99 -Wall -g)
include_directories(include)

add_executable(main src/main.c ${SOURCES})

# tests_exec
add_executable(test_raycasting tests/test_raycasting.c ${SOURCES})

# raycasting_tests
add_test(NAME ray_create COMMAND test_raycasting ray_create)
add_test(NAME ray_free COMMAND test_raycasting ray_free)
add_test(NAME ray_get_distance COMMAND test_raycasting ray_get_distance)
add_test(NAME ray_get_nth COMMAND test_raycasting ray_get_nth)
add_test(NAME raycast_cast COMMAND test_raycasting raycast_cast)
