#include "PrintLine.h"

void PrintLine::printLine() {
    std::cout << "\n========== Kết thúc bài ==========\n";
}

void PrintLine::printLine(const std::string& message) {
    std::cout << "\n- " << message << "\n";
}

void PrintLine::printLineWithCustomSymbol(const std::string& symbol, const std::string& message) {
    std::string line(message.length() + 1, symbol[0]); // Tạo dòng dài tùy chỉnh
    std::cout << "\n" << line << "\n";
    std::cout << " " << message << " \n";
    std::cout << line << "\n";
}
