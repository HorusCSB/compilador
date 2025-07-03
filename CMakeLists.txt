cmake_minimum_required(VERSION 3.16)
project(trabCompiladores)
set(CMAKE_CXX_STANDARD 17)

# Adiciona o runtime do ANTLR como subdiretório
add_compile_definitions(ANTLR4CPP_STATIC)
add_subdirectory("C:/Users/Henrique-PC/antlr4/antlr4-cpp-runtime" antlr_runtime_build)

include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/saida
)

file(GLOB_RECURSE SOURCES
    "src/*.cpp"
    "saida/*.cpp"
)

add_executable(trabCompila ${SOURCES})

# Linka com a lib do runtime
target_link_libraries(trabCompila PRIVATE antlr4_cpp_runtime)
