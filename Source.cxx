#include<iostream>
#include"mug.h"
using namespace std;
double diffmemory(int* x, int* y);
int main()
{
	//initializing five variables
	int a;
	int b;
	double c;
	char d;
	mug e;

	//initializing five pointes to point the five variables
	int* p;
	p = &a;

	int* q;
	q = &b;

	double* r;
	r = &c;

	char* s;
	s = &d;

	mug* t;
	t = &e;
	cout << "Address of first integer variables:" << p<<"\n";
	cout << "Address of secong integer varable :" <<q << "\n";
	cout << "Address of double variable :" << r << "\n";
	cout << "Address of char varable :" << static_cast<void *>(s) << "\n";
	cout << "Address of mug :" << t << "\n";

	cout << "Size of first integer :" << sizeof(a) << "\n";
	cout << "Size of second integer :" << sizeof(b) << "\n";
	cout << "Size of double :" << sizeof(c) << "\n";
	cout << "Size of char :"<<sizeof(d) << "\n";
	cout << "Size of mug :" << sizeof(e) << "\n";
	
	//Extra credit
	cout<<"The difference between two integer memory :"<<diffmemory(p, q)<<"\n";
	
	//Creating an srray of 5
	int Ar[5];
	cout << "Enter the five elements of array :";
	for (int i = 0; i < 5; i++)//initializing each element using the for loop
	cin >> Ar[i];
	cout << Ar << "\n";
	cout << "Size of array :"<<sizeof(Ar) << "\n";
	for (int i = 0; i < 5; i++)//printing elements of array by dereferncing using the for loop
	cout<< *(Ar+i)<<" ";
	cout << "\n";
	//Creating a char array of 100
	char Cr[100];
	Cr[0] = 'H';
	Cr[1] = 'E';
	Cr[2] = 'L';
	Cr[3] = 'L';
	Cr[4] = 'O';
	Cr[5] = ' ';
	Cr[6] = 'B';
	Cr[7] = 'Y';
	Cr[8] = 'E';
	Cr[9] = '\0';
	cout << Cr;
	cout << "\n";
	int *pp = q;
	cout << pp;
	cin >>a;
}

double diffmemory(int* x, int* y)
{
	double z = x - y;
	return z;
}