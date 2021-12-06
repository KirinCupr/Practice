cmake_minimum_required(VERSION 3.20)
project(Practice)

set(CMAKE_CXX_STANDARD 17)

add_executable(Practice main.cpp "Enter_from_keyboard.cpp" "Enter_from_keyboard.h" structs.h Data_output_to_screen.cpp Data_output_to_screen.h Printout_on_request.cpp Printout_on_request.h functions.h Add_note.cpp Add_note.h return_to_menu.cpp return_to_menu.h change_note.cpp change_note.h delete_note.cpp delete_note.h sorting.cpp sorting.h)
