#include "Printout_on_request.h"
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void Printout_on_request(Info stud_array[], int N){
    cout << "\nEnter, what subject is it in?";
    char Sub[16]{}; cin >> Sub;
    cout << "Enter, what mark should be found?";
    int Mark{}; cin >> Mark;
    int m{};
    Info *array = new Info[N];
    int j{};
    bool flag{};
    for (int i = 0; i < N; i++) {
        if ((stud_array[i].sub1.mark_for_sub == Mark and !strcmp(Sub, stud_array[i].sub1.name_of_sub))
            or (stud_array[i].sub2.mark_for_sub == Mark and !strcmp(Sub, stud_array[i].sub2.name_of_sub))
            or (stud_array[i].sub3.mark_for_sub == Mark and !strcmp(Sub, stud_array[i].sub3.name_of_sub))
            or (stud_array[i].sub4.mark_for_sub == Mark and !strcmp(Sub, stud_array[i].sub4.name_of_sub))
            or (stud_array[i].sub5.mark_for_sub == Mark and !strcmp(Sub, stud_array[i].sub5.name_of_sub))) {
            array[j] = stud_array[i];
            j++;m++;
            flag = true;
        }
    }
        if (flag){
            cout << "=================================================================================\n"
                 << "|"
                 << setw(M*3) << setfill(' ') << left << "Last name" << '|'
                 << setw(M*2) << setfill(' ') << left << "Name" << '|'
                 << setw(M*3) << setfill(' ') << left << "Patronymic" << '|'
                 << setw(M*2) << setfill(' ') << left << "Group" << '|'
                 << setw(M*3) << setfill(' ') << left << "Subject" << '|'
                 << setw(M*1) << setfill(' ') << left << "Mark" << '|'
                 << "\n=================================================================================\n";
            for (int i = 0; i < m; i++) {
                cout << "|"
                     << setw(M*3) << setfill(' ') << left << array[i].last_name << '|'
                     << setw(M*2) << setfill(' ') << left << array[i].name << '|'
                     << setw(M*3) << setfill(' ') << left << array[i].patronymic << '|'
                     << setw(M*2) << setfill(' ') << left << array[i].group << '|'
                     << setw(M*3) << setfill(' ') << left << Sub << '|'
                     << setw(M*2) << setfill(' ') << left << Mark << '|'
                     << '\n';
            }
        }
        else cout << "There are no students with such marks\n";
        delete[] array;
}