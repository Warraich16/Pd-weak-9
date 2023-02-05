#include <iostream>
using namespace std;
int main()
{
	string name;
	
	string fruit[4]={"peach","apple","guava","watermelon"};
	int price[4]={60,70,40,30};
	cout <<"Enter the name of the fruit from the given array: ";
	cin >>name;
	
    for(int i=0;i<4;i++)
    {
    	if (name==fruit[i])
    	{
    		
    	
    		cout <<"Your total bill for the choosen fruit is : "<<price[i];
			
		}
		else 
		cout <<"You have entered the worng fruit name enter again:";
	}

}
