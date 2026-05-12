#include "../Interfaces/FileOrganizer.h"
#include "../Interfaces/File.hpp"
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

FileOrganizer::FileOrganizer(std::string _ext, std::string _folder) : extensioToMove(_ext), targetFolderName(_folder) {}


void FileOrganizer::setExt(std::string newext) {
    this->extensioToMove = newext;
}

void FileOrganizer::setFolder(std::string newfolder) {
    this->targetFolderName = newfolder;
}

void FileOrganizer::startOrganizing() {
    if (!fs::exists(targetFolderName)) {
        fs::create_directory(targetFolderName);
        std::cout << targetFolderName << " created succesfully" << std::endl;
    }

    int movedCount = 0;

    for (const auto& entry : fs::directory_iterator(fs::current_path())) {

        if (entry.is_regular_file()) {
            
            if (entry.path().extension() == extensioToMove) {
                
                
                File tempFile(entry.path().string());
                tempFile.displayInfo();

                
                fs::path newPath = fs::path(targetFolderName) / entry.path().filename();

                try {
                    fs::rename(entry.path(), newPath);
                    std::cout << "Moved -> " << newPath.filename() << std::endl;
                    movedCount++;
                } catch (const fs::filesystem_error& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
            }
        }
    }
    std::cout << "\nMoved " << movedCount << " files successfully." << std::endl;
}

