#include <iostream>

class sAI {
    
    // Random numbers to start off with.
    float weights = rand() % 1 + 100;
    float biases = rand() % 1 + 100;

    public:
        void Train(int _input, int _label, int _trainSettings[]) {
            
        }

        void Push(int _newInput[], char _loadModelPath[], int _outputSettings[]) {

        }
    private:
        int activation(int n, int _mode) {
            switch (_mode) {
                case 1:
                    // Sigmoid
                    int result = 1.0 / 1.0 + std::exp(-n);
                    return result;
                // Will be PReLU in the future.
                case 0:
                    // Leaky Rectified Linear Unit
                    int result;
                    if (n < 0) {
                        result = 0.01 * n;
                    }
                    return result;
            }
        }
};
