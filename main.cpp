#include <iostream>
using namespace std;

// The Car class definition
class Car {
public:
    // Attributes (variables) of a car
    string color;
    int year;
    string make;

    // Constructor to initialize the Car object
    Car(string c, int y, string m) {
        color = c;  // Set the color of the car
        year = y;   // Set the year of the car
        make = m;   // Set the make of the car
    }

    // Function to display the details of the car
    void displayDetails() {
        cout << "Car details: " << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Make: " << make << endl<<endl;
    }
};

int main() {
    // Creating an object of Car
    Car myCar("Red", 2021, "Toyota");

    // Creating another object of Car
    Car mySecondCar("Blue", 2019, "Ford");

    // Display details of cars
    myCar.displayDetails();
    mySecondCar.displayDetails();

    return 0;
}
