#pragma once
class String
{
private:
	char* ourString ;
	size_t sizeString;
	size_t capacityString;
	void erase();
	void copy(const String& _String);
public:

	String();
	String& operator= (const String& _String);
	String(const String& _String);
	~String();


	const char* getourString();
	const size_t getcapacityString();
	const size_t getsizeString();

	void setourString(const char* _setourString);
	void setcapacityString(size_t _capacityString);
	void setsizeString(size_t _sizeString);

	void resize();
	void add(char _AddElement);
	size_t getLenght();

	void trimStart();
	void trimEnd();

	void trimStartNum(size_t _trim);
	void trimEndNum(size_t _trim);

	void insertAt (size_t index, char symbol);
	void removeAt(size_t index);

	char* operator + (const String& _String);
	String& operator += (const String& _String);
	bool operator == (const String& _String);
	bool operator != (const String& _String);
	char operator [] (size_t indexPrint);

	void print();
};
