/*******************************************************
* Program Assignment: 2   Program A
* Author Name: Paul Somoso
* Program Name: MesgBox.cpp
* Date: 09/24/04
* Course: CSCI-1380   Section: 05
*
* Description:
* Print out a message box.
*
*********************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	cout<<setfill('*')<<setw(60)<<"*"<<endl;
	//************************************************************
	
	cout<<"*"<<setfill(' ')<<setw(59)<<"*"<<endl;
	//*                                                          *

	cout<<setw(31)<<"* CSCI-1380: Computer Science I"<<setw(29)<<"Fall, 2004 *"<<endl;
	//* CSCI-1380: Computer Science I                 Fall, 2004 *

	cout<<"*"<<setw(59)<<"*"<<endl;
	//*                                                          *

	cout<<"*"<<setw(33)<<"Paul Somoso"<<setw(26)<<"*"<<endl;
	//*                      Paul Somoso                         *

	cout<<"*"<<setw(59)<<"*"<<endl;
	//*                                                          *

	cout<<"*"<<setw(59)<<"*"<<endl;
	//*                                                          *

	cout<<"*"<<setw(40)<<"Assignment 2 : Problem A"<<setw(19)<<"*"<<endl;
	//*                Assignment 2 : Problem A                  *

	cout<<"*"<<setw(59)<<"*"<<endl;
	//*                                                          *

	cout<<setfill('*')<<setw(60)<<"*"<<endl;
	//************************************************************

	return 0;
}
