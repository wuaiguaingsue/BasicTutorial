cmake_minimum_required(VERSION 3.29)
project(GST-Tutorial)
set(CMAKE_CXX_STANDARD 20)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GSTREAMER REQUIRED gstreamer-1.0)

include_directories(${GSTREAMER_INCLUDE_DIRS})
link_directories(${GSTREAMER_LIBRARY_DIRS} /usr/local/lib)

add_executable(basic-tutorial-1 basic-tutorial-1.cpp)
target_link_libraries(basic-tutorial-1 ${GSTREAMER_LIBRARIES})

add_executable(basic-tutorial-2 basic-tutorial-2.cpp)
target_link_libraries(basic-tutorial-2 ${GSTREAMER_LIBRARIES})

add_executable(basic-tutorial-3 basic-tutorial-3.cpp)
target_link_libraries(basic-tutorial-3 ${GSTREAMER_LIBRARIES})

add_executable(basic-tutorial-4 basic-tutorial-4.cpp)
target_link_libraries(basic-tutorial-4 ${GSTREAMER_LIBRARIES})

add_executable(basic-tutorial-5 basic-tutorial-5.cpp)
target_link_libraries(basic-tutorial-5 ${GSTREAMER_LIBRARIES})

add_executable(basic-tutorial-6 basic-tutorial-6.cpp)
target_link_libraries(basic-tutorial-6 ${GSTREAMER_LIBRARIES})

add_executable(basic-tutorial-7 basic-tutorial-7.cpp)
target_link_libraries(basic-tutorial-7 ${GSTREAMER_LIBRARIES})

add_executable(basic-tutorial-8 basic-tutorial-8.cpp)
target_link_libraries(basic-tutorial-8 ${GSTREAMER_LIBRARIES})
