//
// Created by vlad on 05.09.2020.
//

#ifndef CPP_PSU_LAB_2_H
#define CPP_PSU_LAB_2_H

#include <string>
#include <utility>
#include <vector>

using namespace std;

void main_lab_2();

class Book {
private:
    string author;
    string name;
    string pub;
    int year;
    int nop;

    explicit Book(string, string, string, int, int);

public:
    int getYear() const { return this->year; };

    int getNop() const { return this->nop; };

    string getName() const { return this->name; };

    string getAuthor() const { return this->author; };

    string getPub() const { return this->pub; };

    void setYear(int i) { this->year = i; };

    void setNop(int i) { this->nop = i; };

    void setName(string i) { this->name = std::move(i); };

    void setAuthor(string i) { this->author = std::move(i); };

    void setPub(string i) { this->pub = std::move(i); };

    static Book createBook();

    static void findByAuthor(vector<Book>, const string &);

    static void findByPub(vector<Book>, const string &);

    static void findIfMoreThenYear(vector<Book>, int);
};


#endif //CPP_PSU_LAB_2_H
