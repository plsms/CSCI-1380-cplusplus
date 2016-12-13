//********************************************************************
//Paul Somoso		CSCI 1380.05	Fall 2004		Assignment #3
//Due date: Wed. 10/8/2004
//
//This program will convert an uppercase single letter into it's
//corresponding digit on the telephone.
//
//********************************************************************

#include <iostream>

using namespace std;

int main()
{
	char letter;

	cout<<"Please enter a single letter in upper case, and I will tell"<<endl
		<<"you what the corresponding digit is on the telephone: ";
	cin>>letter;
	cout<<endl;

	if ('A'<=letter && letter<='Z') //checks if input is valid
	{
		if (letter=='Q') //letter Q is invalid
			cout<<"Sorry, but there is no digit on the telephone that "
			<<"corresponds to "<<letter<<"."<<endl;

		else if (letter=='Z') //letter Z is invalid
			cout<<"Sorry, but there is no digit on the telephone that "
			<<"corresponds to "<<letter<<"."<<endl;
		
		else if (letter<='C') //checks if letter is A B or C
			cout<<"The digit 2 corresponds to the letter "<<letter
			<<" on the telephone"<<endl;

		else if (letter<='F') //checks if letter is D E or F
			cout<<"The digit 3 corresponds to the letter "<<letter
			<<" on the telephone"<<endl;

		else if (letter<='I') //checks if letter is G H or I
			cout<<"The digit 4 corresponds to the letter "<<letter
			<<" on the telephone"<<endl;

		else if (letter<='L') //checks if letter is J K or L
			cout<<"The digit 5 corresponds to the letter "<<letter
			<<" on the telephone"<<endl;

		else if (letter<='O') //checks if letter is M N or O
			cout<<"The digit 6 corresponds to the letter "<<letter
			<<" on the telephone"<<endl;

		else if (letter<='S') //checks if letter is P R or S (Q is invalid)
			cout<<"The digit 7 corresponds to the letter "<<letter
			<<" on the telephone"<<endl;

		else if (letter<='V')  //checks if letter is T U or V
			cout<<"The digit 8 corresponds to the letter "<<letter
			<<" on the telephone"<<endl;

		else if (letter<='Y') //checks if letter is W X or Y
			cout<<"The digit 9 corresponds to the letter "<<letter
			<<" on the telephone"<<endl;
	}
	else cout<<"Sorry, but "<<letter<<" is an invalid input."<<endl;
	
	cout<<endl;

	return 0;
}