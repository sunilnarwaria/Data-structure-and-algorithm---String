// C++ program to Iterate through
// a String word by word

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string str = "GeeksforGeeks, is a computer "
				"science portal for Geeks";

	istringstream iss(str);

	while (iss){

		string subs;
		iss >> subs;
     cout << subs << endl;

	}

	return 0;
}
