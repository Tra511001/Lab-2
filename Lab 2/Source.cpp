/*
	Nikola Trajanovski
	Lab 2

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


	cout << day1 << "\t" << firstTime << "\t" << firstClass << "\n" << day1 << "\t" << secondTime << "\t" << secondClass << "\n" << day1 << "\t" << thirdTime << "\t" << thirdClass;
	return 0;
}