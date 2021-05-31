#include "Train.h"
#include "Load.h"
#include "Push.h"
#include <string>

class posAIModel {
    public:
        class pAILoadedModel {
            int neuronCount;
            // Polymorphism will handle the specifics for each bias.
        };

        void Train(std::string _input, std::string _trainSettings[]);
        void Load(std::string _fileDir, std::string _loadSettings[]);
        void Push(std::string _newInput, pAILoadedModel _currentModel, std::string _outputSettings[]);
};