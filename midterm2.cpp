#include <iostream> 
using namespace std;

int main()
{
  int x;
  cout << "input how big you want the first row to be\n";
  cin >> x;
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < i+1; j++)
    {
      cout << "*";   
    }
    cout << "\n";
  }
}
