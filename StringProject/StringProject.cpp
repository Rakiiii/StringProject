// StringProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include "pch.h"
#include <iostream>
#include "String.h"

//TODO : отдебажить перегрузку конкатенаци
//TODO : отдебажить операцию присваивания для уже заполненых строк
using namespace std;
int main()
{
	String a = "Hello";
	String b = "world!";
	String c = a+b;
	cout << a.getLength() << endl;
	cout << b.getLength() << endl;
	cout << c.getLength() << endl;
	a.printString();
	b.printString();
	c.printString();
	String g;
	g = (a + b);
	g.printString();
	String d = a;
	d.printString();
	String h;
	h = b;
	h.printString();
	//a = b;
	//a.printString();
	//(h + c + b).printString();
	getchar();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
