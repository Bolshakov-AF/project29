#include <iostream>
#include "IntegerArray.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");
	IntegerArray array;

	try
	{
		int value = array[8];
	}
	catch (bad_length& exception)
	{
		cout << "Произошло исключение: " << exception.what() << endl;
	}
	catch (std::exception& exception)
	{
		cout << "Произошло какое-то другое исключение: " << exception.what() << endl;
	}
}


	

