set(CMAKE_CXX_STANDARD 11)

add_library(task1_lib ${SRC_FILES})
add_executable(task1 ${PROJECT_SOURCE_DIR}/src/main.cpp)
#add_library(task1_lib ${SRC_FILES})

target_link_libraries(task1 task1_lib)
target_link_libraries(task1)

################################
# Testing
@@ -55,7 +55,7 @@ if (BUILD_TESTS)
  target_link_libraries(runUnitTests gtest gtest_main)

  # Extra linking for the project.
  target_link_libraries(runUnitTests task1_lib)
  target_link_libraries(runUnitTests)

  # This is so you can do 'make test' to see all your tests run, instead of
  # manually running the executable runUnitTests to see those specific tests.
@@ -71,4 +71,4 @@ if (BUILD_TESTS)
    SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
  endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"

endif()
endif()
