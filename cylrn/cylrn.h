#include <iostream>

class cylrn {

    int layer_count;
    int *l_sizes;
    double *weights;
    double *biases;

    public:

        void set_layers(int layer_sizes[]) {

            layer_count = sizeof(layer_sizes)/sizeof(layer_sizes[0]);
            l_sizes = layer_sizes;

            // Filling each layer with pseudo-random numbers to start off with, using for loop.
            for (int i = 0; i < layer_count; i++)
            {
                for (size_t i = 0; i < sizeof(l_sizes)/sizeof(l_sizes[0]); i++)
                {   
                    // Just to make people mad
                    char *w_addr = (char*)&weights;
                    char *b_addr = (char*)&biases;
                    weights[i] = pseudo_ran(w_addr, i);
                    biases[i] = pseudo_ran(b_addr, i);
                }
            }
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

        // Will more than likely replace in the future.
        double pseudo_ran(char var_addr[], int n) {
            for (int i = 2; i < sizeof(var_addr)/sizeof(var_addr[0]); i++)
            {
                try
                {
                    int seed = (int)var_addr[i] * n;
                    // Random system of equations that generates a random-looking number.
                    double num = ((seed / 100 * 345287 + 12 / 1200) / 0.4233 + 1) - 2 % 1;
                    if(num > 1) {
                        return 1;
                    }
                    else {
                        return num;
                    }
                }
                catch(int filler)
                {
                    // Nothing
                }
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