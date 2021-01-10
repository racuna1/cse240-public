/**
 * Demostrates saving and loading an array of structures.
 *
 * Completion time: ? minutes
 *
 * @author Chen, Acuna
 * @version 1.0
*/
#include<stdio.h>
#include<string.h>

void save_file();
void load_file();

#define MAXIMUM_PEOPLE 100
#define myFile "myDataFile.txt"

struct personnel {
	char	 name[30];
	long	 phone;
	char	 birthday[11];
};

struct personnel person[MAXIMUM_PEOPLE];
int tail = 0;

int main() {s

	//save example
	strcpy(person[0].name, "Ruben Acuna");
	person[0].phone = 42;
	strcpy(person[0].birthday, "YYYY-MM-DD");
	tail++;
	save_file();

	//load example
	tail = 0;
	load_file();

	return 0;
}

void save_file()
{
	FILE* fileBuffer; // declare a pointer to File type
	fileBuffer = fopen(myFile, "wb");	// "b" for binary mode
	if (fileBuffer != NULL) 		// “w” for write
	{
		fwrite(&tail, sizeof(tail), 1, fileBuffer);	// save the tail variable
		for (int i = 0; i < tail; i++)
		{
			fwrite(person[i].name, sizeof(person[i].name), 1, fileBuffer);
			fwrite(&person[i].phone, sizeof(person[i].phone), 1, fileBuffer);
			fwrite(person[i].birthday, sizeof(person[i].birthday), 1, fileBuffer);
		}
		fclose(fileBuffer);
	}
	else
		printf("ERROR: Could not open file for saving data !\n");
}

void load_file()
{
	FILE* fileBuffer;
	fileBuffer = fopen(myFile, "rb"); // "b" for binary mode
	if (fileBuffer != NULL) 	    // "w" for write
	{
		fread(&tail, sizeof(tail), 1, fileBuffer);	// read the tail variable
		for (int i = 0; i < tail; i++)
		{
			fread(person[i].name, sizeof(person[i].name), 1, fileBuffer);
			fread(&person[i].phone, sizeof(person[i].phone), 1, fileBuffer);
			fread(person[i].birthday, sizeof(person[i].birthday), 1, fileBuffer);
		}
		fclose(fileBuffer);
	}
	else
		printf("ERROR: Could not open file for loading data !\n");
}