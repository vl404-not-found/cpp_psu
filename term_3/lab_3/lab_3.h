//
// Created by vlad on 05.09.2020.
//

#ifndef CPP_PSU_LAB_3_H
#define CPP_PSU_LAB_3_H

#include <string>
#include <utility>
#include <vector>
#include <iostream>

using namespace std;

void main_lab_3();

class Book {
private:
    string author, name, pub;
    int year, nop;
    Book *next = nullptr;

    explicit Book() = default;

public:
    explicit Book(string, string, string, int, int);

    int getYear() const { return this->year; };

    int getNop() const { return this->nop; };

    string getName() const { return this->name; };

    string getAuthor() const { return this->author; };

    string getPub() const { return this->pub; };

    Book *getNext() const { return this->next; };

    void setNext(Book * i) { this->next = i; };

    void setYear(int i) { this->year = i; };

    void setNop(int i) { this->nop = i; };

    void setName(string i) { this->name = std::move(i); };

    void setAuthor(string i) { this->author = std::move(i); };

    void setPub(string i) { this->pub = std::move(i); };

    static Book createBook();

    static void findByAuthor(vector<Book>, const string &);

    static void findByPub(vector<Book>, const string &);

    static void findIfMoreThenYear(vector<Book>, int);

    ~Book() {
        std::cout << "\n [DEBUG] Oh, this is destructor \n";
    }

    Book(const Book &obj) : author(obj.getAuthor()),
                            name(obj.getName()),
                            pub(obj.getName()),
                            nop(obj.getNop()),
                            year(obj.getYear()) {
        cout << "\n [DEBUG] Copy object\n";
    }

    friend class Observer;

    friend class ListBook;
};

class ListBook {
private:
    Book *element = nullptr;
public:
    Book *getElement() { return this->element; };

    Book *next();
};


class Observer {
public:
    static void getInfo(Book &obj);
};


#endif //CPP_PSU_LAB_2_H
