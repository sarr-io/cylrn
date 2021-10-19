#include "cylrn.h"

cylrn ai;

// Not nearly enough data, just for basic testing.
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
        0, // int activationMode (0 - default [Leaky ReLU], 1 - sigmoid, 2 - ReLU)
        0, // int keepThoughts (0 - no, 1 - yes)
        30 // Stopping Epoch / Generation
    };
    
    int layers[3] = {8, 4, 6}; // 8 is the # of dimensions for each individual training sample.
    int arr_size = sizeof layers / sizeof layers[0];
    
    ai.Train(trainingData, trainingLabel, trainSettings, layers, arr_size); 
    //ai.Push();
    
    return 0;
}