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
//import the new 2 cars to our shop

void addCars(int id, string make, string model, string type, int year, int price,
             int id1, string make1, string model1, string type1, int year1, int price1) {
    cars.push_back({id, make, model, type, year, price});
    cars.push_back({id1, make1, model1, type1, year1, price1});

    displayCars();

}
//remove car and print id was delete
void sellCar(int id) {
    for (int i = 0; i < cars.size(); i++) {
        if (cars[i].id == id) {
            cars.erase(cars.begin() + i);
            cout << "Car with ID " << id << " was sold." << endl;
        }
    }
    
}