#pragma once
#include "Film.h"

class FilmRanking
{
private:
	Film* films;
	int number_of_movies;
	int max_size;
	void copy(const FilmRanking &_FilmRank);
	void erase();
public:
	FilmRanking();
	FilmRanking& operator=(const FilmRanking& _FilmRank);
	FilmRanking(const FilmRanking& _FilmRank);
	~FilmRanking();

	void print_all_movies();
	void print_top_movies(int top_n_movies);

	const Film getMovieInfoByName(char* movie_name);
	const Film* getMovies();

	void setNewMovie(const Film newMovie);
	void setMovies(const Film* movie_array);
};
