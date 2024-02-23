#include <iostream>
#include <stack>
#include <string>
using namespace std;
struct Book {
    string title;
    double price;
};

int main() {
    stack<Book> bookStack;

    Book b1 = { "book one", 431.87 };
    Book b2 = { "book two", 410.99 };
    Book b3 = { "book three", 345.50 };

    bookStack.push(b1);
    bookStack.push(b2);
    bookStack.push(b3);

    double totalSum = 0.0;
    int bookCount = 0;

    while (!bookStack.empty()) {
        Book currentBook = bookStack.top();
        totalSum += currentBook.price;
        bookCount++;
        std::cout << currentBook.title << ", " << currentBook.price << std::endl;
        bookStack.pop();
    }

    double averagePrice = totalSum / bookCount;

    cout << "Average book price: " << averagePrice << std::endl;

    return 0;
}