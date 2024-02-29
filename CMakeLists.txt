cmake_minimum_required(VERSION 3.27)

project(cglm-playground LANGUAGES C)

find_package(PkgConfig REQUIRED)

pkg_check_modules(CGLM REQUIRED cglm)
include_directories(${CGLM_INCLUDE_DIRS})
link_directories(${CGLM_LIBRARY_DIRS})
link_libraries(${CGLM_LIBRARIES} m)

add_executable(${PROJECT_NAME} main.c)
set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDARD 23)
target_compile_definitions(${PROJECT_NAME} PUBLIC CGLM_DEFINE_PRINTS=1)
