#include <iostream>
#include <iomanip>
#include <string>
#include "author.h"

using namespace std; 


class Book {
private:
    string title;
    int year;
    Author author; 

public:
    Book(const string& t, int y, const Author& a):title(t), year(y), author(a){    } 

    string getTtile() const {return title;}
    int getYear() const {return year;}
    Author getAuthor() const {return author;}

    void setTitle(const string& title){this->title = title;}
    void setYear( int year){this->year = year;}
    void setAuthor(const Author& a) {author = a;}

    void show() const{
        cout << "Book: " << title << "  " << year << "\n" <<
            author.getName() << "   " << author.getNationality() << endl; 
    }

};

int main(){

    Author a("gorege orwell", "british");
    Book b ("1984", 1949, a);

    b.show(); 

    return 0 ;
}