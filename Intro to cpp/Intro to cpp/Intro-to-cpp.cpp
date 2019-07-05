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
	double i = 5.11;
	double j = 95;
	string name = "Shahroz Khan";

	string address = "Ishaq Munzil Bazar Bhabrian";

	string accuption = "Programmer";

	cout << "Punjab Group of Colleges" << endl;

	cout << "Name of the student is " << name << endl;
	cout << "Student's address is " << address << endl;
	cout << "Student's job is " << accuption << endl;

}

void VariablesAllTypes()
{
	double i = 5.11;
	double j = 95;
	string name = "Shahroz Khan";

	string address = "Ishaq Munzil Bazar Bhabrian";


	cout << "Punjab Group of Colleges" << endl;

	cout << "Name of the student is " << name << endl;
	cout << "Student's address is " << address << endl;
	cout << "Student's height is " << i << endl;
	cout << "Student's weight is " << j << endl;
	
}

void Tables()
{
	int i = 0;
	cout << "Enter a no to display it's table" << endl;
	cin >> i;
	cout << "Table of " << i << " is " << endl;
	cout << i << "x 1 =" << i * 1 << endl;
	cout << i << "x 2 =" << i * 2 << endl;
	cout << i << "x 3 =" << i * 3 << endl;
	cout << i << "x 4 =" << i * 4 << endl;
	cout << i << "x 5 =" << i * 5 << endl;
	cout << i << "x 6 =" << i * 6 << endl;
	cout << i << "x 7 =" << i * 7 << endl;
	cout << i << "x 8 =" << i * 8 << endl;
	cout << i << "x 9 =" << i * 9 << endl;
	cout << i << "x 10 =" << i * 10 << endl;


}

int main()
{
	//integerFun();
	//doubleFun();
	//Program();
	//VariablesAllTypes();
	Tables();
}


