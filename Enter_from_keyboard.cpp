#include "Enter_from_keyboard.h"
#include <iostream>
#include <cstring>
using namespace std;
void Enter_from_keyboard(Info stud_array[], int N){
    int M{4};
    for (int i = 0; i < N; i++){
        cout << "\nTo exit, enter '+'.";
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the student's last name: ";
        cin.getline(stud_array[i].last_name, M*3);

        if (!strcmp(stud_array[i].last_name, "+")) {
            //cin.ignore(100, '\n');
            cin.clear();
            break;
        }
        cout << "\nEnter the student's name: ";
        cin.getline(stud_array[i].name, M*2);
        cin.clear();

        cout << "\nEnter the student's patronymic: ";
        cin.getline(stud_array[i].patronymic, M*3);
        cin.clear();

        cout << "\nEnter the student's course: ";
        cin.getline(stud_array[i].course, M);
        cin.clear();

        cout << "\nEnter the student's group: ";
        cin.getline(stud_array[i].group, M*3);
        cin.clear();

        cout << "\nEnter the student's admission year: ";
        cin.getline(stud_array[i].year_of_ent, M+1);
        cin.clear();

        cout << "\nEnter the student's grades in 5 subjects:\n ";

        cout << "\nEnter the name of the 1st subject: ";
        cin.getline(stud_array[i].sub1.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[i].sub1.mark_for_sub;
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the name of the 2nd subject: ";
        cin.getline(stud_array[i].sub2.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[i].sub2.mark_for_sub;
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the name of the 3rd subject: ";
        cin.getline(stud_array[i].sub3.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[i].sub3.mark_for_sub;
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the name of the 4th subject: ";
        cin.getline(stud_array[i].sub4.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[i].sub4.mark_for_sub;
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\nEnter the name of the 5th subject: ";
        cin.getline(stud_array[i].sub5.name_of_sub, M*3);
        cin.clear();
        cout << "\nEnter a grade for this subject: ";
        cin >> stud_array[i].sub5.mark_for_sub;
        cin.clear();
        while (cin.fail()){
            cout << "\nEnter the student's name: ";
            cin.getline(stud_array[i].name, M*2);

            cout << "Error. Enter correct data: ";
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nEnter the student's name: ";
            cin.getline(stud_array[i].name, 16);

            cout << "\nEnter the student's last name: ";
            cin.getline(stud_array[i].last_name, M*3);
            cin.clear();

            cout << "\nEnter the student's patronymic: ";
            cin.getline(stud_array[i].patronymic, M*3);
            cin.clear();

            cout << "\nEnter the student's course: ";
            cin.getline(stud_array[i].course, M);
            cin.clear();

            cout << "\nEnter the student's group: ";
            cin.getline(stud_array[i].group, M*2);
            cin.clear();

            cout << "\nEnter the student's admission year: ";
            cin.getline(stud_array[i].year_of_ent, M+1);
            cin.clear();
            cin.ignore(100, '\n');

            cout << "\nEnter the student's grades in 5 subjects:\n ";

            cout << "\nEnter the name of the 1st items: ";
            cin.getline(stud_array[i].sub1.name_of_sub, M*3);
            cin.clear();
            cout << "\nEnter a grade for this subject: ";
            cin >> stud_array[i].sub1.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');

            cout << "\nEnter the name of the 2nd item: ";
            cin.getline(stud_array[i].sub2.name_of_sub, M*3);
            cin.clear();
            cout << "\nEnter a grade for this subject: ";
            cin >> stud_array[i].sub2.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');

            cout << "\nEnter the name of the 3rd item: ";
            cin.getline(stud_array[i].sub3.name_of_sub, M*3);
            cin.clear();
            cout << "\nEnter a grade for this subject: ";
            cin >> stud_array[i].sub3.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');

            cout << "\nEnter the name of the 4th item: ";
            cin.getline(stud_array[i].sub4.name_of_sub, M*3);
            cin.clear();
            cout << "\nEnter a grade for this subject: ";
            cin >> stud_array[i].sub4.mark_for_sub;
            cin.clear();
            cin.ignore(100, '\n');

            cout << "\nEnter the name of the 5th item: ";
            cin.getline(stud_array[i].sub5.name_of_sub, M*3);
            cin.clear();
            cout << "\nEnter a grade for this subject: ";
            cin >> stud_array[i].sub5.mark_for_sub;
            cin.clear();
        }
    }
}
