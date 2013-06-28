#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>


using std::cin;
using std::setprecision;
using std::cout;
using std::string;
using std::endl;
using std::streamsize;
using std::vector;
using std::sort;


int main()
{

	cout << "Enter some words, "
		"followed by end-of-file: ";

	string x;
	vector<string> words;


	while (cin >> x) {
		words.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = words.size();

	if (size == 0) {
		cout << endl << "You must enter some words. "
			"Please try again." << endl;
		return 1;
	}

	sort(words.begin(), words.end());
	
	string xd;
	int y = 1;

	for (int i = 0; i != size; i++) {
		if (words[i] != xd){
		xd = words[i];
		for(int x = i + 1; x!= size; x++){
			if (words[x] ==  xd)
				y++;
		}
		cout << xd << " appears " << y << " times!" << endl;
		y = 1;
		}
	}

	cout << "hehe" ;


	system("PAUSE");
	return 0;
}