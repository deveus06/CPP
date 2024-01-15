#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void customReplace(std::string& source, const std::string& search, const std::string& replace) {
    size_t pos = 0;
    while ((pos = source.find(search, pos)) != std::string::npos) {
        source.erase(pos, search.length());
        source.insert(pos, replace);
        pos += replace.length();
    }
}

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    std::ostringstream contentStream;
    contentStream << inputFile.rdbuf();
    if (inputFile.bad()) {
        std::cerr << "Error: Failed to read content from the input file" << std::endl;
        return;
    }

    std::string content = contentStream.str();
    inputFile.close();

    customReplace(content, s1, s2);

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to create output file" << std::endl;
        return;
    }

    outputFile << content;
    outputFile.close();
    std::cout << "Replacement complete. Check the file " << filename << ".replace" << std::endl;
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceInFile(filename, s1, s2);

    return 0;
}

