#include<cassert>//provides assert
#include "mug.h"
#include <iostream> //we are adding ostream and istream
#include <cstdlib>
using namespace std;
double mem(int* x, int* y);

//#ifndef MUG_H_   //macroguard that stops the header from being included twice.
//#define MUG_H_  //In//cluding the header twice stops the compilation, Note no Semilcolon
int main(){


int x;
int y;
double z;
char a;
mug firstMug;

int* p = &x;
int* p2 = &y;
double* p3 = &z;
char* p4 = &a;
mug* p5;
p5 = &firstMug;

cout << p << "\n";
cout << p2 << "\n";
cout << p3 << "\n";
cout << static_cast<void*>(p4) << "\n";
cout << p5 << "\n";

cout << sizeof(x) << "\n";
cout << sizeof(y) << "\n";
cout << sizeof(z) << "\n";
cout << sizeof(a) << "\n";
cout << sizeof(firstMug) << "\n";

//Extra Credit
cout << mem(p1, p2)<< "\n";
cout << memory(p, p2) << "\n";

int Array[5];
for (int i = 0; i < 5; i++)
{
	cin >> Array[i];
}
	cout << Array << "\n";
	cout << sizeof(Array) << "\n"
for (int j = 0; j < 5; j++)
{
	cout << *(Array+i)" "; << "\n";
}
char Char[100];
Char[0] = 'H';
Char[1] = 'E';
Char[2] = 'L';
Char[3] = 'L';
Char[4] = '0';
Char[5] = ' ';
Char[6] = 'B';
Char[7] = 'Y';
Char[8] = 'E';
Char[9] = '\0'
cout << Char << "\n";
int *ptr = p2;
cout << ptr;

double mem(int* x, int* y)
{
	double z = x - y;
	return z;
}

}
