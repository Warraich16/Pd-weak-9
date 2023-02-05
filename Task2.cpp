#include <iostream>
using namespace std;
int main()
{
	string name;
    cout <<"Enter name of the movie to check if it is present in the loop: ";
    cin >>name;
	string movies[5];
	for (int i=0;i<5; i++)
	{
		cout <<"Enter movie names: ";
		cin >>movies[i];
	
	}
	float discount;

	
		if (name==movies[1] || name==movies[3])
		{
			discount=0.05*500;
			cout <<discount;
		}
		else 
		{
			discount=0.1*500;
			cout <<discount;
		}
	
}

