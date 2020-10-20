//
// Created by fabiana on 16/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_FABI2094_PERSON_H
#define LAB07_FILES_SERIALIZATION_FABI2094_PERSON_H

#include <iomanip>
#include <sstream>
#include <fstream>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;


class Person {
private:
    int id;
    int age;
    string name;

public:
    virtual ~Person();

    Person(int id, int age, const string &name);


    int getId() const;

    void setId(int id);

    int getAge() const;

    void setAge(int age);

    const string &getName() const;

    void setName(const string &name);

    string toString();


};


#endif //LAB07_FILES_SERIALIZATION_FABI2094_PERSON_H
