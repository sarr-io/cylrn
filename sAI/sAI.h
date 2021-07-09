#include <iostream>

class sAI {

    public:
        void __init__(int layer_sizes[]) {

            // Fill each layer with random numbers to start off with.
            float weights[1];
            float biases[1];
        }

        void Train(int _input, int _label, int _trainSettings[4]) {
            
        }

        void Push(int _newInput[], char _loadModelPath[], int _outputSettings[]) {

        }
    private:
        double evaluate(int _data) {} // TLDR; Evaluates the data and finds the neuron with the highest activation.

        double activation_feed() {} // TLDR; Returns the dot product/scalar of the current weights and number (usually the index of a neuron) in a bias,weight for loop.

        double backprop(double _x[], double _y) {} // TLDR; Returns a tuple representing the gradient for the cost function. (Holds a list of activations from _x[])

        double activation(int n, int _mode) {
            switch (_mode) {
                float result;
                // Will be PReLU in the future.
                case 0:
                    // Leaky Rectified Linear Unit
                    if (n < 0) {
                        result = 0.01 * n;
                    }
                    else {
                        result = n;
                    }
                    return result;
                
                // Will finish later, need first demo working with LReLU
                // case 1:
                //     // Sigmoid
                //     float result = 1.0 / 1.0 + custom_exp(-n);
                //     return result;
            }
        }
        
        // WILL NOT WORK, NEEDS CHANGE!
        // FOR LOOP DOES NOT PROPPERLY WORK WITH FLOATER POINT VALUES (2.71828 is not divisible by n+1 / integer values).
        // float custom_exp(double _n) {
        //     double e = 2.718281828459045;
        //     for (int i = 0; i < _n; i++) {
        //         e *= 2.718281828459045;
        //     }
        //     return e;
        // }
};