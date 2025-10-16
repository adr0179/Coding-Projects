#include<iostream>
#include<string>
#include<vector>
#pragma once
using namespace std;

class Art {
    protected:
        string artist;
        string title;
        int year;
        string type;
    public:
        Art(string a, string t, int y, string ty) : artist(a), title(t), year(y), type(ty) {}
        Art() {}
        string getArtist() {return artist;}
        string getTitle() {return title;}
        int getYear() {return year;}
        string getType() {return type;}
        void setAtt(string a, string t, int y, string ty) {
            artist = a;
            title = t;
            year = y;
            type = ty;
        } 
        void display();
};

void Art::display() {
    cout << title << " by " << artist << " (" << year << ") type: " << type << endl;  
}