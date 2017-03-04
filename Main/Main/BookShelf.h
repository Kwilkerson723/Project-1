#pragma once
#include <string>
#include "Fiction.h"
#include "NonFiction.h"


class Books
{
	//use this to add books to shelf, see course.cpp and .h
	//add something to check that the book is in the shelf
	//douglas crockford
private:
	std::string _bookName;
	std::string _bookDescription;
	std::string _bookAuthor;
	Fiction FicBook;
	NonFiction NFicBook;
public:




	Books();
	Books(std::string nameOfBook,std::string description, std::string author);
	~Books();



};

