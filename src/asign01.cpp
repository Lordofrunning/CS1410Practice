#include <iostream>
#include <iomanip> 

using namespace std;

int main(){
    int count = 0;
    int numbers[5];
    // start while loop to get input from user.
    while(count < 5){
        int num;
        cout << "give a number divisible by 3:" << endl;
        cin >> num;
        if(num % 3 == 0 && num > 0){
            cout << num << " added to collection" << endl;
            numbers[count] = num;
            count++; 
        }else{
            cout << "invalid number. try again" << endl;
            continue;
        }

    }
    // get the minval of the numbers. 
    int minvalue = numbers[0];
    for(int i = 0; i < 5; i++){
        if(minvalue > numbers[i]){
            minvalue = numbers[i];
        }
        
    }
    // get max val
    int maxvalue = numbers[0];
    for(int i = 0; i < 5; i++){
        if(maxvalue < numbers[i]){
            maxvalue = numbers[i];
        }
        
    }
    // get total 
    int total = 0;
    for(int i = 0; i < 5; i++){
        total += numbers[i];
    }
    // get average. 
    int average = 0;
    for (int i = 0; i < 5; i++){
        average += numbers[i];
    }
    int realavg = average / 5;
    // display the stuff. 
    cout << "count" << setw(10)  << "minimum" << setw(10) << "max" << setw(10) << "total" << setw(10) << "average" << endl;
    cout << count << setw(10) << minvalue << setw(10) << maxvalue << setw(10) << total << setw(10) << realavg << endl;

    return 0;
}