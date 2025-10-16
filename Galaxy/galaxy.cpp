#include<iostream>
#include<vector>
#include<string>
#include "star.cpp"
#pragma once
using namespace std;

class Galaxy {
    public:
        string name;
        Galaxy(string n) : name(n) {};
        Galaxy(){}
        void addStar(Star* s) {stars.push_back(s);}

        Star* operator[] (int index) {
            return stars.at(index);
        }

        void displayStars() {
            for (Star* s : stars) {
                // s->display();
                cout << *s << endl;
            }
        }

        friend class Cluster;

    private:
        vector<Star*> stars; 
};