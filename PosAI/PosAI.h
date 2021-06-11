#include <string>

class posAIModel {
    public:
        void Train(std::string _input, std::string _trainSettings[]);
        void Push(std::string _newInput, std::string _loadModelPath, std::string _outputSettings[]);
};