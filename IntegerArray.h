#pragma once
#include <iostream>
#include <string>
#include <exception> 
using namespace std;

class bad_length : public std::exception
{
private:
	std::string m_error;

public:
	bad_length(std::string error)
		: m_error(error)
	{

	}

	const char* what() const noexcept { return m_error.c_str(); }
};

class IntegerArray
{
private:

	int m_data[7]{};
public:
	IntegerArray() {}

	int getLength() { return 7; }

	int& operator[](const int index)
	{
		if (index < 0 || index >= getLength())
			throw bad_length("неправильная длина");

		return m_data[index];
	}

};