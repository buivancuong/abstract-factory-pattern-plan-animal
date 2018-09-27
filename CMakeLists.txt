cmake_minimum_required(VERSION 3.12)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory model/animal/Animal.h model/animal/Pig.cpp model/animal/Pig.h model/animal/Cow.cpp model/animal/Cow.h model/animal/Chicken.cpp model/animal/Chicken.h model/plant/Plant.h model/plant/Wood.cpp model/plant/Wood.h model/plant/Food.cpp model/plant/Food.h main/main.cpp factory/AbstractFactory.cpp factory/AbstractFactory.h)