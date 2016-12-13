//********************************************************************
//Paul Somoso		CSCI 1380.05	Fall 2004		Assignment #6
//Due date: Wed. 11/04/2004
//
//********************************************************************



#include <iostream>
using namespace std;



//prototypes
void PrintHeading ();
void MaxMin3 (double x, double y, double z, double& smallest, double& biggest);
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

	switch (numofsets)  //switch for last three types of responses
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




//really simple function that computes the largest and smallest of three numbers
void MaxMin3 (double x, double y, double z, double& smallest, double& biggest)
{
//this is two functions, LowestValue and HighestValue, combined into one
//instead of simply returning the answer, this program will utilize the
//reference variables "smallest" and "biggest"

//this section determines the smallest number and assigns it to reference variable "smallest"
	if (x <= y)            //compare x with y
	{                      //since x is smaller than y...
		if (x <= z)        //compare x with z
			smallest= x;      //x is smallest so smallest= x
		else               //otherwise...
		{                  //since z is smaller...
			if (y <= z)    //compare y with z
				smallest= y;  //y is smallest so smallest= y
			else smallest= z; //z is smallest so smallest= z
		}
	}
	else                   //since y is smaller than x...
		if (y <= z)        //compare y with z
			smallest= y;      //y is smallest so smallest= y
		else smallest= z;     //z is smallest so smallest= z

//same as the previous section except all <= operators were changed into >=.
//also, it determines the biggest number and assigns it to reference variable "biggest"
	if (x >= y)
	{
		if (x >= z)
			biggest= x;
		else
		{
			if (y >= z)
				biggest= y;
			else biggest= z;
		}
	}
	else
		if (y >= z)
			biggest= y;
		else biggest= z;
}




//function for displaying results
void DisplayResults (double score1, double score2, double score3)
{
	double smallest, biggest;  //used as reference variables for MaxMin3
	MaxMin3(score1, score2, score3, smallest, biggest);  //function call for MaxMin3

	cout<<"For the set of scores: "<<score1<<", "<<score2<<", and "<<score3;
	cout<<endl<<endl;

	cout<<"The lowest score is: "<<smallest<<" and the highest is: "<<biggest;
	cout<<endl<<endl;

	cout<<"-----------------------------------------------------------------";
	cout<<endl<<endl;
}