add_subdirectory("ticket_booking")

add_executable(main main.cpp)
target_link_libraries(main ticket_booking)