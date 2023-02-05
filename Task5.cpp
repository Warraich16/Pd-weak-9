#include <iostream>
using namespace std;
int main()
{
	string array[4];
	for(int i=0; i<4;i++)
	{
		cout <<"ENter elements of the array: ";
		cin >>array[i];
	}
	int count=0;
    for (int i=0;i<4;i++)
    {
    	if (array[i]==array[0])
    	{
    		count++;
		}
    	
	}
	if (count==4)
	{
		cout <<"True";
	}
	else 
	cout <<"False";
}
