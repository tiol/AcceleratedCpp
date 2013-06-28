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
	
	string shortest;
	string longest;



	for (int i = 0; i != size; i++) {
		if (i == 0){
		shortest = words[i];
		longest = words[i];
		} else {
			if ( words[i].size() <= shortest.size())
				shortest = words[i];
			if ( words[i].size() >= longest.size())
				longest = words[i];
		}
	}

	cout << "Longest word: " << longest << " with " << longest.size() << " characters" << endl;
	cout << "Shortest word: " << shortest << " with " << shortest.size() << " characters" << endl;


	system("PAUSE");
	return 0;
}