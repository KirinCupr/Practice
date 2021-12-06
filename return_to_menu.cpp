#include "return_to_menu.h"
#include <iostream>
using namespace std;
void return_to_menu(){
    char temp{};
    while (temp != '+') {
        cout << "\nEnter '+' to return to menu: ";
        cin >> temp;
    }
    cin.clear();
}

