#include <iostream>
using namespace std;
int main()
{
	int number;
	cout <<"Enter number to make array: ";
	cin >>number;
	int array[number];
	for (int i=0; i<number;i++)
	{
		cout <<"ENter elements in the array: ";
		cin >>array[i];
		
	}
	bool result=false;
	for (int i=0;i<number;i++)
	{
		if (array[i]==7 || array[i]%10==7)
		{
			result=true;
			break;
		}
	}
	if (result!=0)
	{
		cout <<"Boom";
	}
	else 
	cout <<"There is no 7 in the array: ";
}

