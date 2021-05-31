#include "Core.h"

std::string totalData[2000];

void Read::Input(std::string _stringInput) {
    //TODO: Some error checking with the string.
    Seek classObject;
    classObject.collectData(_stringInput);
}

void Seek::collectData(std::string newData) {
    int totalItems = sizeof(totalData) / sizeof(totalData[0]);
    for (size_t i = 0; i < totalItems; i++)
    {
        totalData[i+1] = totalData[i];
    }
    totalData[0] = newData;
}

