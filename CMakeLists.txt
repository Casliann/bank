cmake_minimum_required(VERSION 3.15...3.31)

project(bank VERSION 1.0
                  DESCRIPTION "bank project"
                  LANGUAGES C)

add_executable(bank src/main.c src/account.c src/transaction.c src/customer.c)

target_include_directories(bank PRIVATE include)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wno-unused-parameter")
