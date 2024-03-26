#include <iostream>
#include "book.h"
#include "order.h"

int main() {
    // Tworzenie książek
    Book book1("Władca Pierścieni", 50);
    Book book2("Harry Potter", 40);
    Book book3("Hobbit", 30);

    // Tworzenie zamówienia
    Order order;
    order += std::make_pair(&book1, 2);  // Dodanie dwóch egzemplarzy książki 1
    order += std::make_pair(&book2, 1);  // Dodanie jednego egzemplarza książki 2
    order += std::make_pair(&book3, 3);  // Dodanie trzech egzemplarzy książki 3

    // Obliczenie całkowitej ceny zamówienia
    double total = order.calculateTotalPrice(10);  // Dodatkowy koszt dostawy wynosi 10
    std::cout << "Całkowity koszt zamówienia: " << total << std::endl;

    return 0;
}
