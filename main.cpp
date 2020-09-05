#include <term_3/lab_2/lab_2.h>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    auto * books = new vector<Book>;
    try {
        Book *mew = Book::createBook();
    } catch (const char* exception) {
        cout<<exception;
    }

    return 0;
}

