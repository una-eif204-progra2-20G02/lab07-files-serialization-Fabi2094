//
// Created by fabiana on 16/10/2020.
//

#include "PersonList.h"

PersonList::PersonList() {

}


PersonList::~PersonList() {
    personList.clear();
}

void PersonList::addPerson(Person person) {
    personList.push_back(person);
}

Person PersonList::getPerson(int position) {
    return personList.at(position);
}

int PersonList::getListSize() {
    return personList.size();
}

std::string PersonList::toString() {
    std::ostringstream output;
    for (int i; i < personList.size(); i++) {
        output << personList[i].toString();
    }
    return output.str();
}

