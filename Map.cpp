// Note:
// 1. Syntax: map<T1, T2>obj; --> T1 = key type, T2 = value type
// 2. std:: map is associative container that store elements in key value combination.
//      where key is unique, otherwise overrides pre-value
#include "Map.h"
using namespace std;

Map::Map(int numV) {
    this->numV = numV;
    adjGrid = new bool* [numV];
    for (int i = 0; i < numV; i++) {
        adjGrid[i] = new bool[numV];
        for (int j = 0; j < numV; j++)
            adjGrid[i][j] = false;
    }
}


void Map::addEdge(int i, int j) {
    adjGrid[i][j] = true;
    adjGrid[j][i] = true;
}


void Map::removeEdge(int i, int j) {
    adjGrid[i][j] = false;
    adjGrid[j][i] = false;
}

void Map::toString() {
    cout << "    Side Grids : " << endl;
    cout << "    ";
    for (int i = 0; i < numV; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < numV; i++) {
        cout << i << " : ";
        for (int j = 0; j < numV; j++)
            cout << adjGrid[i][j] << " ";
        cout << "\n";
    }
}

Map::~Map() {
    for (int i = 0; i < numV; i++)
        delete[] adjGrid[i];
    delete[] adjGrid;
}

void Map::traverse(int p, bool visited[]) { 
    visited[p] = true; 
    for (int q = 0; q < numV; q++) {//q -> visited
        if (adjGrid[p][q]==1) {
            if (!visited[q])
                traverse(q, visited);
        }
    }
}
//for all vertices p as start point, check whether all nodes are visible or not
//initialize as no node is visited
//if there is a node, not visited by traversal, graph is not connected
bool Map::Validate() {
    bool* view = new bool[numV];
    
    for (int p = 0; p < numV; p++) {
        for (int i = 0; i < numV; i++)
            view[i] = false; 
        traverse(p, view);
        for (int i = 0; i < numV; i++) {
            if (!view[i]) 
                return false;
        }
    }
    return true;
}