#include <iostream>
using namespace std;

int main() {
    int var = 22;          // An integer variable
    int* ptr;              // A pointer variable that can hold the address of an int

    ptr = &var;            // The address of var is assigned to ptr

    cout << "Value of var: " << var << endl;          // Print the value of var
    cout << "Address of var: " << &var << endl;       // Print the address of var
    cout << "Value of ptr (Address it holds): " << ptr << endl;  // Print the address stored in ptr
    cout << "Value at the address ptr points to: " << *ptr << endl; // Dereference ptr to get the value at the address it points to

    *ptr = 33;             // Change the value of var using the pointer
    cout << "New value of var: " << var << endl;     // Print the new value of var

    return 0;
}
