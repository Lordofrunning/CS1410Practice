#include <iostream>
#include <stdexcept>

using namespace std;


template<typename T>
class Calculator {
private:
    T a, b;
public:
    Calculator(T a, T b) : a(a), b(b) {}

    T add() const {
        return a + b;
    }
    T subtract() const {
        return a - b;
    }
    T multiply() const {
        return a * b;
    }
    T divide() const {
        if (b == 0) {
            throw runtime_error("Denominator cannot be zero");
        }
        return a / b;
    }
};

int main(){
    try {
        Calculator<double> calc(10.5,2.7);
        cout << calc.add() << endl;
        cout << calc.subtract() << endl;
        cout << calc.multiply() << endl;
        cout << calc.divide() << endl;

        Calculator<int> calc1(4,0);
        cout << calc1.add() << endl;
        cout << calc1.subtract() << endl;
        cout << calc1.multiply() << endl;
        cout << calc1.divide() << endl;

    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }
    

    return 0;
}