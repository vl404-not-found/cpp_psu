//
// Created by vlad on 05.09.2020.
//
#include <iostream>
#include <vector>
#include "lab_1.h"

/*
 * l = left position
 * r = right position
 * mid = current position
 *
 */
int search(vector<int> numbers, int value) {
    int l = 0, r = numbers.size(), mid;
    bool flag = false;
    while ((l <= r) && !flag) {
        mid = (l + r) / 2;

        if (numbers.at(mid) == value) flag = true;
        if (numbers.at(mid) > value) r = mid - 1;
        else l = mid + 1;
    }
    return mid;
}

int search_rec(const vector<int>& nums, int value, int l = 0, int r = -1) {
    if (r == -1)
        r = int(nums.size()) - 1;
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == value) return mid;
        if (nums[mid] > value) return search_rec(nums, value, l, mid - 1);
        return search_rec(nums, value, mid + 1, r);
    }
    return -1;
}


void lab_1() {
    vector<int> main = {1, 2, 3, 4, 5, 88, 9283, 2432, 7777};
    cout << search(main, 4) << endl;
    cout << search_rec(main, 4);
}