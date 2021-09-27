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
void mathStandardFile(); //Function for the Standard deviation
void mathMean(); // Function for the Mean
void InputStDv();

//These are the variables being ussed for all functions that are inputed by the file
	//These are the strings for the files so the data can be inputed and exported
string inputFileName = "C:/Users/quinn/source"; //File location
string outputFileName = "C:/Users/quinn/source/Lab-3"; //File location
ifstream infile; //File identifier
ofstream outfile; //File identifier
int data1; //global variable for mean and standard deviation
int data2;//global variable for mean and standard deviation
int data3;//global variable for mean and standard deviation
int data4;//global variable for mean and standard deviation

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

	infile.close();//closing the infile 

	mathMean();//calling the mean function
	mathStandardFile();//caling the standard deviation fucntion

	outfile.close();//closing the outfile after the values were inputed

	InputStDv();//opening the function that allows usser input 
	


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
	cout << "The mean of the inputed values is: " << Mean << endl; //output of the mean to the screen
	outfile << "Mean is: " << Mean << endl; //output of the mean to the screen

}
void mathStandardFile()
{
	/*This is the math for the standard deviation. Since they both require mean,
	* mean has been copied down for the standard deviation.
	*/
	float Add;//variable for the addition
	Add = float(data1) + float(data2) + float(data3) + float(data4);//addition of variables
	float Mean;//variable for the Mean
	Mean = double(Add / 4);//calulation of the mean
	
	//Each part of the sum for the vareince is calculated seperately to minimize errors. 
	float VD1 = float(data1) - float(Mean);//calculation for the first part of the vareince equation
	float VD2 = float(data2) - float(Mean);//calculation for the first part of the vareince equation
	float VD3 = float(data3) - float(Mean);//calculation for the first part of the vareince equation
	float VD4 = float(data4) - float(Mean);//calculation for the first part of the vareince equation

	//The population vareince is calculated here
	float Varience = float(pow(VD1, 2) + pow(VD2, 2) + pow(VD3, 2) + pow(VD4, 2)) / float(4);

	//The Standard deviation is calculated from the vareince here
	float StDv = float(sqrt(Varience));//calculation for the standard deviation
	cout << "Standard Deviation of the inputed values = " << StDv << endl;//output of the standard deviation 
	outfile << "Stadnard Deviation is: " << StDv << endl;//output to the file of the standard deviation
}
void InputStDv()
{
	float x;
	float y;
	float z;
	float a; 

	cout << "Input 4 numbers to get the mean and the standard deviation: " << endl;
	cin >> x >> y >> z >> a;
	float Add;
	Add = float(x) + float(y) + float(z) + float(a);
	float Mean;
	Mean = float(Add / 4);

	//Each part of the sum for the vareince is calculated seperately to minimize errors. 
	float VD1 = float(x) - float(Mean);
	float VD2 = float(y) - float(Mean);
	float VD3 = float(z) - float(Mean);
	float VD4 = float(a) - float(Mean);

	//The population vareince is calculated here
	float Varience = float(pow(VD1, 2) + pow(VD2, 2) + pow(VD3, 2) + pow(VD4, 2)) / float(4);

	//The Standard deviation is calculated from the vareince here
	float StDv = float(sqrt(Varience));
	cout << "Mean is: " << Mean << "and standard deviation is: " << StDv << endl;
}