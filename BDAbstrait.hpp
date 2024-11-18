#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <memory>

using namespace std;

template <class T>
class BDAbstrait{
private:
    vector<shared_ptr<T>> elements;
    virtual shared_ptr<T> createObjectFromRow(vector<string> row) = 0;

public:
    vector<shared_ptr<T>> loadFrom(string filename) {
        fstream fin(filename, ios::in);
        if (!fin.is_open()) throw runtime_error("Failed to open file: " + filename);

        vector<vector<string>> rows;
        string line;

        while (getline(fin, line)) {
            stringstream ss(line);
            vector<string> columns;
            string word;
            while (getline(ss, word, ',')) {
                columns.push_back(word);
            }
            if (!columns.empty()) {
                rows.push_back(columns);
            }
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

