#pragma once
#include <string>
class Fiction
{

public:
	std::string _fictionBook;



	Fiction();
	Fiction(std::string book);
	~Fiction();

	std::string GetBookName();
};

