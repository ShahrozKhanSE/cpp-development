// Intro to cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <string>
#include <conio.h>

/*Write a program to display variable of type integer.
perform following arithmatic tasks.
Add, Subtract, Divide, Multiplyand Remainder.*/
void integerFun()
{
	int i = 0;
	int j = 0;

	cout << "Enter values to Add, Subtract, Divide, Multiply and Remainder" << endl;
	
	cout << "Enter the first value" << endl;
	
	cin >> i;
	
	cout << "Enter the second value" << endl;
	cin >> j;
	int answer = i + j;

	cout << i << "+" << j << "=" << answer << endl;

	answer = i - j;

	cout << i << "-" << j << "=" << answer << endl;

	answer = i / j;

	cout << i << "/" << j << "=" << answer << endl;

	answer = i * j;

	cout << i << "x" << j << "=" << answer << endl;

	answer = i % j;

	cout << i << "%" << j << "=" << answer << endl;

}

void doubleFun()
{
	double ii = 0;
	double jj = 0;
	cout << "Enter values to Add, Subtract, Divide, Multiply and Remainder" << endl;
	cout << "Enter the first value" << endl;
	cin >> ii;
	cout << "Enter the second value" << endl;
	cin >> jj;
	double answer = ii + jj;
	cout << ii << "+" << jj << "=" << answer << endl;
	answer = ii - jj;
	cout << ii << "-" << jj << "=" << answer << endl;
	answer = ii / jj;
	cout << ii << "/" << jj << "=" << answer << endl;
	answer = ii * jj;
	cout << ii << "x" << jj << "=" << answer << endl;

}

void floatFun()
{
	float ii = 0;
	float jj = 0;
	cout << "Enter values to Add, Subtract, Divide, Multiply and Remainder" << endl;
	cout << "Enter the first value" << endl;
	cin >> ii;
	cout << "Enter the second value" << endl;
	cin >> jj;
	float answer = ii + jj;
	cout << ii << "+" << jj << "=" << answer << endl;
	answer = ii - jj;
	cout << ii << "-" << jj << "=" << answer << endl;
	answer = ii / jj;
	cout << ii << "/" << jj << "=" << answer << endl;
	answer = ii * jj;
	cout << ii << "x" << jj << "=" << answer << endl;


}
void Program()
{

}

int main()
{
	integerFun();
	//doubleFun();
}


