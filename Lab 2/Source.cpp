/*
	Nikola Trajanovski
	Lab 2 - foramting and strings
	due: Sept 15
*/
#include <iostream>
#include<string>
using namespace std;
int main() {

	const string day1 = "Monday";
	const string firstTime = "9:00";
	const string firstClass = "Computer Science 101";

	const string secondTime = "10:00";
	const string secondClass = "Physics 201";

	const string thirdTime = "2:00";
	const string thirdClass = "Dance 153";

	//everything is done in one line to avoid problems with formating
	cout << day1 << "\t" << firstTime << "\t" << firstClass << "\n" << day1 << "\t" << secondTime << "\t" << secondClass << "\n" << day1 << "\t" << thirdTime << "\t" << thirdClass;
	cout << "\n\n\n";
	//problem #2
	const string stars = "    *\t    *\t    *\t    *\n";
	const string stars2 = "*\t*\t*\t*\n";
	
	cout << stars;
	cout << stars2;
	cout << stars;
	cout << stars2;
	cout << stars;
	cout << stars2;
	cout << stars;
	cout << stars2;
	
	
	return 0;
}