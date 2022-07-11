#pragma once

#include <fstream>
#include <iostream>
#include <string>

class Project {
    public:
    Project(std::string _name, int _version) : name(_name), version(_version) {}

    private:
    int version;
    std::string name;
};