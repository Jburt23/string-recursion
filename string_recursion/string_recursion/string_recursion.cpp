//Justin Burt
//CSC 2144----------Period CN1
//April 18th, 2018--Spring 2018

#include<iostream>
#include<string>

using namespace std;

void recursion(string);
int i = 1;

int main()
{
	string myString;

	cout << "Please enter in a sentence or word: ";
	getline(cin, myString);

	recursion(myString);
	cout << endl;

	cin.get();
	return 0;
}

void recursion(string myString2)
{

	if (i <= size(myString2))
	{
		cout << myString2[size(myString2) - i];
		i++;
		recursion(myString2);
	}
}