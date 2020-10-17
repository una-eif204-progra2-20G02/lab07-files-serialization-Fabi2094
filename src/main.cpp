//
// Created by fabiana on 16/10/2020.
//
#include "Person.h"

#include<iostream>
using namespace std;


int main() {
    Person person1(123456789, 25,"Fabiana");
    Person person2(1987654321,60,"Susana");
    Person person3(456123789,30,"Miguel");

    cout << person1.toString();
return 0;
};
