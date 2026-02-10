#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    string fullName;

    cout <<"enter your age: ";
    cin >> age;

    cin.ignore();

    cout << "enter your full name: ";
    getline(cin, fullName);

    cout << fullName << " " << age << endl; 

    return 0;
}