#include "Map.h"
#include "MapElement.h"
#include <iostream>

int main() {
	Map m;
	m.insert(1, "name");
	m.insert(12, "der");
	m.insert(4, "die");
	m.insert(1, "Name");

	printf("\nThe values are:\n");
	m.print();
	return 0;
}