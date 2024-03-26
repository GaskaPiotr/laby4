#ifndef ORDER_H
#define ORDER_H

#include <unordered_map>
#include "book.h"

class Order {
private:
    std::unordered_map<Book*, int> books;

public:
    Order();

    Order& operator+=(std::pair<Book*, int> bookQuantity);

    double calculateTotalPrice(double deliveryCost = 0);
};

#endif // ORDER_H
