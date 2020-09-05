//
// Created by vlad on 28.02.2020.
//

#include <string>
#include <iostream>
#include "lab4.h"

std::string lab4() {
    book *first = new book;
    std::string author;

    fill_link_struct(first);
    print_all(first);

    std::cout << "Delete all books (author): ";
    std::cin >> author;
    delete_book_author(first, author);
    print_all(first);
    return "\nOk";
}