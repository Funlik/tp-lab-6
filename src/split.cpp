//
// Created by Оксана on 04.03.2020.
//

#include <sstream>
#include <fstream>
#include <iostream>
#include "factory.h"
using namespace std;


vector<string> split(const string &s, char del){
    vector<string> words;
    stringstream ss(s);
    string currentWord;
    while(getline(ss, currentWord, del))
        words.push_back(currentWord);
    return words;
}
