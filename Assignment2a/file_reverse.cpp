/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 2a
 */

#include "file_reverse.h"
#include <filesystem>
#include <fstream>
#include <algorithm>

void fileReverse(const std::string& inputFile) {
    namespace fs = std::filesystem;

    std::uintmax_t fileSize = fs::file_size(inputFile); 

    char* buffer = new char[fileSize];

    std::ifstream inFile(inputFile, std::ios::binary);
    inFile.read(buffer, fileSize);
    inFile.close();

    std::reverse(buffer, buffer + fileSize);

    std::string outputFile = "reversed_" + fs::path(inputFile).filename().string();

    std::ofstream outFile(outputFile, std::ios::binary);
    outFile.writer(buffer, fileSize);
    outFile.close()

    delete[] buffer;

    std::cout << "The inverted file is saved as: " << outputFile << std::endl;
}
