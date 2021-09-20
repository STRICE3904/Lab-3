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

int main()
{
	float a;
	float b;
	float c;
	float d;
	cout << "Input 4 integers:\n";
	cin >> a >> b >> c >> d;
	ifstream myfile;
	myfile.open("<path to file>");
	cin >> a;
	myfile.close();
}