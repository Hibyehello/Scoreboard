#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class File {
    public:

    void print(std::string _str) { file << _str; }

    void setFileStr(std::string _fileStr) { fileStr = _fileStr; file.open(fileStr); }
    std::string getFileStr() { return fileStr; }

    template<typename T>
    void write(T input) { file << input;}

    ~File() { file.close(); }

    private:
    std::string fileStr;
    std::ofstream file;
};
