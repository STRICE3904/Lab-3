/*Samuel Trice
* C++ 2021
* September 29th
* Lab 3
* Computation of mean and standard deviation of a poputlation set by file "inMeanStd.dat" and
* with an outpute called "outMeanStd.dat
*/
#include <iostream> //Main word database
#include <fstream> //Database for the files
#include <cmath> // Database for the math
#include <string> //Database for the strings

using namespace std; //Alows for more simple typing
void mathStandard(); //Function for the Standard deviation
void mathMean(); // Function for the Mean

//These are the variables being ussed for all functions that are inputed by the file
	//These are the strings for the files so the data can be inputed and exported
string inputFileName = "C:/Users/quinn/source"; //File location
string outputFileName = "C:/Users/quinn/source/Lab-3"; //File location
ifstream infile; //File identifier
ofstream outfile; //File identifier
int data1; 
int data2;
int data3;
int data4;

int main()
{
	//This is the start of the file prosses
	infile.open("inMeanStd.dat"); 
	outfile.open("outMeanStd.dat");

	//file being transported into variables then exported to the screan to check it works. 
	infile >> data1 >> data2 >> data3 >> data4;
	cout << "Data from inMeanStd.dat = ";
	cout << data1 << " " << data2 << " " << data3 << " " << data4 << endl;

	//Start of ussing the variables to find the standard deviation of the 4 integers. 

	//Returning the new values back into the file outMeanStd.dat

	infile.close();

	mathMean();
	mathStandard();

	outfile.close();


	


	return 0;
}
void mathMean()
{
	
	//The values are added together for the first step of calculating the mean
	float Add;
	Add = float(data1) + float(data2) + float(data3) + float(data4);

	//The mean is calculated 
	float Mean;
	Mean = double(Add / 4);

	//The mean is then outputed to teh screan
	cout << "The mean of the inputed values is: " << Mean << endl;
	outfile << Mean << endl;

}
void mathStandard()
{
	/*This is the math for the standard deviation. Since they both require mean,
	* mean has been copied down for the standard deviation.
	*/
	float Add;
	Add = float(data1) + float(data2) + float(data3) + float(data4);
	float Mean;
	Mean = double(Add / 4);
	
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
	outfile << StDv << endl;
	
}