//
// Created by shawn on 7/10/2022.
//

#include "Anagrams.h"

Anagrams::Anagrams(const char *pathToDict) {
    dictLoader = new DictionaryLoader(pathToDict);
    anagramMap = new AnagramMap();
}

Anagrams::~Anagrams() {
    delete anagramMap;
    delete dictLoader;
}

void Anagrams::run() {
    if(dictLoader->loadDictionary()) {
        anagramMap->createAnagramMap(dictLoader->getWords());
        bool running = true;
        InputOutputHandler::displayWelcomeMessage();
        string input;

        while (running) {
            input = InputOutputHandler::askForInput();
            if (input.size() == 0) {
                InputOutputHandler::displayGoodbyeMessage();
                running = false;
            } else {
                InputOutputHandler::displayAnagrams(anagramMap->getAnagrams(input));
            }
        }

    } else {
        InputOutputHandler::displayGoodbyeMessage();
    }

}
