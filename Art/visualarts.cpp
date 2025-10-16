#include "type.cpp"
#pragma once

class Painting : public VisualArt {
    private:
        int size;
    public:
        Painting(string a, string t, int y, string ty, int s) : VisualArt(a, t, y, ty) {size = s;}
        void showCasePaintintg() {cout << "This is the " << title << " painted by " << artist << " in " << year << endl;}
};