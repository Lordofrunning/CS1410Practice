#include "book.h"


Book::Book(const std::string& t, int y, const Author& a):title(t), year(y), author(a){    }

std::string Book::getTtile() const {return title;}
int Book::getYear() const {return year;}
Author Book::getAuthor() const {return author;}

void Book::setTitle(const std::string& title){this->title = title;}
void Book::setYear(int year){this->year = year;}
void Book::setAuthor(const Author& a) {author = a;}

void Book::show() const{
    std::cout << "Book: " << title << "  " << year << "\n" <<
        author.getName() << "   " << author.getNationality() << std::endl;
}