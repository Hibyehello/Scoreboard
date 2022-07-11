#pragma once

#include <string>
#include <vector>

#include "File.hpp"

namespace Scoreboard {
    enum ModifyArgs { displayname, rendertype };
    enum RenderType { hearts, integer };
    enum Slot { list, sidebar, belowName };
    enum Type { dummy };

    class Objectives {
        public:
        Objectives(std::string _name, std::string _type = "dummy") : name(_name), type(_type) {}

        Objectives(std::string _name, std::string _type, std::string _display) : 
            name(_name), type(_type), displayName(_display)
            { 
                std::cout << "test1\n";
                add(); 
            };
        
        void list();
        void remove();
        void setdisplay(Slot _slot);
        void displayname(std::string _display);
        void rendertype(RenderType _renderType);

        private:
        std::string name, type, displayName;
        const std::string scoreboardText = "scoreboard objectives ";
        // std::ofstream file;

        std::vector<std::string> renderTypeStr { "hearts", "integer" };
        std::vector<std::string> slotStr { "list", "sidebar", "belowName" };    
        std::vector<std::string> typeStr { "dummy" };

        void add();
        // inline void print(std::string _string) { File::file << _string << '\n'; }
    };
    // void Scoreboard::Objectives::add() {
            
    // }
};