#pragma once

class Film
{
private:
	char* movieName;
	char* directorName;
	int prizesWon;

	void copy(const Film& _Film);
	void erase();

public:
	const char* getmovieName();
	const char* getdirectorName();
	const int getprizesWon();
	void setmovieName(const char* _movieName);
	void setdirectorName(const char* _directorName);
	void setprizesWon(int _prizesWon);

	Film();
	Film& operator= (const Film& _Film);
	Film(const Film& _Film);
	~Film();

	Film(const char* movieName, const char* directorName, int num_prizes);

	void print();

};