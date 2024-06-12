#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

class MyString 
{
public:

	MyString() 
	{
		size = 80;
		char* word = new char[size];
	
	}

	MyString(int size)
	{
	
		int newSize = size;
		char* word = new char[newSize];
		count++;

	}

	MyString(const char* word)
	{
		size = strlen(word)+1;
		this->word = new char [size] {0};
		memcpy(this->word, word, size);
		count++;
	}

	void operator = (const MyString& other)
	{
		this->word = other.word;
	}

	MyString operator+(const MyString& other)
	{
		this->size = size + other.size+1;
		strcat_s(this->word, size, other.word);
		return word;
	}






	~MyString()
	{
		
		delete[] word;
		count--;
	}




private:
	
	char* word;
	int size;
	static size_t count;

};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MyString one, two("Hello");
	




	return 0;
}