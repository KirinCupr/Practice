#include "change_note.h"
#include <iostream>
using namespace std;
void change_note(Info stud_array[], int *N){
    cin.clear();
    int cho{};
    do {
        cin.clear();
        cout << "Table of students:\n";
        Data_output_to_screen(stud_array, N);
        cout << "\nChoose number, that should be changed: ";
        int ch{};
        cin >> ch;
        for (int i{}; i < *N; i++) {
            if (i == ch - 1) {
                cout << "\nEnter what should be changed?\n"
                     << "1. Last name.\n"
                     << "2. Name\n"
                     << "3. Patronymic\n"
                     << "4. Course\n"
                     << "5. Group\n"
                     << "6. Admission year\n"
                     << "7. Name of the 1st subject\n"
                     << "8. Grade for 1st subject\n"
                     << "9. Name of the 2nd subject\n"
                     << "10. Grade for 2nd subject\n"
                     << "11. Name of the 3rd subject\n"
                     << "12. Grade for 3rd subject\n"
                     << "13. Name of the 4th subject\n"
                     << "14. Grade for 4th subject\n"
                     << "15. Name of the 5th subject\n"
                     << "16. Grade for 5th subject\n"
                     << "\n Enter '+' to exit:\t\n";
                cin >> cho;
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\nEnter new ";
                switch (cho) {
                    case 1: {
                        cout << "last name: ";
                        cin.getline(stud_array[i].last_name, M * 3);
                        cin.clear();
                        break;
                    }
                    case 2: {
                        cout << "name: ";
                        cin.getline(stud_array[i].name, M * 2);
                        cin.clear();
                        break;
                    }
                    case 3: {
                        cout << "patronymic: ";
                        cin.getline(stud_array[i].patronymic, M*3);
                        cin.clear();
                        break;
                    }
                    case 4: {
                        cout << "course: ";
                        cin.getline(stud_array[i].course, M);
                        cin.clear();
                        break;
                    }
                    case 5: {
                        cout << "group: ";
                        cin.getline(stud_array[i].group, M*3);
                        cin.clear();
                        break;
                    }
                    case 6: {
                        cout << "admission year: ";
                        cin.getline(stud_array[i].year_of_ent, M+1);
                        cin.clear();
                        break;
                    }
                    case 7: {
                        cout << "1st subject: ";
                        cin.getline(stud_array[i].sub1.name_of_sub, M*3);
                        cin.clear();
                        break;
                    }
                    case 8: {
                        cin.ignore(100, '\n');
                        cout << "grade for 1st subject: ";
                        cin >> stud_array[i].sub1.mark_for_sub;
                        cin.clear();
                        cin.ignore(100, '\n');
                        break;
                    }
                    case 9: {
                        cout << "2nd subject: ";
                        cin.getline(stud_array[i].sub2.name_of_sub, M*3);
                        cin.clear();
                        break;
                    }
                    case 10: {
                        cin.ignore(100, '\n');
                        cout << "grade for 2nd subject: ";
                        cin >> stud_array[i].sub2.mark_for_sub;
                        cin.clear();
                        cin.ignore(100, '\n');
                        break;
                    }
                    case 11: {
                        cout << "3rd subject: ";
                        cin.getline(stud_array[i].sub3.name_of_sub, M*3);
                        cin.clear();
                        break;
                    }
                    case 12: {
                        cin.ignore(100, '\n');
                        cout << "grade for 3rd subject: ";
                        cin >> stud_array[i].sub3.mark_for_sub;
                        cin.clear();
                        cin.ignore(100, '\n');
                        break;
                    }
                    case 13: {
                        cout << "4th subject: ";
                        cin.getline(stud_array[i].sub4.name_of_sub, M*3);
                        cin.clear();
                        break;
                    }
                    case 14: {
                        cin.ignore(100, '\n');
                        cout << "grade for 4th subject: ";
                        cin >> stud_array[i].sub4.mark_for_sub;
                        cin.clear();
                        cin.ignore(100, '\n');
                        break;
                    }
                    case 15: {
                        cout << "5th subject: ";
                        cin.getline(stud_array[i].sub5.name_of_sub, M*3);
                        cin.clear();
                        break;
                    }
                    case 16: {
                        cin.ignore(100, '\n');
                        cout << "grade for 5th subject: ";
                        cin >> stud_array[i].sub5.mark_for_sub;
                        cin.clear();
                        cin.ignore(100, '\n');
                        break;
                    }
                    default:{
                        cout <<"\nError!";
                    }
                }
            }
        }
    } while (!cin.fail());
}