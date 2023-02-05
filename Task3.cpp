#include <iostream>
using namespace std;
int main()
{
	string word;
	cout <<"Enter a word to check its length: ";
	getline(cin,word);
	cout <<"The length of the string is: "<<word.length()<<endl;
	if (word.length()%2==0)
	{
		cout <<"True"<<endl;
	}
	else 
	cout <<"False";
}
