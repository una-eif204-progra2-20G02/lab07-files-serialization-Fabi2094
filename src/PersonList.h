//
// Created by fabiana on 16/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_FABI2094_PERSONLIST_H
#define LAB07_FILES_SERIALIZATION_FABI2094_PERSONLIST_H


#include"Person.h"
#include "IPersonSave.h"

class PersonList {
private:
   vector<Person> personList;
public:
    PersonList();

    ~PersonList();

    void addPerson(Person person);

    Person getPerson(int position);

    int getListSize();

    string toString();



};


#endif //LAB07_FILES_SERIALIZATION_FABI2094_PERSONLIST_H
