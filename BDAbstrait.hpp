#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

template <class T>
class BDAbstrait{
private:
    vector<shared_ptr<T>> elements;
    virtual shared_ptr<T> createObjectFromRow(vector<string> row) = 0;

public:
    vector<shared_ptr<T>> loadFrom(string filename) {
        fstream fin;
        fin.open(filename, ios::in);
        
        vector<vector<string>> rows;
        string line, word, tempString;
        while (fin >> tempString) {
            vector<string> columns;
            getline(fin, line);
            stringstream s(line);
            while (getline(s, word, ',')) columns.push_back(word);
            columns[0] = tempString + columns[0];
            rows.push_back(columns);
        }
        fin.close();
        rows.erase(rows.begin());
        
        vector<shared_ptr<T>> outputList;
        for (auto row : rows) {
            shared_ptr<T> newObject = createObjectFromRow(row);
            outputList.push_back(newObject);
        }
        return outputList;
    }
    
    virtual void ajouterEntree(shared_ptr<T> element) {
        elements.push_back(element);
    }
    
};

