//
// Created by vlad on 28.02.2020.
//

#include <string>
#include <iostream>
#include "main.h"

std::string lab4() {
    book *first = new book;
    std::string author;

    fill_link_struct(first);
    print_all(first);

    std::cout << "Удалим все книги: ";
    std::cin >> author;
    delete_book_author(first, author);
    print_all(first);
    return "\nOk";
}