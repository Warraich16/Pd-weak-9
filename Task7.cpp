#include <iostream>
using namespace std;
int main()
{
	string word1,word2;
	cout <<"Enter the first word: ";
	getline(cin,word1);
	
	cout <<"Enter the second word: ";
	getline(cin,word2);
	
	
	int count=0;
    for (int i=0;i<word1.length();i++)
	{

		for (int j=0;j<word2.length();j++)
		{
			

			if (word1[i]==word2[j])
			{
				
				count++;
				word2[j]='-';

				break;
			}
				
			
		}
	
		
	
	}
	cout <<"The number of common characters between two strings is "<<count;
	
}
