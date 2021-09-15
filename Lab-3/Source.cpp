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

using namespace std;

float calculatemean(float data[]);
float calculateSD(float data[]);
void file();
char a;
int main()
{
	cout << "Input 4 integers:\n";
	cin >> a;
	ofstream myfile;
	myfile.open("inMeanStd.dat");
	myfile << "FUUUUUCK\n";
	myfile.close();
	float calculateSD(float data[]);

}

//Standard deviation calculator.
float calculateSD(float data[]) 
{
	float sum = 0.0, mean, standardDeviation = 0.0;
	int i;

	for (i = 0; i < 4; ++i) {
		sum += data[i];
	}

	mean = sum / 4;

	for (i = 0; i < 10; ++i) {
		standardDeviation += pow(data[i] - mean, 2);
	}

	return sqrt(standardDeviation / 4);
}

//File opener and input outputer. 
void infile()
{
	cout << "Input 4 integers:\n";
	cin >> a;
	ofstream myfile;
	myfile.open("inMeanStd.dat");
	myfile << a;
	myfile.close();
}