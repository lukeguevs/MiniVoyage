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
    void addFrom(string filename) {
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
        
        for (auto row : rows) {
            shared_ptr<T> newObject = createObjectFromRow(row);
            elements.push_back(newObject);
        }
    }
    
    virtual void ajouterEntree(shared_ptr<T> element){
        elements.push_back(element);
    }
    
    virtual vector<shared_ptr<T>> getElements(){
        return elements;
    }
};

