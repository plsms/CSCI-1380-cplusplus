//Paul Somoso     CSCI 1380.05                    Fall 2004                        Assignment # 1B
//Due date: Friday, 9/10/2004
//
//This assignment will compute their sum, product, and average of three integers, and
//determine which numbers are even or odd.  The input will be the three numbers and the
//user's first and last names.  The output will be the results of the computations.
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string first_name;                       //to store users first name
	string last_name;                        //to store users last name
	int num_1, num_2, num_3;                 //stores the three numbers read
	int sum;
	int eo_1, eo_2, eo_3;
	float average;
	float product;
	//reads input data
	cout<<"This program will compute the sum, product, average, and evenness/oddness of three numbers" <<endl;
	cout<<"Please enter your first name: ";
	cin>>first_name;
	cout<<"Please enter your last name: ";
	cin>>last_name;
	cin>>num_1>>num_2>>num_3;
	//calculates input data
	sum=num_1+num_2+num_3;
	product=num_1*num_2*num_3;
	average=float (sum)/3.0;
	eo_1=num_1%2;
	eo_2=num_2%2;
	eo_3=num_3%2;
	//results of calculations
	cout<<"The sum of "<<num_1<<", "<<num_2<<", and "<<num_3<<" is: "<<sum<<endl<<endl;
	cout<<"The product of "<<num_1<<", "<<num_2<<", and "<<num_3<<" is: "<<product<<endl<<endl;
	cout<<"The average of "<<num_1<<", "<<num_2<<", and "<<num_3<<" is: "<<average<<endl<<endl;
	cout<<"Number one is "<<eo_1<<" (0=even, 1=odd)"<<endl<<endl;
	cout<<"Number two is "<<eo_2<<" (0=even, 1=odd)"<<endl<<endl;
	cout<<"Number three is "<<eo_3<<" (0=even, 1=odd)"<<endl<<endl;
	cout<<"Goodbye "<<first_name<<" "<<last_name<<". Hope you had fun. ";
}
