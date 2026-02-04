#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year;
    string month;
    int day;
};

struct Point {
    int x;
    int y;
};

void printDate(Date& d){
    cout << "DOB: " << d.month << " " << d.day << ", " << d.year<< endl;
}

void printPoint(Point& p){
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main(){
    Date dob{2003,"September",15};
    Date pickleball{2026, "February", 7};

    Point p, q, h;
    // Point p(1 , 30)
    char trash;
    cout << "Enter two points for p: " << endl;
    cin >> trash >> p.x >> trash >> p.y >> trash;

    cout << "Enter two points for q: " << endl;
    cin >> trash >> q.x >> trash >> q.y >> trash;

    printDate(dob);
    printDate(pickleball);

    printPoint(p);
    printPoint(q);

    h.x = (p.x + q.x) / 2;
    h.y = (p.y + q.y) / 2;

    printPoint(h); 

    return 0;
}