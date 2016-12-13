#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//declares constant int maxstudents and the two I/O files into char arrays
const int maxstudents = 15;
char ifile[] = "indata7.txt";
char ofile[] = "outdata7.txt";

//declares function prototypes
void GetData (char filename[], int testscore[], int& noOfStudents);
int GetMax (int testscore[], int noOfStudents);
void PrintData (char filename[], int testscore[], int noOfStudents, int MaxGrade);
int RelaGrade (double testscore, double MaxGrade);

int main()
{
	int testscore[maxstudents];  //declares array for test scores
	int noOfStudents=0;  //declares number of students and initialized to zero
	
	GetData (ifile, testscore, noOfStudents);  //function call to "GetData"

	int MaxGrade = GetMax (testscore, noOfStudents);  //function call to "GetMax" grade and store value in MaxGrade

	PrintData (ofile, testscore, noOfStudents, MaxGrade);  //function call to "PrintData"

	system("PAUSE");
	return 0;
}

//Function that gets data
void GetData (char filename[], int testscore[], int& noOfStudents)
{
	//opens and declares input file
	ifstream infile;
	infile.open(filename);

	//while loop ends when it reaches the end of the file or when noOFStudents is equal to maxstudents (15)
	while (!infile.eof() && noOfStudents < maxstudents)
	{
		infile>>testscore[noOfStudents];  //inputs test scores into array testscore[]
		noOfStudents++;  //increments noOfStudents, a reference parameter
	}
	
	infile.close();  //closes input file
}

//Function to "GetMax" grade
int GetMax (int testscore[], int noOfStudents)
{
	int maxi=0;
	for (int i=1; i<noOfStudents; i++)
		if (testscore[maxi]<testscore[i])
			maxi=i;

	return testscore[maxi];
}

//Function to "PrintData"
void PrintData (char filename[], int testscore[], int noOfStudents, int MaxGrade)
{
	//opens and declares output file
	ofstream outfile;
	outfile.open(filename);

	//outputs top headers
	outfile<<setw(10)<<"Student"<<setw(20)<<"Absolute"<<setw(10)<<"Relative"<<setw(10)<<"Graph  "<<endl;
	outfile<<setw(10)<<"Number"<<setw(20)<<"Grade"<<setw(10)<<"Grade"<<endl;
	outfile<<setw(10)<<"--------"<<setw(20)<<"---------"<<setw(10)<<"---------"<<setw(11)<<"----------"<<endl;
	
	//for loop ends when n = noOfStudents
	for (int n=0; n<noOfStudents; n++)
	{
		//outputs student number, absolute grade, and relative grade (function call for "RelaGrade")
		outfile<<setw(10)<<n+1<<setw(20)<<testscore[n]<<setw(10)<<RelaGrade (testscore[n], MaxGrade)<<" ";

		int stars;  //declare stars for number of stars

		//rounds relative grade to nearest 10 for stars output
		if ((RelaGrade (testscore[n], MaxGrade))-(RelaGrade (testscore[n], MaxGrade)/10)*10<=4)
			stars = RelaGrade (testscore[n], MaxGrade)/10;
		else
			stars = (RelaGrade (testscore[n], MaxGrade)/10)+1;

		//outputs number of stars in variable stars
		for (int s=0; s<stars; s++)
			outfile<<"*";

		outfile<<endl;  //closes output file

	}

	outfile.close();
}

//Function for getting relative grade
int RelaGrade (double testscore, double MaxGrade)
{
	double RelaGrade;

	RelaGrade = (testscore/MaxGrade)*100;  //calculates relative grade

	//rounds relative grade instead of truncating
	if (RelaGrade-int(RelaGrade)<=0.4)
		return RelaGrade;
	else
		return RelaGrade+1;
}