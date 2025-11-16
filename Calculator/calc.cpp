#include<string>
#include<iostream>
using namespace std;

// work in progress (does not work with brackets or decimals yet)

class Calculator {
    private:
        int inp1;
        int inp2;
        char opp;

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

    public:
        Calculator(){}
        void start() {
            cout << "Input a Number or Whole Calculation" << endl;
            cin >> this->inp1;
            while (true) {
                cout << "Operation (Type E to stop)" << endl;
                cin >> this->opp;

                if (opp == 'E') {
                    break;
                }

                cout << "Input Another Number" << endl;
                cin >> this->inp2;

                this->inp1 = calculate(opp, this->inp1, this->inp2);
                cout << "Result: " << this->inp1 << endl;
                cout << "Input Another number" << endl;
            }
        }
        ~Calculator(){cout << "End of Calculation." << endl;}
};