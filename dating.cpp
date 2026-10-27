// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by : Alex OBrien
// Created on : October 27, 2026
// This program is a dating acceptance program
// run by the grandparents of the date
// to either accept or deny dating applicants

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0 || age > 120) {
        cout << "Please enter your true age!";
    } else if (age < 25) {
        cout << "You're too young to date my grandchild!";
    } else if (age < 40) {
        cout << "You can date my grandchild!";
    } else {
        cout << "You're too old to date my grandchild!";
    }
}