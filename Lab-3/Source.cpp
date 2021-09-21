/*Samuel Trice
* C++ 2021
* September 15th
* Lab 3
* Computation of mean and standard deviation of a poputlation set by file "inMeanStd.dat" and
* with an outpute called "outMeanStd.dat
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;
void mathStandard();
void mathMean();

//These are the variables being ussed for all functions that are inputed by the user
int data1;
int data2;
int data3;
int data4;

int main()
{

	//These are the strings for the files so the data can be inputed and exported
	string inputFileName = "C:/Users/quinn/source";
	string outputFileName = "C:/Users/quinn/source/Lab-3";
	ifstream infile;
	ofstream outfile;
	//This is the start of the file prosses
	infile.open("inMeanStd.dat");
	outfile.open("outMeanStd.dat");
	//getline(inFile, data);
	infile >> data1 >> data2 >> data3 >> data4;
	cout << data1 << " " << data2 << " " << data3 << " " << data4;
	infile.close();
	outfile.close();

	return 0;
}
void mathMean()
{
	float Add;
	Add = float(data1) + float(data2) + float(data3) + float(data4);
	//The values are added together for the first step of calculating the mean
	float Mean;
	Mean = double(Add / 4);
	//The mean is calculated 
	cout << "The mean of the inputed values is: " << Mean << endl;
}
void mathStandard()
{
	/*This is the math for the standard deviation. Since they both require mean,
	* mean has been copied down for the standard deviation.
	*/
	float Add;
	Add = float(data1) + float(data2) + float(data3) + float(data4);
	//The values are added together for the first step of calculating the mean
	float Mean;
	Mean = double(Add / 4);
	//The mean is calculated 
	//Each part of the sum for the vareince is calculated seperately to minimize errors. 
	float VD1 = float(data1) - float(Mean);
	float VD2 = float(data2) - float(Mean);
	float VD3 = float(data3) - float(Mean);
	float VD4 = float(data4) - float(Mean);
	//The population vareince is calculated here
	float Varience = float(pow(VD1, 2) + pow(VD2, 2) + pow(VD3, 2) + pow(VD4, 2)) / float(4);
	//The Standard deviation is calculated from the vareince here
	float StDv = float(sqrt(Varience));
	cout << "Standard Deviation of the inputed values = " << StDv << endl;
}