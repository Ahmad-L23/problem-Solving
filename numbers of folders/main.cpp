#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int countFoldersInDirectory(const std::string& path) {
    int folderCount = 0;
    try {
        for (const auto& entry : fs::directory_iterator(path)) {
            // Check if it's a directory
            if (fs::is_directory(entry)) {
                folderCount++;
            }
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return folderCount;
}

int main() {
    std::string path;

    // Take input directory path from the user
    std::cout << "Enter the directory path: ";
    std::cin >> path;

    // Count the number of folders in the directory
    int folderCount = countFoldersInDirectory(path);

    // Output the result
    std::cout << "Number of folders in the directory: " << folderCount << std::endl;

    return 0;
}
