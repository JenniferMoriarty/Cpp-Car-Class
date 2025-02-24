#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;    // Point to the first element of the array

    cout << "First element: " << *ptr << endl;        // Print the first element (10)
    ptr++;                                            // Move the pointer to the next element
    cout << "Second element using pointer: " << *ptr << endl;  // Print the second element (20)

    return 0;
}
