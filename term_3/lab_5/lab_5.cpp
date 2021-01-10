//
// Created by shker on 11.01.2021.
//

#include <set>
#include <iostream>


using namespace std;

template<class InputIt1, class InputIt2, class OutputIt>
OutputIt set_intersection(InputIt1 first1, InputIt1 last1,
                          InputIt2 first2, InputIt2 last2,
                          OutputIt d_first)
{
    while (first1 != last1 && first2 != last2) {
        if (*first1 < *first2) {
            ++first1;
        } else  {
            if (!(*first2 < *first1)) {
                *d_first++ = *first1++;
            }
            ++first2;
        }
    }
    return d_first;
}


template<typename t>
std::set<t> operator+ (set<t> _set, t _obj) {
    _set.insert(_obj);
    return _set;
}

template<typename t>
set<t> operator* (set<t> _set, set<t> _set_2) {
    set<t> intersect;
    set_intersection(_set.begin(),_set.end(),_set_2.begin(),_set_2.end(),
                     std::inserter(intersect,intersect.begin()));
    return intersect;
}

template<typename t>
set<t> operator+ (set<t> _set, set<t> _set_2) {
    _set.insert(_set_2.begin(), _set_2.end());
    return _set;
}

void main_f(){
    set<int> s1 {1,2,3, 20};
    set<int> s2 {20,22,23};

    set<int> s3 = s1*s2;
    for (auto item : s3)
        cout<< item << endl;
    cout << endl;


    for (auto item : s1 + 5)
        cout<< item << endl;
    cout << endl;

    set<int> s4 = {6, 0};
    s4 = s4 + s3;
    for (auto item : s4)
        cout<< item << endl;
    cout << endl;
}
