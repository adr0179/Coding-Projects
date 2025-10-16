#include "type.cpp"
#include<iostream>
using namespace std;

class Hotel : public Accomodation {
    public:
        void stay() override {cout << "staying at the hotel." << endl;}
};

class AirBNB : public Accomodation {
    public:
        void stay() override {cout << "staying at an airBNB." << endl;}
};

class Plane : public TravelMode {
    public:
        void travel() override {cout << "traveling by Plane." << endl;}
};

class Car : public TravelMode {
    public:
        void travel() override {cout << "traveling by Car." << endl;}
};