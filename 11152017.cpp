int* y;
y = myArray
y[0]
delete[] y;


SomeClass.cpp

char* ptr;
ptr = new char[6];

SomeClass::~SomeClass()
{
	=> if (ptr!=NULL)
	{
		delete[] ptr;
	}
}
