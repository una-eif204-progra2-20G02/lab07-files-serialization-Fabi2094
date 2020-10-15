//
// Created by fabiana on 14/10/2020.
//

#include "Person.h"

Person::Person(int id, int age, const std::string &name) : id(id), age(age), name(name) {}

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

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

std::string Person::toString() {
    std::ostringstream output;
    output << "Name: " << getName()
           << ", Age: " << getAge()
           << ", ID: " << getId();
    return output.str();
}

