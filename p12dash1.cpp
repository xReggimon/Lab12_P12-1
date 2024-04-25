#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int count_letters(string str);
//lower case and upper case

int count_words(string str);

int main() {

	string line1 = "Moo.";
	string line2 = "Today is October     26.";
	string line3 = "I don't give a Holstein for programmers that can only spell a variable one way. (Dr. Stephany)";
	cout << "Amount of letters for line 1: " << count_letters(line1) << endl;
	cout << "Amount of letters for line 2: " << count_letters(line2) << endl;
	cout << "Amount of letters for line 3: " << count_letters(line3) << endl;

	cout << "Amount of words in line 1: " << count_words(line1) << endl;
	cout << "Amount of words in line 2: " << count_words(line2) << endl;
	cout << "Amount of words in line 3: " << count_words(line3) << endl;

	return 0;
}

int count_letters(string str) {
	int count = 0;
	bool prev_letter = false;

	for (char ch : str) {
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			count++;
			prev_letter = true;
		}
		else {
			prev_letter = false;
		}
	}

	return count;
}

int count_words(string str) {
	int count = 0;
	istringstream iss(str);
	string word;

	while (iss >> word) {
		count++;
	}
	return count;
}