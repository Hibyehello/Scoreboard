#pragma once

#include <cstdarg>
#include <iostream>
#include <vector>

class Entity {
    public:
    enum entity { entities, nearest, random, self, players };

    // template<typename ...Ts> 
    Entity(entity _target, const char* _args...) {
    }

    private:
    std::vector<std::string> entityStr { "@e", "@p", "@r", "@s", "@a" };
};