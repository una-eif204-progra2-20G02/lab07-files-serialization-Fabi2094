//
// Created by fabiana on 20/10/2020.
//
#include "BinarySave.h"


string SaveBinary::save(const vector<Person> &personL) {
    ofstream archivo;
    try {
        archivo.open("BinaryFile.dat", ios::app | ios::binary);
    }
    catch (std::ifstream::failure a) {
        cout << "Can't open file";
    }
    archivo.write((char *) &personL, sizeof(Person));
    archivo.close();
}
