#include<string>
#include<stdexcept>
#pragma once
using namespace std;

class ValidDataExpeption : public runtime_error {
    public:
        ValidDataExpeption(string message) : runtime_error(message) {}
};

class OverCookedExeption : public runtime_error {
    public:
        OverCookedExeption(string message) : runtime_error(message) {}
};

class TooSaltyExeption : public runtime_error {
    public:
        TooSaltyExeption(string message) : runtime_error(message) {}
};