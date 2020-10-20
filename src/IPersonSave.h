//
// Created by fabiana on 20/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_FABI2094_IPERSONSAVE_H
#define LAB07_FILES_SERIALIZATION_FABI2094_IPERSONSAVE_H

#include "Person.h"


class IPersonSave {

public:
    virtual ~IPersonSave();

    virtual string save(const vector<Person>&) = 0;





};




#endif //LAB07_FILES_SERIALIZATION_FABI2094_IPERSONSAVE_H
