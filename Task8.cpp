#include <iostream>
using namespace std;
int main()
{
	int size;
	int square;
	cout <<"ENter size of the array: ";
	cin >>size;
	
	string array[size];
	for (int i=0;i<size;i++)
	{
		cout <<"Enter elements of the array: ";
		cin >>array[i];
		
	}
	square=size*2;
	
	int count=-1;
	int seconds;
	for (int i=0;i<size;i++)
    {
    	if (array[i]!=array[i+1])
    	{
    		count++;
    		
		}
		
	}
	seconds=square+count;
	cout <<"The estimated time will be : "<<seconds;


	
}
