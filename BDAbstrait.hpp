#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

template <class T>
class BDAbstrait{
private:
    vector<T> elements;
public:
    void loadFrom(string filename) {
        fstream fin;
        fin.open(filename, ios::in);
        
        vector<vector<string>> rows;
        string line, word, tempString;
        while (fin >> tempString) {
            vector<string> columns;
            getline(fin, line);
            stringstream s(line);
            while (getline(s, word, ',')) columns.push_back(word);
            rows.push_back(columns);
        }
        
        
        fin.close();
        
    }
};

