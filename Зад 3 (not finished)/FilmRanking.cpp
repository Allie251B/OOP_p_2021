#include "FilmRanking.h"
#include <iostream>

void FilmRanking::copy(const FilmRanking& _FilmRank)
{
}

void FilmRanking::erase()
{
}

FilmRanking::FilmRanking()
{
	max_size = 10;
	films = new Film[10];
	setNewMovie(Film("Fmi Life", "Velikova", 100));
	setNewMovie(Film("Test", "Tester Testov", 2));
	
}

FilmRanking& FilmRanking::operator=(const FilmRanking& _FilmRank)
{
	// TODO: insert return statement here
	return *this;
}

FilmRanking::FilmRanking(const FilmRanking& _FilmRank)
{
}



FilmRanking::~FilmRanking()
{
	delete[] films;
}

void FilmRanking::print_all_movies()
{
	for (int i = 0; i < number_of_movies; i++)
	{
		films[i].print();
	}
}

void FilmRanking::print_top_movies(int top_n_movies)
{

}

const Film FilmRanking::getMovieInfoByName(char* movie_name)
{
	return Film();
}

const Film* FilmRanking::getMovies()
{
	return nullptr;
}

void FilmRanking::setNewMovie(const Film newMovie)
{
 

	
	if (number_of_movies + 1 < max_size)
	{
		films[number_of_movies] = newMovie;
		number_of_movies++;
 
	}
	else
	{
		std::cout << "Too many movies\n";
	}

}

void FilmRanking::setMovies(const Film* movie_array)
{
}
