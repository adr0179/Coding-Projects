#include<string>
#include<iostream>
using namespace std;

// work in progress

void printRes(char opp, int x, int y) {
    switch(opp) {
        case '+':
            cout << "Result: " << x+y << endl;
            break;
        case '-':
            cout << "Result: " << x-y << endl;
            break;
    }
}

int main(int argc, char *args[]) {
    int num1;
    int num2;
    char opp;

    cout << "Input a number" << endl;
    cin >> num1;

    cout << "Operation" << endl;
    cin >> opp;

    cout << "Input a second number" << endl;
    cin >> num2;

    printRes(opp, num1, num2);
}