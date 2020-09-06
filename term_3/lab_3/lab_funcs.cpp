//
// Created by vlad on 05.09.2020.
//
#include <iostream>
#include "lab_3.h"

void main_lab_3() {
    auto books = new vector<Book>;
    bool flag = true;
    while (flag) {
        try {
            books->push_back(Book::createBook());
        } catch (const char *exception) {
            cout << exception;
        }
        std::cout<<"Continue? [1/0] ";
        std::cin>>flag;
    }
    std::string author, pub;
    int year;
    std::cout<<"Input author: ";
    std::cin>>author;
    Book::findByAuthor(*books, author);
    std::cout<<"Input publisher: ";
    std::cin>>pub;
    Book::findByPub(*books, pub);
    std::cout<<"Input publish year: ";
    std::cin>>year;
    Book::findIfMoreThenYear(*books, year);
}