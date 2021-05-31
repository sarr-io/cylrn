#include <string>

class Read {
    public:
        void Input(std::string _stringInput);
};

class Seek {
    public:
        //Collecting the read information into a table usable to examine.
        void collectData(std::string newData);

        //Creating the virtual neuron's bias for this data being used.
        void createBias(std::string collectedData[]);
};

class Store {
    public:
        
};