#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    std::string title;
    double price;

    Book(std::string t, double p);
};

#endif // BOOK_H
