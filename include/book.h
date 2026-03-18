#ifndef __BOOK_H__
#define __BOOK_H__

#include <iostream>
#include <iomanip>
#include <string>
#include "author.h"

class Book {
private:
    std::string title;
    int year;
    Author author;

public:
    Book(const std::string& t, int y, const Author& a);

    std::string getTtile() const;
    int getYear() const;
    Author getAuthor() const;

    void setTitle(const std::string& title);
    void setYear(int year);
    void setAuthor(const Author& a);

    void show() const;
};

#endif
