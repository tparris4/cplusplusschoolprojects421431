#include <iostream>
using namespace std;
int FindHighest(int array[], int& temp2);

int main()
{
  int array[5];
  int temp;
  int temp2 = 0;
  int x;
  cout << "enter 5 numbers" << "\n";
  for (int i = 0; i < 5; i++)
  {
 
    cin >> x;
    array[i] = x;
    
  }
  temp = FindHighest(array, temp2);
  cout << "the highest number is: " << temp;


}
int FindHighest(int array[], int& temp2)
{
  for (int i = 0; i <= 4; i++)
  {
    if (array[i] > temp2)
    {
      temp2 = array[i];
    }

  }
  return temp2;
}
