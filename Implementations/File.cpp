#include "../Interfaces/File.hpp"
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

File::File(std::string _path) {
    fs::path p(_path);

    if (fs :: exists(p)) {
        this->name = p.filename().string();
        this->ext = p.extension().string();
        this->size = fs::file_size(p);
        this->fullPath = _path;
    }
} 

void File::displayInfo() const {
    std::cout << "File " << name << " | extension " << ext << " | Size " << size << " bytes" << std::endl;
}