#include "PosAICore.h"

void posAIModel::Train(std::string _input, std::string _trainSettings[]) {
    // TODO: Collect input into multiple objects inside a class and train generation by generation. Stops & exports the trained AI's model file when told to.
}

void posAIModel::Load(std::string _fileDir, std::string _loadSettings[]) {
    // TODO: Dynamically load each bias's description to the pAILoadedModel object during runtime.
}

void posAIModel::Push(std::string _newInput, posAIModel::pAILoadedModel _currentModel, std::string _outputSettings[]) {
    // TODO: Use the dynamically loaded class object to filter the new input and return the AI's result.
}