cmake_minimum_required(VERSION 3.15)
project(EstudoDia3)

add_library(financeiro_lib src/financeiro/Financeiro.cpp)
target_include_directories(financeiro_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(estudo_app src/main.cpp)
target_link_libraries(estudo_app PRIVATE financeiro_lib)
