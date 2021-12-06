#include "Add_note.h"
#include <iostream>
using namespace std;

int Add_note(Info stud_array[], int *N){
    cin.clear();
    cin.ignore(1024,'\n');
    cout << "\nEnter the student's last name: ";
    cin.getline(stud_array[*N].last_name, M*3);
    cin.clear();

    cout << "\nEnter the student's name: ";
    cin.getline(stud_array[*N].name, M*2);
    cin.clear();

    cout << "\nEnter the student's patronymic: ";
    cin.getline(stud_array[*N].patronymic, M*3);
    cin.clear();

    cout << "\nEnter the student's course: ";
    cin.getline(stud_array[*N].course, M);
    cin.clear();

    cout << "\nEnter the student's group: ";
    cin.getline(stud_array[*N].group, M*3);
    cin.clear();

    cout << "\nEnter the student's admission year: ";
    cin.getline(stud_array[*N].year_of_ent, M+1);
    cin.clear();

    cout << "\nEnter the student's grades in 5 subjects:\n ";
    cout << "\nEnter the name of the 1st items: ";
    cin.getline(stud_array[*N].sub1.name_of_sub, M*3);
    cin.clear();
    cout << "\nEnter a grade for this subject: ";
    cin >> stud_array[*N].sub1.mark_for_sub;
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\nEnter the name of the 2nd item: ";
    cin.getline(stud_array[*N].sub2.name_of_sub, M*3);
    cin.clear();
    cout << "\nEnter a grade for this subject: ";
    cin >> stud_array[*N].sub2.mark_for_sub;
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\nEnter the name of the 3rd item: ";
    cin.getline(stud_array[*N].sub3.name_of_sub, M*3);
    cin.clear();
    cout << "\nEnter a grade for this subject: ";
    cin >> stud_array[*N].sub3.mark_for_sub;
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\nEnter the name of the 4th item: ";
    cin.getline(stud_array[*N].sub4.name_of_sub, M*3);
    cin.clear();
    cout << "\nEnter a grade for this subject: ";
    cin >> stud_array[*N].sub4.mark_for_sub;
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\nEnter the name of the 5th item: ";
    cin.getline(stud_array[*N].sub5.name_of_sub, M*3);
    cin.clear();
    cout << "\nEnter a grade for this subject: ";
    cin >> stud_array[*N].sub5.mark_for_sub;
    cin.clear();
    /*while (cin.fail()){
        cout << "\nEnter the student's last name: ";
        cin.getline(stud_array[*N].last_name, M*3);

        cout << "\nEnter the student's name: ";
        cin.getline(stud_array[*N].name, M*2);
        cin.clear();

        cout << "\nEnter the student's patronymic: ";
        cin.getline(stud_array[*N].patronymic, M*3);
        cin.clear();

        cout << "\nEnter the student's course: ";
        cin.getline(stud_array[*N].course, M);
        cin.clear();

        cout << "\nEnter the student's group: ";
        cin.getline(stud_array[*N].group, M*3);
        cin.clear();

        cout << "\nEnter the student's admission year: ";
        cin.getline(stud_array[*N].year_of_ent, M+1);
        cin.clear();

        cout << "\nEnter the student's grades in 5 subjects:\n ";

        cout << "\nEnter the name of the 1st items: ";
        cin.getline(stud_array[*N].sub1.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[*N].sub1.mark_for_sub;
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the name of the 2nd item: ";
        cin.getline(stud_array[*N].sub2.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[*N].sub2.mark_for_sub;
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the name of the 3rd item: ";
        cin.getline(stud_array[*N].sub3.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[*N].sub3.mark_for_sub;
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the name of the 4th item: ";
        cin.getline(stud_array[*N].sub4.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[*N].sub4.mark_for_sub;
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the name of the 5th item: ";
        cin.getline(stud_array[*N].sub5.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[*N].sub5.mark_for_sub;
        cin.clear();
    }*/
    (*N)++;
    return (*N);
}