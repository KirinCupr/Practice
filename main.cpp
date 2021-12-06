#include <iostream>
#include "functions.h"
using namespace std;
int N{32};
int main(){
    int n{};
    int num{};
    //Info stud_array[N]{};
    //int x{};
    Info *stud_array = new Info[N];
    do {
        cout << "\nMenu:\n"
                " 1.Entering information from the keyboard. \n"
                " 2.Entering information from a file. \n"
                " 3.Entering information from a binary file.\n"
                " 4.Data output to the screen. \n"
                " 5.Output data to a file. \n"
                " 6.Printout of data information on request. \n"
                " 7.Translation of the database into a text file. \n"
                " 8.Translating the contents of a text file into a binary file. \n"
                " 9.Adding an entry. \n"
                " 10.Changing an entry. \n"
                " 11.Deleting an entry. \n"
                " 12.Sorting. \n"
                " 13.Exit. \n";
        cout << "\nChoose item: \n";
        cin >> n;
        switch (n){
            case FROM_KEYBOARD: {// item 1
                cout << "Entering information from the keyboard:\n";
                cout << "Enter number of students:\n";
                cin >> num;
                Enter_from_keyboard(stud_array, num);
                cin.clear();
                break;
            }
            case FROM_FILE: {// item 2
                cout << "Entering information from a file:\n";
                cin.clear();
                break;
            }
            case FROM_BIN_FILE: {// item 3
                cout << "Entering information from a binary file:\n";
                cin.clear();
                return_to_menu();
                break;
            }
            case SCREEN_OUTPUT: {// item 4
                cout << "Data output to the screen:\n";
                Data_output_to_screen(stud_array, &num);
                cin.clear();
                return_to_menu();
                break;
            }
            case FILE_OUTPUT: {// item 5
                cout << "Output data to a file:\n";
                cin.clear();
                return_to_menu();
                break;
            }
            case REQUEST:{// item 6
                cout << "Printout of data information on request:\n";
                Printout_on_request(stud_array, N);
                cin.clear();
                return_to_menu();
                break;
            }
            case DATA_TO_TEXT: {// item 7
                cout << "Translation of the database into a text file:\n";
                cin.clear();
                return_to_menu();
                break;
            }
            case TEXT_TO_BIN: {// item 8
                cout << "Translating the contents of a text file into a binary file:\n";
                cin.clear();
                return_to_menu();
                break;
            }
            case ADD: {// item 9
                cout << "Adding an entry:\n";
                Add_note(stud_array, &num);
                cin.clear();
                return_to_menu();
                break;
            }
            case CHANGE: {// item 10
                cout << "Changing an entry:\n";
                cin.clear();
                change_note(stud_array, &num);
                break;
            }
            case DEL: {// item 11
                cout << "Deleting an entry:\n";
                cin.clear();
                delete_note(stud_array, &num);
                return_to_menu();
                break;
            }
            case SORT: {// item 12
                cout << "Sorting:\n";
                cin.clear();
                sorting(stud_array, &num);
                return_to_menu();
                break;
            }
            case EXIT: {// item 13
                cout << "Exit\n";
                cin.clear();
                break;
            }
            default: {
                cout << "Error\nExit\n";
                cin.clear();
                break;
            }
        }
    } while (n != 13);
    delete[] stud_array;
    system("pause");
    return 0;
}