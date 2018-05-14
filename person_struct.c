#include <stdio.h>


int main(char argc, int argv[1])
{

	// DEFINITION OF STRUCT PERSON
	typedef struct Person 
	{
		char name[60];
		int age;
		char sex;
		float salary; 



	} PERSON;


	// WRITE TO FILE IN BINARY
	PERSON jt = { "Justin Timberlake", 36, 'M', 1500 };
	PERSON mj = { "Mary Jane Austen", 20, 'F', 1000 };

	FILE *fp = fopen( "data.dat", "wb" );

	fwrite( &jt, sizeof(struct Person), 1, fp );
	fwrite( &mj, sizeof(struct Person), 1, fp );

	fclose( fp );

	// READ FROM FILE IN BINARY
	PERSON persons[2];
	fp = fopen( "data.dat", "rb" );

	fread( persons, sizeof(struct Person), 2, fp );

	printf("%s \n", 	persons[0].name );
	printf("%d\n", 		persons[0].age );
	printf("%c\n", 		persons[0].sex );
	printf("%4.2f\n", 	persons[0].salary );

	printf("%s \n", 	persons[1].name );
	printf("%d\n", 		persons[1].age );
	printf("%c\n", 		persons[1].sex );
	printf("%4.2f\n", 	persons[1].salary );


	fclose( fp );
	


	return 0;
}
