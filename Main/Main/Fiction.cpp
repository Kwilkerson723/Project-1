#include "Fiction.h"
#include <iostream>
#include <string>


Fiction::Fiction()
{
}

Fiction::Fiction(std::string book) : _fictionBook(book)
{
}


Fiction::~Fiction()
{
}

std::string Fiction::GetName()
{
	return std::string();
}
