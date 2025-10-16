#include<string>
#pragma once
using namespace std;

int tempThreshold = 100;
int saltThreshold = 10;

bool validData(string m) {
    for (int i = 0; i < m.length(); i++) {
        if (!isdigit(m[i]) && m[i] != '.') {
            return false;
        }
    }
    return true;
}