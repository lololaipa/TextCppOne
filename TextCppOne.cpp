#include <iostream>
#include <Windows.h>

using namespace std;

int main (){

    cout << "Good Morning" << endl;
    return 0;

    char name[80];
    cout << "Як Вас звати?\n";
    cout << "->_";
    cin.getline(name, 80, '\n');
    cout << "Приємно познайомитися " << name << " :)\n";
}