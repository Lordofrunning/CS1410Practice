#include "author.h"
#include "book.h"

int main(){

    Author a("gorege orwell", "british");
    Book b ("1984", 1949, a);

    b.show(); 

    return 0 ;
}