#include <iostream>
#include <string>

using namespace std;

string repChar(char, int); // this is a prototype. 
long hms_2_secs(int, int, int);
void swapV(double& x, double& y);

void swapV(double& x, double& y){
    double temp = x;
    x = y;
    y = temp;
}

int main(){
    cout << repChar('x', 8) << endl;
    cout << hms_2_secs(4, 56, 17) << endl;

    double x = 10.0, y = 30.0;

    cout << x << y << endl;
    swapV(x,y);
    cout << x << y << endl;
    
    return 0;
}

string repChar(char car, int num){
    string result;
    for(int i = 0; i < num; i++){
        result = result + car;
    }
    return result;
}

long hms_2_secs(int hours, int minutes, int seconds){
    long secs = hours * 60 * 60 + minutes * 60 + seconds;

    return secs;
}
