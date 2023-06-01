#include <iostream>
using namespace std;

string strToUpper1(const string& s1)
{

	string s2;
	s2 = " ";

	for (int i = 0; i < s1.length(); i++)

		s2 += toupper(s1[i]);

	return s2;

}

string& strToUpper2(const string& s1)
{

	static string s2;
	s2 = " ";

	for (int i = 0; i < s1.length(); i++)

		s2 += toupper(s1[i]);

	return s2;

}

int main(void) {
	
	string s = "Das ist ein String";

	cout << "Original: " << s << endl << "Lsg1: " << strToUpper1(s) << endl << endl;
	cout << "Original: " << s << endl << "Lsg2: " << strToUpper2(s);

	return 0;
}