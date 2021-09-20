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

int main()
{
	string data1;
	string data2;
	string data3;
	string data4;
	string inputFileName;
	string outputFileName;
	ifstream infile;
	ofstream outfile;

	infile.open("inMeanStd.dat");
	outfile.open("outMeanStd.dat");

	cout << "Input 4 integers:\n";
	cin >> data1 >> data2 >> data3 >> data4;

	infile.close();
	outfile.close();

	return 0;
}