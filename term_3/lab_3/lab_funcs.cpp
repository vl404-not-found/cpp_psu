//
// Created by vlad on 05.09.2020.
//
#include <iostream>
#include "lab_3.h"

bool operator==(Book obj_1, Book obj_2) {
    if (obj_1.getName() == obj_2.getName())
        return true;
    else
        return false;
}

bool operator!=(Book obj_1, Book obj_2) {
    if (obj_1.getName() != obj_2.getName())
        return true;
    else
        return false;
}

Book operator+(Book obj_1, Book obj_2) {
    return Book(obj_1.getAuthor() + " / " + obj_2.getAuthor(), obj_1.getName() + " / " + obj_2.getName(),
                obj_1.getPub(), obj_1.getYear(), obj_1.getNop() + obj_2.getNop());
}

void main_lab_3() {
    auto books = new vector<Book>;
    bool flag = true;
    while (flag) {
        try {
            books->push_back(Book::createBook());
        } catch (const char *exception) {
            cout << exception;
        }
        std::cout << "\n Continue? [1/0] ";
        std::cin >> flag;
    }
    auto newBook = books->at(0) + books->at(0);
    Observer::getInfo( newBook);
//    std::string author, pub;
//    int year;
//    std::cout<<"Input author: ";
//    std::cin>>author;
//    Book::findByAuthor(*books, author);
//    std::cout<<"Input publisher: ";
//    std::cin>>pub;
//    Book::findByPub(*books, pub);
//    std::cout<<"Input publish year: ";
//    std::cin>>year;
//    Book::findIfMoreThenYear(*books, year);
}