#pragma once
#include "Exercise.h"
#include "PrintLine.h"
#include "Addition.h"  // Include đúng Addition.h, KHÔNG BAO GIỜ include .cpp

class AdditionExerciseMain : public Exercise {
public:
	void execute() override;
};
#pragma once
