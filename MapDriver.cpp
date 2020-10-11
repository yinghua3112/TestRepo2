#include "Map.h"

#include <iostream>
#include <string>

using std::vector;
using std::cout;
using std::endl;
using std::string;

int main() {
	Map map;
	
	// add continents: BlueMount 3, BlackMount 3 
	map.addContinent("BlueMount", 3);
	map.addContinent("BlackMount", 3);
	
	// add territory 56 GreenMount, its adj territories indices: 29 22 35 44
	map.addTerritory("GreenMount", "BlueMount", 2, 56);
	// add territory 29 PinkMount 1
	map.addTerritory("PinkMount", "BlueMount", 1, 29);
	// 22 OrangeMount 1
	map.addTerritory("OrangeMount", "BlueMount", 1, 22);
	// 34 YellowMount 13 
	map.addTerritory("YellowMount", "BlackMount", 13, 34);
	// 35 RedMount 1
	map.addTerritory("RedMount", "BlueMount", 1, 35);
	
	//Setup edges 
	map.addEdge("GreenMount", * map.getTerritory(1));
	map.addEdge("GreenMount", * map.getTerritory(2));
	map.addEdge("GreenMount", * map.getTerritory(3));
	map.addEdge("PinkMount", * map.getTerritory(0));
	map.addEdge("OrangeMount", * map.getTerritory(0));
	map.addEdge("YellowMount", * map.getTerritory(0));
	map.addEdge("RedMount", * map.getTerritory(0));

	//Setup continents
	map.addTerritoriesToContinents();
	
	map.printMapInfo();
	cout << endl;
	map.printMap();
	cout << endl;
	
	system("pause");
}