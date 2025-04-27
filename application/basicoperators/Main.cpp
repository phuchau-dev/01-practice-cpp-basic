#include <iostream>
#include <vector>
#include "../utils/Exercise.h"
#include "../utils/printLine/PrintLine.h"
#include "../addition/AdditionExerciseMain.h"

int main() {
    PrintLine::printLineWithCustomSymbol("-", "     Bắt đầu các bài tập toán tử cơ bản");

    // Khai báo danh sách các bài tập (dùng con trỏ để polymorphism)
    std::vector<Exercise*> exercises = {
        new AdditionExerciseMain(),
    };

    // Chạy lần lượt từng bài tập
    for (Exercise* ex : exercises) {
        ex->execute();
    }

    // Xoá bộ nhớ sau khi dùng
    for (Exercise* ex : exercises) {
        delete ex;
    }

    return 0;
}
