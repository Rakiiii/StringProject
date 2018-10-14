#pragma once
#ifndef STRINGPROJECT_STRING_H
#define STRINGPROJECT_STRING_H

#include <iostream>
#include <string.h>
#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
class String
{
  private:
	  char *_string;
	  int length;

	  //сравнение символов

	  bool comprationChar(const String &secondString);

  public:

	  //getter для значения строки

	  const char* getString();

	  //getter для длинны строки

	  int getLength();
	  
	  //конструктор

	  String();
        
	  //конструктор копированния

	  String(const String &secondString);

	  //конструктор новой строки

	  String(const char *newString);
	  
	  //перегрузка опретора конкатенации строк

	  String operator +(const String &rightString);

	  //перегрузка операции присваивания

	  String& operator= (const String &rightString);

	  //метод вывода строки 

	  void printString();

	  //перегрузка оператора >=

	  const bool operator>=(const String &rightString);

	  //перегрузка оператора <=

	  const bool operator<=(const String &rightString);

	  //перегрузка оператора ==

	  const bool operator==(const String &rightString);

	  //перегрузка оператора >

	  const bool operator>(const String &rightString);

	  //перегрузка оператора <

	  const bool operator<(const String &rightString);

	  //перегрузка оператора !=

	  const bool operator!=(const String &rightString);

	  //деструктор 

	  virtual ~String();
	  //меняет местами значения двух строк

	  void swap(String &b);

	  //преобразование строки в число

	  //перевод в число с плаваяюзей запятой
	  double convertToDouble();
	   
	  //перевод в целое число
	  int convertToInt();

	  //перевод в числос плавающей запятой
	  float convertToFloat();

	  //перегрузка ввода из потока

	  friend ostream& operator<< (ostream &os, String &obj);

	  //перегрузка операции сложения с символом

	  String operator+(const char *rightChar);

	  operator int();
	  operator double();
	  operator float();
	  operator const char*();
	  
};


#endif 

