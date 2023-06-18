#include "Map.h"
#include "MapElement.h"
#include<iostream>

int Map::insert(int k, const std::string& s) {
	MapElement* temp, * prev, * next;
	temp = new MapElement(k, s);

	if (!head) {
		head = temp;
	}
	else {
		prev = nullptr;
		next = head;
		while (next && next->key <= k){
			prev = next;
			next = next->next;
		}

		if (prev && prev->key == k) {
			prev->value = s;
			delete temp;
			return 0;
		}
		if (!next) {
			prev->next = temp;
		}
		else {
			if (prev) {
				temp->next = prev->next;
				prev->next = temp;
			}
			else {
				temp->next = head;
				head = temp;
			}
		}
	}
	return 1;
}

void Map::free_list() {
	delete head;
	head = nullptr;
}

void Map::print() {
	for (MapElement* p = head; p != nullptr; p = p->next)
		std::cout << p->key << ": " << p->value << std::endl;
}
