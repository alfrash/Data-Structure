#include <iostream>
using namespace std;

int main () {
    int num = 100;
    int* pointer = &num;

    cout << "value = " << num << "\n";
    cout << "Adress = " << &num << "\n";
    cout << "value = " << *pointer << "\n";
    cout << "Adress = " << pointer << "\n";

    *pointer = 200;

    cout << "value = " << num << "\n";
    cout << "Adress = " << &num << "\n";
    cout << "value = " << *pointer << "\n";
    cout << "Adress = " << pointer << "\n";
    
    int arr[] = {70, 40, 50, 60};
    int* arrPointer = &arr[0];

    cout << "First element: \n\n";
    cout << "value = " << arr[0] << "\n";
    cout << "Address = " << &arr[0] << "\n";
    cout << "value = " << *arrPointer << "\n";
    cout << "Address = " << arrPointer << "\n";

    cout << "Second element: \n\n";
    cout << "value = " << arr[1] << "\n";
    cout << "Address = " << &arr[1] << "\n";
    cout << "value = " << *(arrPointer + 1) << "\n";
    cout << "Address = " << arrPointer + 1 << "\n";
    
    return 0;
}