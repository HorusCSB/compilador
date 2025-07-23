# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/thirdparty/utfcpp"
  "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/utfcpp-prefix/src/utfcpp-build"
  "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/utfcpp-prefix"
  "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/utfcpp-prefix/tmp"
  "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/utfcpp-prefix/src/utfcpp-stamp"
  "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/utfcpp-prefix/src"
  "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/utfcpp-prefix/src/utfcpp-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/utfcpp-prefix/src/utfcpp-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/tcc/Projetos/compilador/antlr4_runtime_cpp/build/runtime/utfcpp-prefix/src/utfcpp-stamp${cfgdir}") # cfgdir has leading slash
endif()
