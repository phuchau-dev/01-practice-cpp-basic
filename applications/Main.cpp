#include <iostream>
#include <vector>
#include "../applications/Exercise.h"
#include "../applications//PrintLine.h"
#include "../applications/AdditionExerciseMain.h"

int main() {
    PrintLine::printLineWithCustomSymbol("-", "     BAT DAU CAC BAI TAP CO BAN");

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
