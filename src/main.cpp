#include <iostream>
#include <fstream>

// #include "../include/File.hpp"
#include "../include/Scoreboard.hpp"
#include "../include/Common.hpp"

int main() {
    Common::file->setFileStr("outFile2.mcfunction");
    Scoreboard::Objectives test0("test0", "dummy", "{\"text\":\"TEST0\"}");


    // test0.list();
    // test0.setdisplay(Scoreboard::Slot::sidebar);
    // test0.rendertype(Scoreboard::RenderType::hearts);
    // test0.displayname("{\"text\":\"TEST0\",\"color\":\"dark_aqua\"}");
    // test0.remove();

    return 0;
}