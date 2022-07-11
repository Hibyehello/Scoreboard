#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace File {
    // public:
    static std::string fileStr;
    static std::ofstream file;

    static void print(std::string _str) { file << _str; }

    static void setFileStr(std::string _fileStr) { fileStr = _fileStr; file.close(); file.open(fileStr); }
    static std::string getFileStr() { return fileStr; }
};
