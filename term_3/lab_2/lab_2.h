//
// Created by vlad on 05.09.2020.
//

#ifndef CPP_PSU_LAB_2_H
#define CPP_PSU_LAB_2_H

#include <string>
#include <vector>

using namespace std;

class Book {
    string author;
    string name;
    string pub;
    int year;
    int nop;

    explicit Book(string, string, string, int, int);

public:
    static Book *createBook();

    static void findByAuthor(vector<Book>, const string &);

    static void findByPub(vector<Book>, const string &);

    static void findIfMoreThenYear(vector<Book>, int);
};


#endif //CPP_PSU_LAB_2_H
