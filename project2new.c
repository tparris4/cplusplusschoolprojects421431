#include <stdio.h>
#include <file>
#include <stdlib.h>
#include <string.h>

//efinitions for linked list
struct listWord{
    private struct Begin {
      int lineNum;
	  struct Begin *adv;
    }

	struct Word{
		char *string;
		struct Begin *line;
		struct Word *adv;
	}
}


typedef struct Node{
	struct Node *adv;
	char *trace;
} Node;

Node *begin = NULL;
Node *contin;

void incWord(char *contin){
	
	Node *temp = malloc(sizeof(Node))
	temp->adv = strdup(cont);
	strcpy(temp->adv, cont);
	contin = begin;
	
	if(begin == NULL){
		begin = temp;
	} 
	else 
	{
		while(contin->trace != NULL){
			contin = contin->adv;
		}
		contin->adv = temp;
	}
}

void fileRead(char *file, char *filename){
	FILE *file = fopen(filename, "s");
	
	int i = 0;
	const char t[i] = " ";
	char *tok = *file;
	
	tok = strtok(str, t);
	while(tok != EOF)
	{
		if (tok == tok + 1)
		{
			
		}
		incWord(tok);
	}
	fclose(file);
	fprintf(*file);
}
//uses the tokenizer to get words and put them into the linked list

int main(int argc, char* argv[]){
	char const file = argv[1];
	sscanf("%s", word)
	FILE *infile = fopen(file, "filesize")
	char *list[];
	char *numlist[];
	Node tracker = top;
	
	while ((filelen = getLine(&len, lineNum, linenumList) != EOF)) {
	
	int i = 0;
	const char t[i] = " ";
	char *tok;
	
	tok = strtok(str, t);
	
	while(tok != EOF)
	{
		if (tok)
	}a
			
		else
			
			linenum++;
			
		}
		
		fprintf("%d", linenum)
		fclose(file);
	}
}
	
}