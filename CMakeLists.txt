project(obj2pcd)
cmake_minimum_required(VERSION 2.8)

find_package(PCL 1.6 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} boost_system pcl_io pcl_common)
