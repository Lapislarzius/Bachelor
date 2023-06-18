#pragma once
#include <iostream>

class MapElement {
public:
    int key;
    std::string value;
    MapElement* next;
    MapElement() : key(0), next(nullptr) {}
    MapElement(int k, const std::string& s) : key(k), value(s), next(nullptr) {}
    ~MapElement() {
        std::cout << "Destructor of " << key << ": " << value << std::endl;
        delete next;
    }
    // ... ggf. weitere Elemente
};