//
// Created by shawn on 7/10/2022.
//

#include "DictionaryLoader.h"

bool DictionaryLoader::loadDictionary() {
    string line;
    ifstream dictFile;
    dictFile.open(pathToDictionary);

    if(dictFile.is_open()){
        while(getline(dictFile, line)){
            words.push_back(line);
        }
        dictFile.close();
    } else {
        cerr << "Failed to open file at path " << pathToDictionary << endl;
    }

    return !words.empty();
}

vector<string> *DictionaryLoader::getWords() {
    return &words;
}

DictionaryLoader::DictionaryLoader(const string &path) {
    pathToDictionary = path;
}
