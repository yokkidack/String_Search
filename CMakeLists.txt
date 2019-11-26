cmake_minimum_required(VERSION 3.8)

set(CMAKE_BUILD_TYPE Debug)

include("cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.19.123.tar.gz"
    SHA1 "57d07480686f82ddc916a5980b4f2a18e5954c2b"
)

project(string_search)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#option(BUILD_TESTS "tests" ON)

add_executable(
	string_search
 	demo/main.cxx
)

# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)


  hunter_add_package(Catch)
  find_package(Catch CONFIG REQUIRED)

  enable_testing()

  file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
  add_executable(
	test_target
    tests/search_tests.cpp
  )
  target_link_libraries(test_target Catch::Catch )
  include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
  add_test(NAME test_name COMMAND tests "-s" "-r" "compact" "--use-colour" "yes")
