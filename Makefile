# Compiler settings
CXX_LINUX = g++
CXX_WIN = x86_64-w64-mingw32-g++
CXXFLAGS = -std=c++23 -Wall -O3

# Target names
TARGET_LINUX = organizer
TARGET_WIN = organizer.exe

# Source files
SRCS = main.cpp /home/mrcat/Coding/Projects/FolderANdFileConfig/Implementations/FileOrganizer.cpp /home/mrcat/Coding/Projects/FolderANdFileConfig/Implementations/File.cpp 

# Default build (Linux)
all: $(SRCS)
	$(CXX_LINUX) $(CXXFLAGS) $(SRCS) -o $(TARGET_LINUX)

# Windows build (Cross-compilation)
windows: $(SRCS)
	$(CXX_WIN) $(CXXFLAGS) $(SRCS) -o $(TARGET_WIN) -static

clean:
	rm -f $(TARGET_LINUX) $(TARGET_WIN)

# ALL OF THIS CREATED BY MRCAT