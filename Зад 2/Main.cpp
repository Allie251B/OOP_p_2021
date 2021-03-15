#include "Film.h"
#include <iostream>

int main()
{
	Film filmInfo;
	filmInfo.setmovieName("Harry Potter and the cursed DSTR");
	filmInfo.setdirectorName("Alexandra B. ");
	filmInfo.setprizesWon(50);

	filmInfo.print();
	
	/* 
	std::cout << "______________\n";
	Film filmCopy = filmInfo;          // da proverim dali raboti operator rawno 
	filmCopy.print();
	*/


}