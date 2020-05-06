
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_256
#define MAX_1024

void Load();
void PrintArray();
void SortArray();

main(){
	
	printf("This program takes arrays and sorts them. \n")
	Load();
	PrintArray();
	SortArray();
	PrintArray();
}


void Load(){
	
	char * Gstr1[STRINGS];
	char * Gstr2[STRINGS2];
	
}

void PrintArray()
{
	for (i = 0; i < STRINGS; i++)
		printf("%c\n", * STRINGS[i];
}
	return 0
}

void SortArray(Gstr1[])
{
	int i;
	int c;
	int q;
	int t;
	int swap;
	for (i=0;i<STRINGS;i++){
        b[i] = (char *)(a) + i;
    }

for (c=0 ; c<(q-1);c++)
  {
    for (t=0;t<q-c-1;t++)
    {
      if (Gstr1[t] > Gstr1[t+1]) 
      {
        swap=Gstr1[t];
        Gstr1[t]=Gstr1[t+1];
        Gstr1[t+1]=swap;
      }
    }
  }
}

void bubbleSortAWriteToB(const char a[], char * b[]);

int main(void){
    int i;

    // initialize array
    char * s_letters[CLASS_SIZE];
    char letters[CLASS_SIZE] = {'a','r','p','b','r','c','x','e','w','j'};
    // sort array
    bubbleSortAWriteToB(letters,s_letters);

    // print sorted array
    for (i=0;i<CLASS_SIZE;i++){
        printf("%c\n", *s_letters[i]);
    }

    return 0;
}

void bubbleSortAWriteToB(const char a[], char * b[]){
    char * temp;
    int i,j;

    // initialize b array to hold pointers to each element in a
    for (i=0;i<CLASS_SIZE;i++){
        b[i] = (char *)(a) + i;
    }

    // in-place sort the b array
    for(i=0;i<CLASS_SIZE;i++){
        for(j=i+1;j<CLASS_SIZE-1;j++){
            if(*b[j-1]>*b[j]){
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }   
    }
}