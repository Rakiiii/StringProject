#include "String.h"
#include "pch.h"
using namespace std;



//TODO : написать деструктор
//TODO : отдебагать перегрузку оператора присваивания
//TODO : написать преобразование в числа разных видов



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
		this->_string = new char[1];
		*this->_string = 0;
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

		this->_string[this->length + 1] = '\0';
	}

	//копированния строки

	//конструктор новой строки
	String::String(const char *newString)
	{
		this->length = strlen(newString);
		this->_string = new char[this->length + 1];
		strcpy(this->_string, newString);
		this->_string[this->length + 1] = '\0';
	}

	//перегрузка оператора конкатенации
	String String::operator+(const String &rightString)
	{
		//создаем результируюшую строку
		String newString;
		//освобождаем память
		delete newString._string;
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

	//перегрузка оператора присваивания

	String& String::operator= (const String &rightString)
	{
		if (this != &rightString)
		{
			delete this->_string;
			this->length = rightString.length;
			this->_string = new char[this->length + 1];
			strcpy(this->_string, rightString._string);
			//this->_string[this->length + 1] = '\0';
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
	//TODO : заставить деструктор очищать память

	String::~String()
	{

	}
