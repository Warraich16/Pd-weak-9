#include <iostream>
using namespace std;

void even_odd_transform(int arr[],int size);


int main() 
{
  int number, transform;
  cout << "Enter the size of the array: ";
  cin >> number;
  int arr[number];

  cout << "Enter " << number << " elements of the array: ";
  for (int i = 0; i < number; i++)
   {
   	cout <<"Enter elements of the array: ";
    cin >> arr[i];
   }
  

  cout << "Enter the number of times to perform the even-odd transform: ";
  cin >> transform;

  for (int i = 0; i < transform; i++)
   {
   	
    even_odd_transform(arr, number);
   }
  

  cout << "The transformed array after " << transform << " even-odd transformations is: ";
  for (int i = 0; i < number; i++)
   {
    cout << arr[i] << " ";
   }
  cout << endl;

  return 0;
}
void even_odd_transform(int arr[], int size)
 {
 	
  for (int i = 0; i < size; i++)
   {
    if (arr[i] % 2 == 0) 
	{
      arr[i] -= 2;
    } else 
	{
      arr[i] += 2;
    }
  }
}



