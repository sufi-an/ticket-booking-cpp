add_subdirectory("ticket_booking")
add_subdirectory("home")

add_executable(main main.cpp)
target_link_libraries(main home)