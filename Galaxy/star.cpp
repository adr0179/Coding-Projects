#include<string>
#include<iostream>
#pragma once
using namespace std;

class Star {
    public:
        string name;
        void display();
        Star(double brightness, double mass, string name) {this->brightness = brightness, this->mass = mass, this->name = name;}

        Star operator+(const Star &other) {
            return Star(this->brightness + other.brightness, this->mass + other.mass, this->name + " + " + other.name);
        }

        Star operator*(int multiplier) {
            if (multiplier == 0) {
                return Star(0,0,"");
            }

            string newName = this->name;
            for (int i = 1; i < multiplier; i++) {
                newName += " " + this->name;
            }

            return Star(brightness * multiplier, mass * multiplier, newName);
        }

        double operator-(const Star &other) {
            return this->mass - other.mass;
        }

        bool operator<(const Star &other){
            return this->mass < other.mass;
        }
        bool operator>(const Star &other){
            return this->mass > other.mass;
        }
        bool operator<=(const Star &other){
            return this->mass <= other.mass;
        }
        bool operator>=(const Star &other){
            return this->mass >= other.mass;
        }

        friend ostream& operator<<(ostream& os, const Star &s);
        friend void compareStars(Star &s1, const Star &s2);

    private:
        double brightness;
        double mass;
};

ostream& operator<<(ostream& os, const Star &s) {
    os << "Star:" << endl;
    os << s.name << " " << to_string(s.brightness) << " " << to_string(s.mass) << endl;
    return os;
}

void Star::display() {
    cout << "Star:" << endl;
    cout << this->name << " " << to_string(this->brightness) << " " << to_string(this->mass) << endl;
}

void compareStars(Star &s1, const Star &s2) {
    if (s1 > s2) {
        cout << s1.name << " is heavier" << endl;
    } else if (s1 < s2){
        cout << s2.name << " is heavier" << endl;
    } else {
        cout << "they have the same mass" << endl;
    }

    if (s1.brightness > s2.brightness) {
        cout << s1.name << " is brighter" << endl;
    } else if (s1.brightness < s2.brightness){
        cout << s2.name << " is brighter" << endl;
    } else {
        cout << "they are the same" << endl;
    }
}