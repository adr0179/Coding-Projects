#include "art.cpp"
#pragma once

class VisualArt : public Art {
    public:
        VisualArt(string a, string t, int y, string ty) : Art(a, t, y, ty) {}
        void admire() {cout << "Admiring" << endl;}
};

class ProformaceArt : public Art {
    protected:
        double duration;
    public:
        ProformaceArt(string a, string t, int y, string ty, double d) : Art(a, t, y, ty) {duration = d;}
        ProformaceArt() {}
        void applaud() {cout << "Applauding" << endl;}
        double getDuration() {return duration;}
};