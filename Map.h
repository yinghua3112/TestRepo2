#pragma once
#include <iostream>
class Player {};

class Map {
private:
    bool** adjGrid;
    int numV;
    Player territoryOwner;
    int armyAmount;
    
public:
    
    Map(int);
    ~Map();

    void addEdge(int, int);

    void removeEdge(int, int);

    void toString();

    void traverse(int, bool*);

    bool Validate();
};