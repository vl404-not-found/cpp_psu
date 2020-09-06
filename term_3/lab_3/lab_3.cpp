//
// Created by vlad on 05.09.2020.
//

#include "lab_3.h"

#include <utility>
#include <iostream>

void Observer::getInfo(Book &obj) {
    std::cout << obj.name << " / Автор: " << obj.author << " / Издательство: " << obj.pub << " / "
              << obj.nop << " страниц / Год:" << obj.year << std::endl;
}

// nop = number of page
Book::Book(string author, string name, string pub, int year, int nop) {
    this->author = std::move(author);
    this->name = std::move(name);
    this->pub = std::move(pub);
    this->year = year;
    this->nop = nop;
}

Book Book::createBook() {
    string name, author, pub;
    int year, nop = 0;
    std::cout << "\nName: ";
    std::cin >> name;
    std::cout << "Author: ";
    std::cin >> author;
    std::cout << "Publisher: ";
    std::cin >> pub;
    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "Number of pages: ";
    std::cin >> nop;
    if (name.empty() || author.empty() || int(year) < 0 || int(nop) < 0)
        throw "[DEBUG] Undefined one or more values \n";
    return Book(author, name, pub, year, nop);
}

void Book::findByAuthor(vector<Book> books, const string &author) {
    auto book = books.begin();
    while (book != books.end()) {
        if (book->author == author)
            Observer::getInfo(*book);
        ++book;
    }
}

void Book::findByPub(vector<Book> books, const string &pub) {
    auto book = books.begin();
    while (book != books.end()) {
        if (book->pub == pub)
            Observer::getInfo(*book);
        ++book;
    }
}

void Book::findIfMoreThenYear(vector<Book> books, int year) {
    auto book = books.begin();
    while (book != books.end()) {
        if (book->year > year)
            Observer::getInfo(*book);
        ++book;
    }
}

ListBook operator+(ListBook &target, Book &obj) {
    while (target.next()->getNext() != nullptr);
    target.getElement()->setNext(&obj);
    return target;
}

ListBook operator-(ListBook &target, Book &obj) {
    while (target.next()->getNext() != nullptr);
    delete target.getElement()->getNext();
    return target;
}

Book *ListBook::next() {
    if (this->element->next != nullptr)
        this->element = this->element->next;
    return this->element;
}
