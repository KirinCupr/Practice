#include "Data_output_to_screen.h"
#include <iostream>
#include <iomanip>
using namespace std;
void Data_output_to_screen(Info stud_array[], int *N){
    int M{4};
    cout << "=================================================================================================================\n"
         << setw(M+1) << setfill(' ') << '|'
         << setw(M*3) << setfill(' ') << left << "Last name" << '|'
         << setw(M*2) << setfill(' ') << left << "Name" << '|'
         << setw(M*3) << setfill(' ') << left << "Patronymic" << '|'
         << setw(M*1) << setfill(' ') << left << "Course" << '|'
         << setw(M*2) << setfill(' ') << left << "Group" << '|'
         << setw(M*3) << setfill(' ') << left << "Admission year" << '|'
         << setw(M*4) << setfill(' ') << left << "Grades in 5 subjects" << '\n'
         << "=================================================================================================================\n";
    for (int i=0; i < *N; i++){
        cout << setw(M) << setfill(' ') << i + 1 << '|'
             << setw(M*3) << setfill(' ') << left << stud_array[i].last_name << '|'
             << setw(M*2) << setfill(' ') << left << stud_array[i].name << '|'
             << setw(M*3) << setfill(' ') << left << stud_array[i].patronymic << '|'
             << setw(M+2) << setfill(' ') << left << stud_array[i].course << '|'
             << setw(M*2) << setfill(' ') << left << stud_array[i].group << '|'
             << setw(14) << setfill(' ') << left << stud_array[i].year_of_ent << '|';

        cout << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub1.name_of_sub << '|'
             << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub2.name_of_sub << '|'
             << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub3.name_of_sub << '|'
             << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub4.name_of_sub << '|'
             << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub5.name_of_sub;

        cout << setw(66) << right << '|'
             << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub1.mark_for_sub << '|'
             << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub2.mark_for_sub << '|'
             << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub3.mark_for_sub << '|'
             << setw(M*2+2) << setfill(' ') << left << stud_array[i].sub5.mark_for_sub << endl;
    };
}