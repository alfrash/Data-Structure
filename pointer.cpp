#include <iostream>
using namespace std;

int main () {
    int num = 100;
    int *pointer = &num;

    cout << "value = " << num << "\n";
    cout << "Adress = " << &num << "\n";
    cout << "value = " << *pointer << "\n";
    cout << "Adress = " << pointer << "\n";

    *pointer = 200;

    cout << "value = " << num << "\n";
    cout << "Adress = " << &num << "\n";
    cout << "value = " << *pointer << "\n";
    cout << "Adress = " << pointer << "\n";


    return 0;
}