#include "sorting.h"
#include <iostream>
using namespace std;
void sorting(Info stud_array[], int *N){
    cin.clear();
    Info temp[]{};
    int cho{};
    for (int i{}; i < *N; i++) temp[i] = stud_array[i];
    cout <<"\nChoose, what should be sorted?\n"
         << "1. Last name.\n"
         << "2. Name\n"
         << "3. Course\n"
         << "4. Group\n"
         << "5. Admission year\n"
     /*  << "7. Grade for 1st subject\n"
         << "8. Grade for 2nd subject\n"
         << "9. Grade for 3rd subject\n"
         << "10. Grade for 4th subject\n"
         << "11. Grade for 5th subject\n" */
         << "\n Enter '+' to exit. \n";
    cin >> cho;
    //if (cin.fail()) return;
    switch (cho) {
        case 1: {
            for (int i{}; i < *N; i++){
                for (int l = *N - 1; l >= i; l--){
                    if (temp[l-1].last_name > temp[l].last_name){
                        Info t = temp[l-1];
                        temp[l-1] = temp[l];
                        temp[l] = t;
                    }
                }
            }
            break;
        }
        case 2: {
            for (int i{}; i < *N; i++){
                for (int l = *N - 1; l >= i; l--){
                    if (temp[l-1].name > temp[l].name){
                        Info t = temp[l-1];
                        temp[l-1] = temp[l];
                        temp[l] = t;
                    }
                }
            }
            break;
        }
        case 3: {
            for (int i{}; i < *N; i++){
                for (int l = *N - 1; l >= i; l--){
                    if (temp[l-1].course > temp[l].course){
                        Info t = temp[l-1];
                        temp[l-1] = temp[l];
                        temp[l] = t;
                    }
                }
            }
            break;
        }
        case 4: {
            for (int i{}; i < *N; i++){
                for (int l = *N - 1; l >= i; l--){
                    if (temp[l-1].group > temp[l].group){
                        Info t = temp[l-1];
                        temp[l-1] = temp[l];
                        temp[l] = t;
                    }
                }
            }
            break;
        }
        case 5: {
            for (int i{}; i < *N; i++){
                for (int l = *N - 1; l >= i; l--){
                    if (temp[l-1].year_of_ent > temp[l].year_of_ent){
                        Info t = temp[l-1];
                        temp[l-1] = temp[l];
                        temp[l] = t;
                    }
                }
            }
            break;
        }
        /*case 6: {
            cout << "1st subject: ";
            //cin.getline(stud_array[i].sub1.name_of_sub, M*3);
            cin.clear();
            break;
        }
        case 8: {
            cin.ignore(100, '\n');
            cout << "grade for 1st subject: ";
            //cin >> stud_array[i].sub1.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');
            break;
        }
        case 9: {
            cout << "2nd subject: ";
            //cin.getline(stud_array[i].sub2.name_of_sub, M*3);
            cin.clear();
            break;
        }
        case 10: {
            cin.ignore(100, '\n');
            cout << "grade for 2nd subject: ";
            //cin >> stud_array[i].sub2.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');
            break;
        }
        case 11: {
            cout << "3rd subject: ";
            //cin.getline(stud_array[i].sub3.name_of_sub, M*3);
            cin.clear();
            break;
        }
        case 12: {
            cin.ignore(100, '\n');
            cout << "grade for 3rd subject: ";
            //cin >> stud_array[i].sub3.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');
            break;
        }
        case 13: {
            cout << "4th subject: ";
            //cin.getline(stud_array[i].sub4.name_of_sub, M*3);
            cin.clear();
            break;
        }
        case 14: {
            cin.ignore(100, '\n');
            cout << "grade for 4th subject: ";
            //cin >> stud_array[i].sub4.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');
            break;
        }
        case 15: {
            cout << "5th subject: ";
           // cin.getline(stud_array[i].sub5.name_of_sub, M*3);
            cin.clear();
            break;
        }
        case 16: {
            cin.ignore(100, '\n');
            cout << "grade for 5th subject: ";
          //  cin >> stud_array[i].sub5.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');
            break;
        } */
        default:{
            cout <<"\nError!";
        }
    }
    cout << '\n';
    Data_output_to_screen(temp, N);
}