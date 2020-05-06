#include <iostream> 
using namespace std;

int main()
{
  int x;
  cout << "input your age: ";
  cin >> x;
  if (x >= 21)
  {
    cout << "You can drink, vote, and drive!" << "\n";
  }
  else if (x < 21 && x >= 18)
  {
    cout << "You can vote and drive!" << "\n";
  }
  else if (x < 18 && x >= 17)
  {
    cout << "You can drive!" << "\n";
  }
  else
  {
    cout << "You can't do nothing!" << "\n";
  }
}
