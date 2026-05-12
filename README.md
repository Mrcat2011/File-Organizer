Smart File Organizer
A lightweight and efficient command-line utility written in C++ designed to help users declutter their directories by automatically grouping files based on their extensions.

🚀 Features
Extension-Based Filtering: Quickly move all files of a specific type (e.g., .pdf, .txt, .cpp) at once.

Dynamic Folder Creation: Automatically creates the target directory if it doesn't already exist.

File Metadata Display: Shows file information, including name, extension, and size, during the organization process.

Clean CLI Interface: Simple menu-driven system for easy navigation.

🛠️ Tech Stack
Language: C++

Build Tool: Makefile (included for easy compilation)

Environment: Optimized for Linux/Unix-based systems (shown running on Ubuntu)

To make your project user-friendly for both Windows and Linux users, you can update your README to explain how they can run the pre-compiled binaries you've already created, or how to compile them locally if they want to.

Since you've switched to Ubuntu and are using C++20 with -O3 optimization, these instructions will ensure your users get the same performance.

🚀 How to Run
You don't need to compile the project yourself if you just want to use it. I have provided pre-compiled executables for both Windows and Linux.

1. Using Pre-compiled Binaries (Fastest)
Windows Users:

Download organizer.exe.

Open your terminal (CMD or PowerShell) in that folder.

Run: .\organizer.exe

Linux Users:

Download the organizer binary.

Give it execution permissions: chmod +x organizer

Run: ./organizer


🛠️ Compiling on Your Local Computer
If you want to build the project from the source code (main.cpp), use the following commands. The project is optimized using -O3 for maximum performance.

For Linux (Ubuntu/Arch/etc.)
Make sure you have g++ installed.

Bash
# Using the Makefile
make

For Windows
You will need a compiler like MinGW or MSVC installed.

Bash
# Using the Makefile (if using MinGW/Make)
make windows
