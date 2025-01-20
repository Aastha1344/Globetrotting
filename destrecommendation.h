// destrecommendation.h
#ifndef DESTRECOMMENDATION_H
#define DESTRECOMMENDATION_H

#include <vector>
#include <string>
using namespace std;

// Struct to store destination details
struct Destination {
    string name;
    string type;
    double cost;
    double timeRequired;
};

// Function to load destinations from a file
vector<Destination> loadDestinations(const string& filename);

// Function to recommend destinations
void recommendDestinations(const vector<Destination>& destinations, double budget, const string& type, double availableTime);

#endif
