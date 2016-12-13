//********************************************************************
//Paul Somoso		CSCI 1380.05	Fall 2004		Assignment #4
//Due date: Wed. 10/15/2004
//
//This program will prompt the user to enter a whole number and then
//print the corresponding "bow" pattern to a file named output4b.txt
//
//********************************************************************

#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	int N;
	ofstream outFile;

	cout<<"Enter maximum number of * you want to print: ";
	cin>>N;

	outFile.open("output4b.txt");

	for (int i=N; i>=1; i--)
	{	for (int j=1; j<=i; j++)
			outFile<<"*";
		outFile<<endl;
	}

	for (i=1; i<=N; i++)
	{	for (int j=1; j<=i; j++)
			outFile<<"*";
		outFile<<endl;
	}

	outFile.close();

	system("PAUSE");
	return 0;
}