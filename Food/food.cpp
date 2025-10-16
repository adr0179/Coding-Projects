#include<iostream>
#include<string>
#include<stdexcept>
#include "utilities.cpp"
#include "error.cpp"
using namespace std;

class FoodItem {
    private:
        double temp;
        double saltLevel;
    public:
        FoodItem(){
            cout << "Enter a Temperature" << endl;
            string tempInput;
            cin >> tempInput;

            if (!validData(tempInput)) {
                throw ValidDataExpeption("Invalid temperature input!");
            } else {
                temp = stod(tempInput);
            }

            if (temp > tempThreshold) {
                throw OverCookedExeption("Too Hot!");
            }

            cout << "Enter a Salt Level" << endl;
            string saltInput;
            cin >> saltInput;

            if (!validData(saltInput)) {
                throw ValidDataExpeption("Invalid salt level input!");
            } else {
                saltLevel = stod(saltInput);
            }

            if (saltLevel > saltThreshold) {
                throw TooSaltyExeption("Too Salty!");
            }
        }

        double getTemp() {return temp;}
        double getSaltLevel() {return saltLevel;}
};