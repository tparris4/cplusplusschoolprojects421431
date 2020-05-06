#include <iostream>
#include "bag.h"
using namespace std;

int main(){
	bag a;
	a.insert(10);
	a.insert(20);
	a.insert(25);
	cout<<"our bag should have 10,20,25 in it: "<<a<<endl;
	a.erase(25);
	a.insert(12);
	cout<<"our bag should have 10,20,12 in it: "<<a<<endl;
	bag b(3);
	b.insert(23);
	b.insert(25);
	b.insert(27);
	b.insert(29);
	cout<<"our bag shoule have 23,25,27, and 29 in it: "<<b<<endl;


}

