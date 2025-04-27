//C++ (Abstract Class):
#pragma once
class Exercise {
public:
	// phương thức thuần tý (pure virtual function)
	virtual void  execute() = 0;
	// Destructor ảo (virtual destructor) để tránh rò rỉ bộ nhớ khi kế thừa
	virtual ~Exercise() {}
};