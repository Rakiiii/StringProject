#include "String.h"
#include <string.h>
using namespace std;

//TODO : написать конструктор копированния
//TODO : написать конструктор чистой строки
//TODO : написать конструктор новой строки
//TODO : написать getter для длины и строки
//TODO : написать перегрузку конкатенации строки
//TODO : написать перегрузку операции сравнения
//TODO : написать преобразование в числа разных видов
//TODO : написать форматный вывод строки


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
		this->length;
	}

	//конструктор копированния

	String::String(const String& secondString)
	{
		//копируемм длинну строки

		this->length = secondString.length;

		//выделяем память в куче для нашей строки + закрывающий ноль

		this->_string = new char[length + 1];

		//копируем все символы

		this->copyChar(secondString._string);

	}

	//копированния строки

	void String::copyChar(const char *copyedString)
	{
		//в цикле копируем все символы 
		for (int i = 0; i < this->length - 1 ; i++)
		{
			this->_string[i] = copyedString[i];
		}
		//добавляем закрывающий ноль
		this->_string[this->length] = '\0';
	}

	//конструктор новой строки
	String::String(const char *newString)
	{
		this->length = strlen(newString);
		this->_string = new char[this->length + 1];
		this->copyChar(newString);
	}


