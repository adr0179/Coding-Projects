#include<string>
#include<iostream>
using namespace std;

// work in progress

int calculate(char opp, int x, int y) {
    if (opp == '+') {
        return x + y;
    } else if (opp == '-') {
        return x - y;
    } else if (opp == 'x' || opp == '*') {
        return x * y;
    } else if (opp == '/') {
        return x / y;
    } else {
        cout << "Syntax Error" << endl;
        return 0;
    }
}

int main(int argc, char *args[]) {
    int num1;
    int num2;
    char opp;

    cout << "Input a number" << endl;
    cin >> num1;
    while (true) {
        cout << "Operation (Type E to stop)" << endl;
        cin >> opp;

        if (opp == 'E') {
            break;
        }

        cout << "Input another number" << endl;
        cin >> num2;

        num1 = calculate(opp, num1, num2);
        cout << "Result: " << num1 << endl;
        cout << "Input another number" << endl;
    }
}