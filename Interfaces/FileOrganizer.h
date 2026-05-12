#ifndef FILE_ORGANIZER_H
#define FILE_ORGANIZER_H

#include <string>
#include <vector>

class FileOrganizer {
    private:
        std::string extensioToMove;
        std::string targetFolderName;

    public:
        FileOrganizer(std::string ext, std::string folder);
        void startOrganizing();


        void setExt(std::string newext);
        void setFolder(std::string newfolder);
};


#endif