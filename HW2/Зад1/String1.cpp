#include "String.h"
#include <cstring>
#include <iostream>

void String::setourString(const char* _ourString)
{
	erase();
	sizeString = strlen(_ourString);
	ourString = new char[sizeString + 1];
	strcpy_s(ourString, sizeString + 1, _ourString);
}

void String::setcapacityString(size_t _capacityString)
{
	capacityString = _capacityString;
}

void String::setsizeString(size_t _sizeString)
{
	sizeString = _sizeString;
}


const char* String::getourString()
{
	return ourString;
}

const size_t String::getcapacityString()
{
	return capacityString;
}

const size_t String::getsizeString()
{
	return sizeString;
}

String::String()
{
	sizeString = 1;
	capacityString = 7;
	ourString = new char[capacityString];
	ourString[0] = '\0';
}

void String::copy(const String& _String)
{
	sizeString = _String.sizeString;
	capacityString = _String.capacityString;
	ourString = new char[_String.capacityString];
	strcpy_s(ourString, _String.sizeString + 1, _String.ourString);
}


String& String::operator=(const String& _String)
{
	if (this != &_String)
	{
		erase();
		copy(_String);
	}
	return *this;
}

String::String(const String& _String)
{
	copy(_String);
}

void String::erase()
{
	delete[] ourString;
}

String::~String()
{
	erase();
}

void String::resize()
{
	capacityString *= 2;
	char* ourChar = new char[capacityString];

	for (size_t i = 0; i < sizeString; i++)
	{
		ourChar[i] = ourString[i];
	}

	erase();
	ourString = ourChar;
}

void String::add(char _AddElement)
{
	if (sizeString >= capacityString)
	{
		resize();
	}

	ourString[sizeString++] = _AddElement;
	ourString[sizeString] = '\0';

}

size_t String::getLenght()
{
	sizeString = strlen(ourString);
	return sizeString;
}

void String::insertAt(size_t index, char symbol)
{
	if (sizeString >= capacityString)
	{
		resize();
	}
	for (size_t i = sizeString; i >= index; i--)
	{
		ourString[i] = ourString[i - 1];
	}

	ourString[index - 1] = symbol;
	sizeString++;
	ourString[sizeString] = '\0';

}

void String::removeAt(size_t index)
{

	for (size_t i = index-1; i < sizeString; i++)
	{
		ourString[i] = ourString[i + 1];
	}
	sizeString--;
}


void String::trimStart()
{
	for (size_t i = 0; i < sizeString; i++)
	{
		ourString[i] = ourString[i + 1];
	}
	sizeString--;    
	ourString[sizeString] = '\0';

}

void String::trimEnd()
{

	sizeString--;
	ourString[sizeString] = '\0';
}

void String::trimStartNum(size_t _trim)
{
	for (size_t i = 0; i < _trim; i++)
	{
		for (size_t j = 1; j < sizeString; j++)
		{
			ourString[j - 1] = ourString[j];
		}
		sizeString--;
		ourString[sizeString] = '\0';
	}
}

void String::trimEndNum(size_t _trim)
{
	sizeString-=_trim;
	ourString[sizeString] = '\0';
}

char* String::operator+(const String& secondString)
{
	char* mergeStrings=new char[sizeString+secondString.sizeString];
	mergeStrings = ourString;
	for (size_t i = 0; i < secondString.sizeString; i++)
	{
		mergeStrings[sizeString++]=secondString.ourString[i];
	}
	ourString[sizeString] = '\0';
	return mergeStrings;
}

String& String::operator+=(const String& _String)
{
	for (size_t i = 0; i < _String.sizeString; i++)
	{
		ourString[sizeString++] = _String.ourString[i];
	}
	ourString[sizeString] = '\0';
	return *this ;
}

bool String::operator==(const String& _String)
{
	if (sizeString == _String.sizeString)
	{
		for (size_t i = 0; i < sizeString; i++)
		{
			if (ourString[i] != _String.ourString[i])
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

bool String::operator!=(const String& _String)
{
	if (sizeString != _String.sizeString)
	{
		return true;
	}
	else
	{
		for (size_t i = 0; i < sizeString; i++)
		{
			if (ourString[i] != _String.ourString[i])
			{
				return true;
			}
		}
		return false;
	}
}

char String::operator[](size_t indexPrint)
{
	if (indexPrint>sizeString)
	{
		return 0;
	}
	return ourString[indexPrint-1];
}



void String::print()
{
	std::cout << ourString;
}