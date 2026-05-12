#include <iostream>
#include <string>
#include "Interfaces/FileOrganizer.h"

std::string ext, folder;

FileOrganizer Organizer(ext, folder);

void Orginze() {
    std::cout << "Enter extension to move : ";
    std::cin >> ext;


    if (ext[0] != '.') {
        ext = '.' + ext;
    }

    Organizer.setExt(ext);
    
    std::cout << "Enter taget folder name : ";
    std::cin >> folder;

    Organizer.setFolder(folder);

    Organizer.startOrganizing();
}

int main(int argc, char** argv) {
    bool open = true;

    while (open) {
        

        std::cout << "--------- Smart File Organizer ---------" << std::endl;

        std::cout << "1. Organize" << std::endl;
        std::cout << "2. Quit" << std::endl;

        int opt; 
        std::cout << "Enter : ";
        std::cin >> opt;

        switch (opt)
        {
            case 1: 
                Orginze();
                break;
        
            default:
                open = false;
                break;
        }
    }

    return 0;
}