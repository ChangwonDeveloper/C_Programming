#include <stdio.h>
#include <stdlib.h>
#include<memory.h>
/*
write a program to find the total number of lines in a text file
create a file that contain some lines of text
open your test file
use the fget function to parse characters in a file until you get to the EOF
    if EOF increment counter
display as output the total number of lines in the file

*/

void print();

int main()
{
    FILE *fp;
    char file_buff[100];
    fp = fopen("challenge.txt", "r");

    if(fp == NULL){
        printf("Fail to open the file");
    }

    while(fgets(file_buff, sizeof(file_buff), fp) != NULL){
		printf("%s", file_buff);
		memset(file_buff, 0, sizeof(file_buff));
	}
	fclose(fp);
    prin

    return 0;
}
