project(${PROJECT_NAME})


set(CMAKE_CXX_FLAGS "-g -Wall")
set(CMAKE_CXX_FLAGS "-g -Wall")
set(CMAKE_CXX_FLAGS "-fpermissive -std=c++0x")


# If you want your own include/ directory, set this, and then you can do
# If you want your own include/ directory, set this, and then you can do
# include_directories(${COMMON_INCLUDES}) in other CMakeLists.txt files.
# include_directories(${COMMON_INCLUDES}) in other CMakeLists.txt files.
@@ -18,9 +19,7 @@ include_directories(${COMMON_INCLUDES})
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)




set(SRC_FILES ${PROJECT_SOURCE_DIR}/src/Cleaner.cpp
set(SRC_FILES ${PROJECT_SOURCE_DIR}/src/Driver.cpp)
		${PROJECT_SOURCE_DIR}/src/Engineer.cpp
		${PROJECT_SOURCE_DIR}/src/Programmer.cpp
		${PROJECT_SOURCE_DIR}/src/Tester.cpp
		${PROJECT_SOURCE_DIR}/src/TeamLeader.cpp
		${PROJECT_SOURCE_DIR}/src/Manager.cpp
		${PROJECT_SOURCE_DIR}/src/ProjectManager.cpp
		${PROJECT_SOURCE_DIR}/src/SeniorManager.cpp
		${PROJECT_SOURCE_DIR}/src/Company.cpp
		${PROJECT_SOURCE_DIR}/src/Employee.cpp
		${PROJECT_SOURCE_DIR}/src/Personal.cpp)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)


@@ -69,6 +68,7 @@ if (BUILD_TESTS)


    SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    SET(CMAKE_CXX_FLAGS "-fpermissive -std=c++0x")
  endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"
  endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"


endif()
endif()