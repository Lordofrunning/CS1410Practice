#include <iostream>
#include <stdexcept>

using namespace std;

class Calculator {
private:
    int a, b;
public:
    Calculator(int a, int b) : a(a), b(b) {}

    int add() const {
        return a + b;
    }
    int subtract() const {
        return a - b;
    }
    int multiply() const {
        return a * b;
    }
    int divide() const {
        if (b == 0) {
            throw runtime_error("Denominator cannot be zero");
        }
        return a / b;
    }
};

int main(){
    try {
        Calculator calc(10,2);
        cout << calc.add() << endl;
        cout << calc.subtract() << endl;
        cout << calc.multiply() << endl;
        cout << calc.divide() << endl;

        Calculator calc1(4,0);
        cout << calc1.add() << endl;
        cout << calc1.subtract() << endl;
        cout << calc1.multiply() << endl;
        cout << calc1.divide() << endl;

    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }
    

    return 0;
}