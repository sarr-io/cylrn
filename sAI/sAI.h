#include <iostream>

class sAI {

    public:
        void __init__(int layer_sizes[]) {

            // TODO: Fill each layer with random numbers to start off with, using for loop.
            double weights[1];
            double biases[1];

            // If layer_sizes is 0 it will automatically choose a recommended amount of layers based on input training size.
        }

        void Train(int input, int label, int train_settings[3]) {
            int activation_mode = train_settings[0];
            int keep_thoughts = train_settings[1];
            int stopping_epoch = train_settings[2];
        }

        void Push(int _newInput[], char _loadModelPath[], int _outputSettings[]) {

        }
    private:
        double evaluate(int _data) {} // TLDR; Evaluates the data and finds the neuron with the highest activation.

        double activation_feed() {} // TLDR; Returns the dot product/scalar of the current weights and number (usually the index of a neuron) in a bias,weight for loop.

        double backprop(double _x[], double _y) {} // TLDR; Returns a tuple representing the gradient for the cost function. (Holds a list of activations from _x[])

        double activation(int n, int _mode) {
            switch (_mode) {
                double result;
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