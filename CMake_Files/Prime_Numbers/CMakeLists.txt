cmake_minimum_required(VERSION 3.10)
project(PrimeCheck C)

set(CMAKE_C_STANDARD 99)

add_executable(prime_check main.c prime.c)

