#include <iostream>
#include <iomanip> 

using namespace std;

int main(){
    int count = 0;
    int numbers[] = {};
    while(count < 5){
        int num;
        cout << "give a number divisible by 3:" << endl;
        cin >> num;
        if(num % 3 == 0){
            cout << num << " added to collection" << endl;
            numbers[count] = num;
            count++; 
        }else{
            cout << "invalid number. try again" << endl;
            continue;
        }

    }
    int minvalue = numbers[0];
    for(int i = 0; i < 5; i++){
        if(minvalue > numbers[i]){
            minvalue = numbers[i];
        }
        
    }
    int maxvalue = numbers[0];
    for(int i = 0; i < 5; i++){
        if(maxvalue < numbers[i]){
            maxvalue = numbers[i];
        }
        
    }
    int total = 0;
    for(int i = 0; i < 5; i++){
        total += numbers[i];
    }
    int average = 0;
    for (int i = 0; i < 5; i++){
        average += numbers[i];
    }
    int realavg = average / 5;

    cout << "count" << setw(10)  << "minimum" << setw(10) << "max" << setw(10) << "total" << setw(10) << "average" << endl;
    cout << count << setw(13) << minvalue << setw(13) << maxvalue << setw(13) << total << setw(13) << realavg << endl;

    return 0;
}