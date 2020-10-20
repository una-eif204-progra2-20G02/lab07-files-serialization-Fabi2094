//
// Created by fabiana on 16/10/2020.
//

#include "Person.h"
#include "Person.h"

Person::Person(int id, int age, const string &name) : id(id), age(age), name(name) {}

Person::~Person() {

}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

string Person::toString() {
    stringstream s;
    s << "Name: " << name << endl
        << "Age: " << age << endl
        << "Id: " << id << endl;
    return s.str();
}