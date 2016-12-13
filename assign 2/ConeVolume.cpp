/*******************************************************
* Program Assignment: 2   Program B
* Author Name: Paul Somoso
* Program Name: ConeVolume.cpp
* Date: 09/24/04
* Course: CSCI-1380   Section: 05
*
* Description:
* Cone volume calculator.
*
*********************************************************/


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main ()
{
	const double pi=3.1415926;  //declares pi
	float r, h, cv;  //r = radius, h = height, cv = cone volume
	string first_name, last_name;  //for goodbye message

	//program explanation
	cout<<endl<<"This program will calculate cone volume using radius and height."<<endl<<endl;
	
	//radius input
	cout<<"Enter the radius of the cone: ";
	cin>>r;
	cout<<endl;

	//height input
	cout<<"Enter the height of the cone: ";
	cin>>h;
	cout<<endl;

	//calcutions
	cv=(1.0/3)*pi*h*(pow(r,2));

	cout<<fixed<<setprecision(2); //sets output to 2 decimal places
	cout<<"The volume of the cone is: "<<cv<<endl<<endl; //cone volume output

	//Goodbye message
	cout<<endl<<endl<<"What is your first and last name?: ";
	cin>>first_name>>last_name;
	cout<<endl<<"Goodbye "<<first_name<<" "<<last_name<<". Hope you had fun."<<endl<<endl;

	return 0;
}