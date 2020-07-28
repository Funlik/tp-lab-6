file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)


set(SRC_FILES ${PROJECT_SOURCE_DIR}/src/personal.cpp
        ${PROJECT_SOURCE_DIR}/src/engineer.cpp
        ${PROJECT_SOURCE_DIR}/src/manager.cpp)
set(SRC_FILES ${PROJECT_SOURCE_DIR}/src/Personal.cpp
        ${PROJECT_SOURCE_DIR}/src/Factory.cpp
        ${PROJECT_SOURCE_DIR}/src/Employee.cpp
        ${PROJECT_SOURCE_DIR}/src/Engineer.cpp
        ${PROJECT_SOURCE_DIR}/src/Manager.cpp)

set(CMAKE_CXX_STANDARD 11)