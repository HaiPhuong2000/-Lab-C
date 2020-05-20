/**
 * C program to reverse order of words in a string
 */
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
	char c;
	do{	
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Please enter string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    // Start checking of words from the end of string
    wordStart = len - 1;
    wordEnd   = len - 1;
    while(wordStart > 0)
    {
        // If a word isH found
        if(str[wordStart] == ' ')
        {
            // Add the word to the reverse string
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];           
                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }
                if(str[wordStart] == '_')
        {
            // Add the word to the reverse string
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];           
                i++;
                index++;
            }
            reverse[index++] = '_';

            wordEnd = wordStart - 1;
        }
        wordStart--;
    }

    // Finally add the last word
    for(i= 0; i <= wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    printf("The old string: \n%s\n\n", str);
    printf("The reversed string: \n%s", reverse);
    printf("\nPress enter to continue another reverse, ESC to exit");     
	c = getch();       
}while(c != 27);    
}
