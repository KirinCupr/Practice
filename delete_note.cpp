#include "delete_note.h"
#include <iostream>
using namespace std;
int delete_note(Info stud_array[], int *N){
    cin.clear();
    cin.clear();
    cout << "Table of students:\n";
    Data_output_to_screen(stud_array, N);
    cout << "\nChoose note, that should be deleted: ";
    int ch{}; cin >> ch;
    for (int i{}; i < *N; i++){
        if (i == ch-1) {
            stud_array[i] = stud_array[i + 1];
        }
    }
    --(*N);
    return (*N);
}