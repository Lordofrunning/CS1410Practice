#include <iostream>

using namespace std;

void reduceBalance(int* p, int by ){
    *p = *p - by;
}


int main(){
    int balance = 85; 
    int* ptr = &balance;

    cout << balance << ptr << endl; 

    int w = 15;
    reduceBalance(ptr, w);
    cout << balance << endl; 

    int* dbalance = new int; 
    *dbalance = 100;
    cout << *dbalance << endl;
    cout << dbalance << endl;
    delete dbalance; 

    return 0;
}