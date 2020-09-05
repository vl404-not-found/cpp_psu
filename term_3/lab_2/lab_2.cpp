//
// Created by vlad on 05.09.2020.
//

#include "lab_2.h"

#include <utility>
#include <iostream>


// nop = number of page
Book::Book(string author, string name, string pub, int year, int nop) {
    this->author = std::move(author);
    this->name = std::move(name);
    this->pub = std::move(pub);
    this->year = year;
    this->nop = nop;
}

Book *Book::createBook() {
    string name, author, pub;
    int year, nop = 0;
    std::cout << "\nName: ";
    std::cin >> name;
    std::cout << "Author: ";
    std::cin >> author;
    std::cout << "Publish: ";
    std::cin >> pub;
    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "Number of pages: ";
    std::cin >> nop;
    if (name.empty() || author.empty() || int(year) > 0 || int(nop) > 0)
        throw "Undefined one or more values";
    return new Book(author, name, pub, year, nop);
}

void Book::findByAuthor(vector<Book> books, const string &author) {
    auto book = books.begin();
    while (book != books.end()) {
        if (book->author == author)
            std::cout << book->name << " / Автор: " << book->author << " / Издательство: " << book->pub << " / "
                      << book->nop << "страниц / Год:" << book->year << std::endl;
        ++book;
    }
}

void Book::findByPub(vector<Book> books, const string &pub) {
    auto book = books.begin();
    while (book != books.end()) {
        if (book->pub == pub)
            std::cout << book->name << " / Автор: " << book->author << " / Издательство: " << book->pub << " / "
                      << book->nop << "страниц / Год:" << book->year << std::endl;
        ++book;
    }
}

void Book::findIfMoreThenYear(vector<Book> books, int year) {
    auto book = books.begin();
    while (book != books.end()) {
        if (book->year > year)
            std::cout << book->name << " / Автор: " << book->author << " / Издательство: " << book->pub << " / "
                      << book->nop << "страниц / Год:" << book->year << std::endl;
        ++book;
    }
}