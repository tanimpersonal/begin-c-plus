cmake_minimum_required(VERSION 3.23)
project(begin_c_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(begin_c_plus
        trapezoid.c++)

add_executable(trapezoid trapezoid.c++)
add_executable(consonant consonant.cpp)
add_executable(binary-add-sub binary-add-sub.cpp)
add_executable(candies candies.cpp)
add_executable(hotel-fee hotel-fee.cpp)
add_executable(two-rectangle two-rectangle.cpp)
add_executable(candy-fight candy-fight.cpp)
add_executable(restaurent-yen restaurent-yen.cpp)
add_executable(pole pole.cpp)