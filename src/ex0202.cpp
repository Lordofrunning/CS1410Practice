#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter Day: ";
    string day;

    cin >> day;

    if(day == "sum" || day == "sat"){
        cout << "it's a weekend." << endl;

    } else {
        cout << "its a weekday" << endl;

    };
    return 0;
}