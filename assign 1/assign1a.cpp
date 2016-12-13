//*********************************************************************************************************
// Paul Somoso      CSCI 1380.05              Fall 2004                               Assignment #1A
//*********************************************************************************************************
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string f_n, l_n;
	int num_1, num_2, num_3, sum, eo_1, eo_2, eo_3;
	float average, product;
	cout << "This program will compute the sum, product, average, and evenness/oddness of three numbers" <<endl;
	cin >> f_n;
	cin >> l_n;
	cin >>num_1 >> num_2 >> num_3;
	sum = num_1 + num_2 + num_3;
	product = num_1 * num_2 * num_3;
	average = float(sum)/3.0;
	eo_1 = num_1 % 2;
	eo_2 = num_2 % 2;
	eo_3 = num_3 % 2;
	cout <<"The sum of the three numbers is: "<<sum<<endl;
	cout <<"The product of the three numbers is: "<<product<<endl;
	cout <<"The average of the three numbers is: "<<average<<endl;
	cout <<"Number one is "<<eo_1<<" (0=even, 1=odd)"<<endl;
	cout <<"Number two is "<<eo_2<<" (0=even, 1=odd)"<<endl;
	cout <<"Number three is "<<eo_3<<" (0=even, 1=odd)"<<endl;
}