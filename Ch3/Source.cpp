#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>

using std::cin;
using std::setprecision;
using std::cout;
using std::string;
using std::endl;
using std::streamsize;
using std::vector;

int main()
{
	cout << "Please enter your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Enter all your homework grades, "
		"followed by end-of-file";

	int count = 0;
	double sum = 0;

	double x;
	vector<double> homework;


	while (cin >> x) {
		homework.push_back(x);
	}

	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;


	system("PAUSE");
	return 0;
}