#pragma once
#include <string>
class Fiction
{
private:
	std::string _fictionBook;

public:


	Fiction();
	
	Fiction(std::string book);
	~Fiction();

	std::string GetBookName();
};

