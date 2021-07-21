#include <iostream>

class cylrn {

    int layer_count;
    int *l_sizes;
    double *weights;
    double *biases;

    public:

        void Train(int input[], int label[], int (&train_settings)[3], int layer_sizes[], int sizes_len) {
            int activation_mode = train_settings[0];
            int keep_thoughts = train_settings[1];
            int stopping_epoch = train_settings[2];

            if (sizes_len > 0) {
                randomize_layers(layer_sizes, sizes_len);
            }
            else {
                // TODO: get length of input and generate layer_sizes, then start training
            }
        }

        void Push(int _newInput[], char _loadModelPath[], int _outputSettings[]) {

        }

    private:

        // TLDR; Evaluates the data and finds the neuron with the highest activation.
        double evaluate(int _data) {
            return 0;
        } 

        // TLDR; Returns a tuple representing the gradient for the cost function. (Holds a list of activations from _x[])
        double backprop(double _x[], double _y) {
            return 0;
        } 

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
                
                // Will finish later, need first demo working with Leaky ReLU
                // case 1:
                //     // Sigmoid
                //     float result = 1.0 / 1.0 + custom_exp(-n);
                //     return result;
            }
        }

        // Filling each layer with pseudo-random numbers to start off with, using for loop.
        void randomize_layers(int layer_sizes[], int length) {
            for (int i = 0; i < length; i++)
            {
                for (int v = 0; i < layer_sizes[i]; i++)
                {   
                    weights[v] = pseudo_ran(v * v, v);
                    biases[v] = pseudo_ran(v + v, v);
                }
            }
        }

        // Will more than likely replace in the future.
        double pseudo_ran(int seed, int n) {
            int new_seed = seed * n;
            // Random system of equations that generates a random-looking number.
            double num = ((new_seed / 100 * 345287 + 12 / 1200) / 0.4233 + 1) - 2 % 1;
            if(num > 1) {
                return 1;
            }
            else {
                return num;
            }
            std::cout << num << std::endl;
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