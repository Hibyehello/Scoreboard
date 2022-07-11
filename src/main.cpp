#include <iostream>
#include <fstream>

// #include "../include/File.hpp"
#include "../include/Scoreboard.hpp"

int main() {
    File::setFileStr("../outFile.mcfunction");

    Scoreboard::Objectives test0("test0", "dummy", "{\"text\":\"TEST0\"}");


    // test0.list();
    // test0.setdisplay(Scoreboard::Slot::sidebar);
    // test0.rendertype(Scoreboard::RenderType::hearts);
    // test0.displayname("{\"text\":\"TEST0\",\"color\":\"dark_aqua\"}");
    // test0.remove();

    File::file.close();

    return 0;
}