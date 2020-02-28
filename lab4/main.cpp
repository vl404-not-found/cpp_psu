//
// Created by vlad on 28.02.2020.
//

#include <string>
#include <iostream>
#include "main.h"

std::string lab4() {
    book *first = new book;
    fill_link_struct(first);

    delete_book_author(first, "yes");

    return "\nOk";
}