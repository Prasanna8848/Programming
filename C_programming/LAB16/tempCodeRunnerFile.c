#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1 = fopen("lower.txt", "r");
	FILE *fp2 = fopen("data.txt", "r");

	FILE *fp3 = fopen("last.txt", "w");
	char c;

	if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{
		printf("Error! in opening file\n");
	}
	else
	{
		while ((c = fgetc(fp1)) != EOF)
			fputc(c, fp3);
		while ((c = fgetc(fp2)) != EOF)
			fputc(c, fp3);

		printf("Copied lower.txt and data.txt to last.txt");
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
    fp3 = fopen("last.txt","r");
        printf("\n\nThe content of file  after copying is :\n");
        while ((c= fgetc(fp3))!= EOF){
            fprintf(stdout , "%c" , c);
        }
        printf("\n\n");
        fclose(fp3);
	return 0;
}