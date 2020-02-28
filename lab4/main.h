//
// Created by vlad on 28.02.2020.
//

#ifndef CPP_PSU_MAIN_H
#define CPP_PSU_MAIN_H


struct book{
    std::string name;
    std::string author;
    int year;
    book *next;
};

std::string lab4();
void fill_link_struct(book *);
void delete_book_author(book *, std::string);
#endif //CPP_PSU_MAIN_H
