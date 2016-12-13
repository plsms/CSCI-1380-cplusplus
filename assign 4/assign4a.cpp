//********************************************************************
//Paul Somoso		CSCI 1380.05	Fall 2004		Assignment #4
//Due date: Wed. 10/15/2004
//
//This program will read from the file input4a.txt values that can be
//positive, negative, or zero.  As the program reads the values, it
//will send the values read to the output file output4a.txt and
//accumulate seperately even values and odd values; zero is ignored.
//Finally, it will print at the bottom of the list the totals for each
//column and an overall total on a third column.
//
//********************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main ()
{
	ifstream infile;
	ofstream outfile;
	
	int num;
	int evensum=0;
	int oddsum=0;

	infile.open("input4a.txt");
	outfile.open("output4a.txt");

	cout<<"This program will read from the file input4a.txt values that can be \n"
		<<"positive, negative, or zero.  As the program reads the values, it \n"
		<<"will send the values read to the output file output4a.txt and \n"
		<<"accumulate seperately even values and odd values; zero is ignored.  \n"
		<<"Finally, it will print at the bottom of the list the totals for each \n"
		<<"column and an overall total on a third column."<<endl<<endl;
	cout<<"Processing data"<<endl;


	outfile<<setw(8)<<"Even"<<setw(10)<<"Odd"<<setw(10)<<"Total"<<endl<<endl;

	while (!infile.eof())
	{
		infile>>num;

		if (num != 0)
		switch (num % 2)
		{
		case 0: outfile<<setw(8)<<num<<endl;
			evensum=evensum+num;
			break;
		case 1: outfile<<setw(18)<<num<<endl;
			oddsum=oddsum+num;
			break;
		case -1: outfile<<setw(18)<<num<<endl;
			oddsum=oddsum+num;
			break;
		}
	}

	outfile<<"--------  --------  --------"<<endl;
	outfile<<setw(8)<<evensum<<setw(10)<<oddsum<<setw(10)<<evensum+oddsum<<endl;

	infile.close();
	outfile.close();

	system("PAUSE");
	return 0;
}
