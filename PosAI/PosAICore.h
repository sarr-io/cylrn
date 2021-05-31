#include "Train.h"
#include "Load.h"
#include "Push.h"
#include <string>

class PosAICore {
    public:
        struct currentModel;
        void Train(std::string _input, std::string _trainSettings[]);
        void Load(std::string _input, std::string _loadSettings[]);
        void Push(std::string _outputSettings[]);
};