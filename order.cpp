#include "order.h"

Order::Order() {}

Order& Order::operator+=(std::pair<Book*, int> bookQuantity) {
    Book* book = bookQuantity.first;
    int quantity = bookQuantity.second;
    
    if (books.find(book) != books.end()) {
        books[book] += quantity;
    } else {
        books[book] = quantity;
    }
    
    return *this;
}

double Order::calculateTotalPrice(double deliveryCost) {
    double total = 0;
    for (auto& it : books) {
        total += it.first->price * it.second;
    }
    total += deliveryCost;
    return total;
}
