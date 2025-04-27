#pragma once
#include <iostream>
#include <string>

class PrintLine {
public:
    static void printLine(); // Phương thức mặc định
    static void printLine(const std::string& message); // Phương thức với thông báo tùy chỉnh
    static void printLineWithCustomSymbol(const std::string& symbol, const std::string& message); // Phương thức với ký tự tùy chỉnh
};
