cmake_minimum_required(VERSION 2.8)

# Make PROJECT_SOURCE_DIR, PROJECT_BINARY_DIR, and PROJECT_NAME available.
set(PROJECT_NAME task1) 
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "-g -Wall")

# If you want your own include/ directory, set this, and then you can do
# include_directories(${COMMON_INCLUDES}) in other CMakeLists.txt files.
# set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)

#----------------------------------------------------------------------------
# Define project sources and includes
#----------------------------------------------------------------------------
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${COMMON_INCLUDES})
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)


set(SRC_FILES ${PROJECT_SOURCE_DIR}/src/main.cpp include/Cleaner.h include/Company.h include/Driver.h include/Employee.h include/Engineer.h include/Interfaces.h include/Manager.h include/Personal.h include/Programmer.h include/ProjectManager.h include/Projects.h include/SeniorManager.h include/TeamLeader.h include/Tester.h src/Cleaner.cpp src/Company.cpp include/Driver.cpp src/Employee.cpp src/Engineer.cpp src/Manager.cpp src/Personal.cpp src/Programmer.cpp src/ProjectManager.cpp src/Projects.cpp src/SeniorManager.cpp src/TeamLeader.cpp src/Tester.cpp)

set(CMAKE_CXX_STANDARD 11)

add_library(task1_lib ${SRC_FILES})
add_executable(task1 ${PROJECT_SOURCE_DIR}/src/main.cpp src/main.cpp)

target_link_libraries(task1 task1_lib)

################################
# Testing
################################

# Options. Turn on with 'cmake -Dmyvarname=ON'.
option(BUILD_TESTS "Build all tests." OFF) # Makes boolean 'test' available.

if (BUILD_TESTS)
  # This adds another subdirectory, which has 'project(gtest)'.
  add_subdirectory(ext/gtest-1.8.0)

  enable_testing()

  # Include the gtest library. gtest_SOURCE_DIR is available due to
  # 'project(gtest)' above.
  include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

  ##############
  # Unit Tests
  ##############
  add_executable(runUnitTests ${TEST_SRC_FILES})

  # Standard linking to gtest stuff.
  target_link_libraries(runUnitTests gtest gtest_main)

  # Extra linking for the project.
  target_link_libraries(runUnitTests task1_lib)

  # This is so you can do 'make test' to see all your tests run, instead of
  # manually running the executable runUnitTests to see those specific tests.
  add_test(UnitTests runUnitTests)

  set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/.travis/cmake)

  if (CMAKE_BUILD_TYPE STREQUAL "Coverage")
    include(CodeCoverage)
    setup_target_for_coverage(${PROJECT_NAME}_coverage runUnitTests coverage)

    SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
  endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"

endif()
