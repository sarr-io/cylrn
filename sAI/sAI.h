#include <iostream>

class sAI {
    
    // Random numbers to start off with. 
    // CHANGE TO CUSTOM RANDOM ALGORITHM (BETWEEN 0.00-1.00).
    float weights = rand() % 0 + 1;
    float biases = rand() % 0 + 1;

    public:
        void Train(int _input, int _label, int _trainSettings[]) {
            
        }

        void Push(int _newInput[], char _loadModelPath[], int _outputSettings[]) {

        }
    private:
        float activation(int n, int _mode) {
            switch (_mode) {
                // Will be PReLU in the future.
                case 0:
                    // Leaky Rectified Linear Unit
                    float lreluResult;
                    if (n < 0) {
                        lreluResult = 0.01 * n;
                    }
                    return lreluResult;
                case 1:
                    // Sigmoid
                    float sigResult = 1.0 / 1.0 + custom_exp(-n);
                    return sigResult;
            }
        }

        // WILL NOT WORK, NEEDS CHANGE!
        // FOR LOOP DOES NOT PROPPERLY WORK WITH FLOATER POINT VALUES.
        float custom_exp(float _n) {
            float e = 2.71828;
            for (int i = 0; i < _n; i++) {
                e *= 2.71828;
            }
            return e;
        }
};
