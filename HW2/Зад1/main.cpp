#include <iostream>
#include "String.h"

int main()
{
	
	String arr;
	std::cout << "Our string is:" << std::endl;
	arr.setourString("AliBabaa");
	
	arr.print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Our string with added symbol is:" << std::endl;
	arr.insertAt(6,'b');
	arr.print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Our string with added symbol at the end is:" << std::endl;
	arr.add('4');
	arr.print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Our string with removed symbol at choosen position:" << std::endl;
	arr.removeAt(4);
	arr.print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Our string with the first symbol removed:" << std::endl;
	arr.trimStart();
	arr.print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Our string with the last symbol removed:" << std::endl;
	arr.trimEnd();
	arr.print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Our string with the first n number of symbols removed:" << std::endl;
	arr.trimStartNum(2);
	arr.print();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Our string with the last n number of symbols removed:" << std::endl;
	arr.trimEndNum(1);
	arr.print();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Our second string is:" << std::endl;
	String arr1;
	arr1.setourString("Waterloo");
	std::cout << std::endl;
	std::cout << "Our merged strings:" << std::endl;
	std::cout<< arr  + arr1;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Are the two strings the same?" << std::endl;
	if (arr == arr1)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Are the two strings different?" << std::endl;

	if (arr != arr1)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
	std::cout << std::endl;

	/*
	String arr2;
	arr2.setourString("Baba");
	arr += arr2;
	arr.print();                     //tezi malko puskat memory leak - shte go opravq do petuk i promise
	std::cout << std::endl;
	*/
	std::cout << std::endl;
	std::cout << "What is the n symbol of the new merged string?" << std::endl;
	std::cout << arr[5];

}