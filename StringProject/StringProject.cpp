// StringProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include "pch.h"
#include <iostream>
#include "String.h"
#include <conio.h>

//TODO : добавить операцию приведения типов в меню
//TODO : написать форматный вывод в поток
using namespace std;
int main()
{
	double resd = 0.0;
	String a, b, c;
	int res = 0;
	char *read = new char[1024];
	
	while (true)
	{
		system("cls");
		bool loop = true;
		cout << "1.Add string" << endl << "2.Plus strings" << endl << "3.Equals strings" << endl
			<<"4.Compare strings" << endl<<"5.Output all strings"
			<<endl<<"6.From string to int"<<endl<<"7.From string to double"<<endl << "0.Exit" << endl;
		char choice1, choice2, choice3 , choice4, choice5;
		char choice = _getch();
		switch (choice)
		{
		case '1':
			while (loop)
			{
				system("cls");
				cout << "1.add first string" << endl << "2.Add second string" << endl << "3.Add third string" << endl;
				fflush(stdin);
				choice1 = _getch();
				switch (choice1)
				{
				case '1':
					cin >> read;
					a = read;
					loop = false;
					break;
				case'2':
					cin >> read;
					b = read;
					loop = false;
					break;
				case'3':
					cin >> read;
					c = read;
					loop = false;
					break;
				default:break;
				}
			}
			break;
		case'2':
			loop = true;
			while (loop)
			{
				system("cls");
				cout << "1.1+1" << endl << "2.1+2" << endl << "3.1+3" << endl << "4.2+2" << endl << "5.2+3" << endl << "6.3+3" << endl;
				choice2 = _getch();
				fflush(stdin);
				switch (choice2)
				{
				case'1':
					(a + a).printString();
					loop = false;
					system("pause");
					break;
				case '2':
					(a + b).printString();
					loop = false;
					system("pause");
					break;
				case'3':
					(a + c).printString();
					loop = false;
					system("pause");
					break;
				case'4':
					(b + b).printString();
					loop = false;
					system("pause");
					break;
				case'5':
					(b + c).printString();
					loop = false;
					system("pause");
					break;
				case'6':
					(c + c).printString();
					loop = false;
					system("pause");
					break;
				default:break;
				}
			}
			break;
		case'3':
			loop = true;
			while (loop)
			{
				system("cls");
				cout << "1.1=2" << endl << "2.1=3" << endl << "3.2=3" << endl;
				choice3 = _getch();
				switch (choice3)
				{
				case'1':
					a = b;
					loop = false;
					system("pause");
					break;
				case'2':
					a = c;
					loop = false;
					system("pause");
					break;
				case'3':
					b = c;
					loop = false;
					system("pause");
					break;
				default:break;
				}
			}
			break;
		case'4':
			system("cls");
			if (a == b)cout << "firstString = secondString" << endl;
			if (a <= b)cout << "firstString <= secondString" << endl;
			if (a < b)cout << "firstString < secondString" << endl;
			if (a >= b)cout << "firstString >= secondString" << endl;
			if (a > b)cout << "firstString > secondString" << endl;
			if (c == b)cout << "thirdString = secondString" << endl;
			if (c <= b)cout << "thirdString <= secondString" << endl;
			if (c < b)cout << "thirdString < secondString" << endl;
			if (c >= b)cout << "thirdString >= secondString" << endl;
			if (c > b)cout << "thirdString > secondString" << endl;
			if (c == a)cout << "thirdString = firstString" << endl;
			if (c <= a)cout << "thirdString <= firstString" << endl;
			if (c < a)cout << "thirdString < firstString" << endl;
			if (c >= a)cout << "thirdString >= firstString" << endl;
			if (c > a)cout << "thirdString > firstString" << endl;
			system("pause");
			break;
		case'5':
			system("cls");
			a.printString();
			b.printString();
			c.printString();
			system("pause");
			break;
		case'6':
			loop = true;
			while (loop)
			{
				system("cls");
				cout << "1.1 to number" << endl << "2.2 to number" <<endl<< "3.3 to number" << endl;
				choice5 = _getch();
				switch (choice5)
				{
				case'1':
					res = a.convertToInt();
					printf("%d", res);
					loop = false;
					system("pause");
					break;
				case'2':
					res = a.convertToInt();
					printf("%d", res);
					loop = false;
					system("pause");
					break;
				case'3':
					res = a.convertToInt();
					printf("%d", res);
					loop = false;
					system("pause");
					break;
				default:break;
				}
			}
			system("pause");
			break;
		case'7':
			loop = true;
			while (loop)
			{
				system("cls");
				cout << "1.1 to number" << endl << "2.2 to number" << endl << "3.3 to number" << endl;
				choice5 = _getch();
				switch (choice5)
				{
				case'1':
					resd = a.convertToDouble();
					cout << resd << endl;
					loop = false;
					system("pause");
					break;
				case'2':
					resd = a.convertToDouble();
					cout << resd << endl;
					loop = false;
					system("pause");
					break;
				case'3':
					resd = a.convertToDouble();
					cout << resd << endl;
					loop = false;
					system("pause");
					break;
				default:break;
				}
			}
			system("pause");
			break;
		case'0':return 0;
		default :break;
		}
		
	}
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
