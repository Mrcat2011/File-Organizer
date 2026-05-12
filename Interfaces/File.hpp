#ifndef FILE_H_
#define FILE_H_

#include <string>

#if defined(_WIN32) 
    #include<cstdint>
    using FILESize_t = uint64_t;
#else 
    using FILESize_t = u_int64_t;

#endif


class File {
    protected:
        std::string name;
        std::string ext;
        FILESize_t size;
        /**
         * PORTABILITY NOTE:
         * The type 'u_int64_t' is a platform-specific typedef common in Linux systems 
         * but is not recognized by the Windows toolchain (MinGW/x86_64-w64-mingw32-g++).
         * 
         * To maintain support for both Linux and Windows builds, we use the C++ standard 
         * 'uint64_t' defined in <cstdint>. This ensures the project remains 
         * cross-platform without breaking the build for Windows users.
         */

        std::string fullPath;
    
    public:
        File(std::string path);
        void displayInfo() const;


        std::string getName() const {return name; }
        std::string getExt() const {return ext; }


};

#endif