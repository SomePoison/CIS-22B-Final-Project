//Elijah Carlson, Brent Ko, 
//
// CIS 022B
#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

char isbn[20][14]; //14-element isbn character array.
char title[20][51]; //51-element title character array.
char author[20][31]; //31-element author character array.
char publisher[20][31]; //31-element publisher character array.
char date[20][11]; //11-element date character array.
int qty[20]; //quantity of integer type.
double wholesale[20]; //wholesale cost of double type.
double retail[20]; //retail of double type.
int size = 1;

void menu()
{
	cout << "\n****************************************" << endl;
	cout << "\t Serendipity Booksellers" << endl;
	cout << "******************************************" << endl;
	cout << "\t    MAIN MENU   " << endl;
	cout << "\t    ----------   " << endl;
	cout << "\t 1.Cashier Module" << endl;
	cout << "\t 2.Inventory Database Module" << endl;
	cout << "\t 3.Report Module" << endl;
	cout << "\t 4.Exit" << endl;
}

void cashier()
{
	cout << "\n****************************************" << endl;
	cout << "\t Serendipity Booksellers" << endl;
	cout << "******************************************" << endl;
	cout << "\n\t Cashier Module is selected" << endl;
	cout << "\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\n\n Thankyou for shopping at Serendipity!!! Have a nice day\n\n" << endl;
}

void setbookdetails()
{
	int size;

	cout << "Enter book info for book " << size << endl;
	cout << "Enter title of the book" << endl;
	cin >> title[size];
	cout << "Enter ISBN: " << endl;
	cin >> isbn[size];
	cout << "Enter the author name" << endl;
	cin >> author[size];
	cout << "Enter the publisher name" << endl;
	cin >> publisher[size];
	cout << "Enter the date in MM-DD-YYYY format" << endl;
	cin >> date[size];
	cout << "Enter the quantity on hand" << endl;
	cin >> qty[size];
	cout << "Enter the whole sale price of each book" << endl;
	cin >> wholesale[size];
	cout << "Enter the retail price of the book" << endl;
	cin >> retail[size];
	cout << endl;

}
