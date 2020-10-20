//
// Created by fabiana on 20/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_FABI2094_BINARYSAVE_H
#define LAB07_FILES_SERIALIZATION_FABI2094_BINARYSAVE_H

#include"IPersonSave.h"


class SaveBinary: public IPersonSave {

public:

    string save(const vector<Person>&) override;

};

#endif //LAB07_FILES_SERIALIZATION_FABI2094_BINARYSAVE_H
