include_directories(${PROJECT_SOURCE_DIR}/inc /opt/SFML-2.1/include)
link_directories(/opt/SFML-2.1/lib)
add_executable(poydragondrop main.cpp)
target_link_libraries(poydragondrop sfml-window sfml-system)
