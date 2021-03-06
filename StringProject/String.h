﻿#pragma once
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

	  //меняет местами значения двух строк

	  void swap(String &b);

  public:
	  
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

	  ~String();

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

	  //оператор приведения типов к целому

	  operator int();

	  //оператор приведения типа к дабл

	  operator double();

	  //оператор приведения типов к флот

	  operator float();

	  //оператор примедения к типу константный указатель на символ

	  operator const char*();
	  
};


#endif 

