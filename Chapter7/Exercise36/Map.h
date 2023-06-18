#pragma once
#include <iostream>
#include "MapElement.h"
class Map {
private:
    MapElement* head;
    void free_list();
public:
    Map() : head(nullptr) {}
    ~Map() { free_list(); }
    int insert(int k, const std::string& s);
    void print();

    // .. weitere Elemente
};