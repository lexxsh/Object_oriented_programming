#include<iostream>
using namespace std;
#include<string>
int main() {
	string s1("happy");
	string s2(" birthday");
	string s3;

	cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2
		<< "\"; s3 is \"" << s3 << '\"'
		<< "\n\nthe results of comparing s2 ans s1:"
		<< "\ns2 == s1 yields " << (s2 == s1 ? "true" : "false")
		<< "\ns2 != s1 yields " << (s2 != s1 ? "true" : "false")
		<< "\ns2 > s1 yields " << (s2 > s1 ? "true" : "false")
		<< "\ns2 < s1 yields " << (s2 < s1 ? "true" : "false")
		<< "\ns2 >= s1 yields " << (s2 >= s1 ? "true" : "false")
		<< "\ns2 <= s1 yields " << (s2 <= s1 ? "true" : "false");

		cout << "\n\nTesting s3.empty():" << endl;
		if (s3.empty())
		{
			cout << "s3 is empth; assigning s1 to s3;" << endl;
			s3 = s1;
			cout << "s3 is \"" << s3 << "\"";
		}
		cout << "\n\ns1 += s2 yields s1 = ";
		s1 += s2;
		cout << s1;

		cout << "\n\ns1 +=\" to you\" yields" << endl;
		s1 += " to you";
		cout << "s1 = " << s1 << "\n\n";;

		cout << "The substring of s1 starting at location 0 for\n"
			<< "14 characters, s1.substr(0, 14), is:\n"
			<< s1.substr(0.14) << "\n\n";
		cout << "the substring of s1 starting at \n"
			<< "loating 15, s1.substr(15), is :\n"
			<< s1.substr(15) << endl;
		string* s4Ptr = new string(s1);
		cout << "\n*spter = " << *s4Ptr << "\n\n";

		cout << "assiging *s4ptr to *s4ptr" << endl;
		*s4Ptr = *s4Ptr;
		cout << "s4ptr = " << *s4Ptr << endl;
		delete s4Ptr;

		s1[0] = 'H';
		s1[6] = 'B';
		cout << "\ns1 after s1[0] = 'H' and s1[6] = 'B' is:" << s1 << "\n\n";

		cout << "Attempt to assign 'd' to s1.at(30) yields:" << endl;
		return 0;

}