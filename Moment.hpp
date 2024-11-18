#pragma once
#include <iostream>
#include <string>

using namespace std;

class Moment {
public:
    Moment(string date, string heure);
    Moment(string date);

    string date;
    string heure;
};
