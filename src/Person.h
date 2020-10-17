//
// Created by fabiana on 16/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_FABI2094_PERSON_H
#define LAB07_FILES_SERIALIZATION_FABI2094_PERSON_H


#include <sstream>
#include <iomanip>

class Person {
private:
    int id;
    int age;
    std::string name;

public:
    virtual ~Person();

    Person(int id, int age, const std::string &name);


    int getId() const;

    void setId(int id);

    int getAge() const;

    void setAge(int age);

    const std::string &getName() const;

    void setName(const std::string &name);

    std::string toString();


};


#endif //LAB07_FILES_SERIALIZATION_FABI2094_PERSON_H
