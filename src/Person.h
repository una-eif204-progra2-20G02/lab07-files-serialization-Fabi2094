//
// Created by fabiana on 14/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H

#include <sstream>
#include <iomanip>

class Person {
private:
    int id;
    int age;
public:
    virtual ~Person();

private:
    std::string name;
public:
    Person(int id, int age, const std::string &name);


    int getId() const;

    void setId(int id);

    int getAge() const;

    void setAge(int age);

    const std::string &getName() const;

    void setName(const std::string &name);

    std::string toString();


};


#endif //MY_PROJECT_NAME_PERSON_H
