#include "PosAI.h"

PosAI ai;

int trainingData[4] = {
    10001011,
    11011011,
    10011011,
    10000100
};

int trainingLabel[4] = {
    4,
    6,
    5,
    2
};

int main() {

    int trainSettings[3] = {
    0, // int activationMode (0 - default, 1 - sigmoid, 2 - ReLU)
    100, // int minAccuracy (default - 100%)
    0 // int keepThoughts (0 - no, 1 - yes)
    };

    // The header will automatically adjust the weights and biases each time you feed input via gradient descent functions.
    for (size_t i = 0; i < 4; i++)
    {
        ai.Train(trainingData[i], trainingLabel[i], trainSettings);
    }

    return 0;
}