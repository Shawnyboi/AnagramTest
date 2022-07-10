//
// Created by shawn on 7/9/2022.
//

#include "AnagramMap.h"

string AnagramMap::sortString(string s) {
    std::sort(s.begin(), s.end());
    return s;
}

vector<string> AnagramMap::getAnagrams(const string& word) {

    string sortedString = sortString(word);
    if(map.count(sortedString) > 0){
        auto anagramsFromMap = map.at(sortedString);
        vector<string> anagrams;
        for(auto & anagram: anagramsFromMap){
            if(anagram != word){
                anagrams.push_back(anagram);
            }
        }
        return anagrams;
    } else {
        return vector<string>();
    }
}


void AnagramMap::checkInWord(const string &word) {
    string sortedString = sortString(word);

    if(map.count(sortedString) > 0){
        vector<string> anagrams = map.at(sortedString);
        vector<string> newVec;
        newVec.push_back(word);
        newVec.insert(newVec.end(), anagrams.begin(), anagrams.end());
        map.erase(sortedString);
        map.insert({sortedString, newVec});
    } else {
        vector<string> newVec;
        newVec.push_back(word);
        map.insert({sortedString, newVec});
    }
}

void AnagramMap::createAnagramMap(const vector<string>* words) {
    for(auto & word : *words){
        checkInWord(word);
    }
}
