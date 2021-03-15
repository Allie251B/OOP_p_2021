#include "Film.h"
#include <cstring>
#include <iostream>

void Film::copy(const Film& _Film)
{
    movieName = new char[strlen(_Film.movieName) + 1];
	strcpy_s(movieName, strlen(_Film.movieName) + 1, _Film.movieName);
	directorName = new char[strlen(_Film.directorName) + 1];
	strcpy_s(directorName, strlen(_Film.directorName) + 1, _Film.directorName);
	prizesWon = _Film.prizesWon;
}

void Film::erase()
{
	delete[] movieName;
	delete[] directorName;
}

const char* Film::getmovieName()
{
	return movieName;
}

const char* Film::getdirectorName()
{
	return directorName;
}

const int Film::getprizesWon()
{
	return prizesWon;
}

void Film::setmovieName(const char* _movieName)
{
	delete[] movieName;
	movieName = new char[strlen(_movieName)+1];
	strcpy_s(movieName, strlen(_movieName) + 1, _movieName);
}

void Film::setdirectorName(const char* _directorName)
{
	delete[] directorName;
	directorName = new char[strlen(_directorName) + 1];
	strcpy_s(directorName, strlen(_directorName) + 1, _directorName);
}

void Film::setprizesWon(int _prizesWon)
{
	if (_prizesWon < 0)
	{
		prizesWon = 0;
	}
	else
	{
		prizesWon = _prizesWon;
	}
}

Film::Film()
{
	setmovieName("The Adventures of Gerdjikov");
	setdirectorName("Hulio Tulio");
	prizesWon = 0;
}


Film &Film::operator=(const Film &_Film)
{
	if (this != &_Film)
	{
		erase();
		copy(_Film);
	}
	return *this;
}
 
Film::Film(const Film &_Film)
{
	copy(_Film);
}

Film::~Film()
{
	erase();
}

void Film::print()
{
	std::cout << "Movie name: ";
	std::cout << movieName << "\n";
	std::cout << "Director's name: ";
	std::cout << directorName << "\n";
	std::cout << "Prizes won: ";
	std::cout << prizesWon << "\n";
}
