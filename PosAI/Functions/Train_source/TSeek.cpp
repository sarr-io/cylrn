#include "TSeek.h"

std::string totalData[2000];

void tSeek::collectData(std::string newData) {
    int totalItems = sizeof(totalData) / sizeof(totalData[0]);
    for (size_t i = 0; i < totalItems; i++)
    {
        totalData[i+1] = totalData[i];
    }
    totalData[0] = newData;
}