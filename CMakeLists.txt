cmake_minimum_required(VERSION 3.5)
project(academico LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(academico main.cpp aluno.cpp pessoa.cpp ficharioaluno.cpp)


#mkdir build
#cd build
#cmake ../
#make
