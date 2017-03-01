#include "Fiction.h"



Fiction::Fiction()
{
}

Fiction::Fiction(std::string book) : _fictionBook(book)
{
}


Fiction::~Fiction()
{
}

std::string Fiction::GetBookName()
{
	return _fictionBook;
}

