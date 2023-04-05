#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//create class
class Car {
public:
    int id;
    string make;
    string model;
    string type;
    int year;
    int price;
};

//create vector
vector<Car> cars = {
    {1, "Toyota", "Camry", "sedan", 2015, 9800},
        {2, "Ford", "Escape", "crossover", 2015, 15900},
        {3, "Honda", "Civic", "sedan", 2016, 10200},
        {4, "Volkswagen", "Golf", "compact", 2014, 8800},
        {5, "Toyota", "RAV4", "crossover", 2016, 12800}
};
//create function to display cars and price display $

void displayCars() {
    cout << setw(5) << "ID" << setw(15) << "Make" << setw(15) << "Model" << setw(15) << "Type" << setw(10) << "Year" << setw(14) << "Price" << endl;
    for (Car car : cars) {
        cout << setw(5) << car.id << setw(15) << car.make << setw(15) << car.model << setw(15) << car.type << setw(10) << car.year << setw(10) << "$" << car.price << endl;
    }
}
