#include "String.h"
#include "pch.h"
using namespace std;



//TODO : написать приведение типов
//TODO : Отдебагать все



	//getter для строки

	const char* String::getString()
	{
		return this->_string;
	}

	//getter для длинны строки

	int String::getLength()
	{
		return this->length;
	}

	//конструктор пустой строки

	String::String()
	{
		this->length = 0;
		this->_string = nullptr;
	}

	//конструктор копированния

	String::String(const String &secondString)
	{
		//копируемм длинну строки

		this->length = secondString.length;

		//выделяем память в куче для нашей строки + закрывающий ноль

		this->_string = new char[length + 1];

		//копируем все символы

		strcpy(this->_string,secondString._string);
	}

	//копированния строки

	//конструктор новой строки
	String::String(const char *newString)
	{
		this->length = strlen(newString);
		this->_string = new char[this->length + 1];
		strcpy(this->_string, newString);
	}

	//перегрузка оператора конкатенации
	String String::operator+(const String &rightString)
	{
		if (rightString._string == nullptr)return NULL;
		//создаем результируюшую строку
		String newString;
		//освобождаем память
		delete[] newString._string;
		//получаем длину новой строки
		newString.length = this->length + rightString.length;
		//выделяем память строки
		newString._string = new char[newString.length + 1];
		//складываем непосредственно строки
		strcpy(newString._string,this->_string);
		strcpy(newString._string + this->length, rightString._string);
		//newString._string[newString.length + 1] = '\0';
		//возвращаем наш объект
		return newString;
	}

	//меняет местами значения двух строк

	void String::swap(String &b)
	{
		std::swap(length, b.length);
		std::swap(_string, b._string);
	}

	//перегрузка оператора присваивания

	String& String::operator=(const String &rightString)
	{
		if (this != &rightString)
		{
			String(rightString).swap(*this);
		}
		return *this;
	}	

	//метод вывода строки

	void String::printString()
	{
		if(this->_string != nullptr)cout << this->_string << endl;
	}

	//перегрузка оператора >=

	const bool String::operator>=(const String &rightString)
	{
		if (this->length >= rightString.length)return true;
		else return false;
	}

	//перегрузка оператора <=

	const bool String::operator<=(const String &rightString)
	{
		if (this->length <= rightString.length)return true;
		else return false;
	}

	//перегрузка оператора >

	const bool String::operator>(const String &rightString)
	{
		if (this->length > rightString.length)return true;
		else return false;
	}

	//перегрузка оператора <

	const bool String::operator<(const String &rightString)
	{
		if (this->length < rightString.length)return true;
		else return false;
	}

	//перегрузка оператора ==

	const bool String::operator==(const String &rightString)
	{
		return this->comprationChar(rightString);
	}

	//перегрузка оператора !=

	const bool String::operator!=(const String &rightString)
	{
		return !(this->comprationChar(rightString));
	}

	//сравнение символов
	bool String::comprationChar(const String &secondString)
	{
		bool check = true ;
		if (this->length != secondString.length)
		{
			check = false;
		}
		else
		{
			for (int i = 0; i < this->length; i++)
			{
				if (this->_string[i] != secondString._string[i])check = false;
			}
		}

		return check;
	}

	//деструктор

	 String::~String()
	{
		if (this->_string != nullptr)
		{
			delete[] this->_string;
			this->_string = nullptr;
		}
	}

	//преобразование строки в число

	
	int String::convertToInt()
	{
		int number = NULL;
		for (int i = 0; i < this->length; i++)
		{
			if ((this->_string[i] >= '0') && (this->_string[i] <= '9'))
			{
				number = number * 10 + this->_string[i] - 0x30;
			}
			else return NULL;
		}
		return number;
	}

	double String::convertToDouble()
	{
		double number = NULL;
		bool flag = false;
		int counter = 0;
		for (int i = 0; i < this->length; i++)
		{
			if (
				(this->_string[i] == '.') ||
				(this->_string[i] == ',') ||
				((this->_string[i] >= '0') && (this->_string[i] <= '9'))
				)
			{
				if ((this->_string[i] == '.') || (this->_string[i] == ','))
				{
					if (!flag)
					{
						i++;
						flag = true;
					}
					else return NULL;
				}
				if ((this->_string[i] >= '0') && (this->_string[i] <= '9'))
				{
					if (flag) counter++;
					number = number * 10 + this->_string[i] - 0x30;
				}
			}
			else return NULL;
		}
		if (counter > 0)number = (double)(number) / (double)pow(10, counter);
		return number;
	}

	float String::convertToFloat()
	{
		float number = NULL;
		bool flag = false;
		int counter = 0;
		for (int i = 0; i < this->length; i++)
		{
			if (
				(this->_string[i] == '.') ||
				(this->_string[i] == ',') ||
				((this->_string[i] >= '0') && (this->_string[i] <= '9'))
				)
			{
				if ((this->_string[i] == '.') || (this->_string[i] == ','))
				{
					if (!flag)
					{
						i++;
						flag = true;
					}
					else return NULL;
				}
				if ((this->_string[i] >= '0') && (this->_string[i] <= '9'))
				{
					if (flag) counter++;
					number = number * 10 + this->_string[i] - 0x30;
				}
			}
			else return NULL;
		}
		if (counter > 0)number =(float) (number / pow(10, counter));
		return number;
	}

	//перегрузка ввода из потока

	/*istream& String::operator >> (istream &is, String &obj)
	{
		int ios_size = 0;
		is.sync();
		String temp;
		while (is.peek() != 10)
		{
			temp = temp + (char)is.get();
			ios_size++;
		}
		delete[] obj._string;
		obj.length = temp.length;
		obj._string = new char[obj.length];
		obj = temp;
		return is;
	}*/


