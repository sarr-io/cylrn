#include "Train.h"

std::string totalData[2000];

// Reads and prepares given input.
void Read::Input(std::string _stringInput) {
    //TODO: Some error checking with the string.
    Seek classObject;
    classObject.collectData(_stringInput);
}

// Makes room for new spot, then fills the spot with requested data.
void Seek::collectData(std::string newData) {
    int totalItems = sizeof(totalData) / sizeof(totalData[0]);
    for (size_t i = 0; i < totalItems; i++)
    {
        totalData[i+1] = totalData[i];
    }
    totalData[0] = newData;
}