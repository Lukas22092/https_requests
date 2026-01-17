add_executable(socket main.cpp)

target_link_libraries(socket foo.cpp PRIVATE include)