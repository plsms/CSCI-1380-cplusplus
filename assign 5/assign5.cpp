//********************************************************************
//Paul Somoso		CSCI 1380.05	Fall 2004		Assignment #5
//Due date: Wed. 10/29/2004
//
//********************************************************************



#include <iostream>
using namespace std;



//prototypes
void PrintHeading ();
double LowestValue ();
double HighestValue ();
void DisplayResults (double score1, double score2, double score3);



int main ()
{
	int numofsets;  //declares numofsets, or the number of set of scores
	double score1, score2, score3;  //declares  variables for holding 3 scores

	PrintHeading ();  //function call for PrintHeading
	
		cout<<"Please enter the number of set of scores that you want to process: ";
	cin>>numofsets;  //determines numofsets for the for loop
	cout<<endl;

	for (int n=0; n<numofsets; n++)  //loops numofsets times
	{
		cout<<"Please enter 3 scores separated by spaces: ";
		cin>>score1>>score2>>score3;
		cout<<endl;

		DisplayResults (score1, score2, score3);  //function call for DisplayResults
	}

	switch (numofsets)  //switch for three types of responses
	{
	case 0: cout<<"No set was processed";
		break;
	case 1: cout<<"Only 1 set was processed";
		break;
	default: cout<<numofsets<<" sets were processed";
		break;
	}

	cout<<endl<<endl<<endl;

	system("PAUSE");
	return 0;
}





//just prints the heading
void PrintHeading ()
{
	cout<<"This program accepts three scores and returns the lowest and the highest ones"<<endl;
	cout<<"------------------------------------------------------------------------------";
	cout<<endl<<endl;
}




//really simple function that computes the smallest of three numbers
double LowestValue (double x, double y, double z)
{
	if (x <= y)            //compare x with y
	{                      //since x is smaller than y...
		if (x <= z)        //compare x with z
			return x;      //x is smallest so return x
		else               //otherwise...
		{                  //since z is smaller...
			if (y <= z)    //compare y with z
				return y;  //y is smallest so return y
			else return z; //z is smallest so return z
		}
	}
	else                   //since y is smaller than x...
		if (y <= z)        //compare y with z
			return y;      //y is smallest so return y
		else return z;     //z is smallest so return z
}




//really simple function that computes the largest of three numbers
//exactly like LowestValue function but all <= were changed into >=
double HighestValue (double x, double y, double z)
{
	if (x >= y)
	{
		if (x >= z)
			return x;
		else
		{
			if (y >= z)
				return y;
			else return z;
		}
	}
	else
		if (y >= z)
			return y;
		else return z;
}




//function for displaying results
void DisplayResults (double score1, double score2, double score3)
{
	cout<<"For the set of scores: "<<score1<<", "<<score2<<", and "<<score3;
	cout<<endl<<endl;

	cout<<"The lowest score is: "<<LowestValue(score1, score2, score3)  //function call for LowestValue
		<<" and the highest is: "<<HighestValue(score1, score2, score3);  //function call for HighestValue
	cout<<endl<<endl;

	cout<<"-----------------------------------------------------------------";
	cout<<endl<<endl;
}