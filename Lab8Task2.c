#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int AnagramChecker(char String1 [], char String2 []);
 
int main()
{
    char String1[100]="cares", String2[100]="races";
    int z;
    
    z = AnagramChecker(String1, String2);

    if (z == 1)
        {printf("\n%s and %s are anagrams of each other\n\n", String1, String2);}
    else
        {printf("\n%s and %s are not anagrams of each other\n\n", String1, String2);}
    
    return 0;
    
}
 
int AnagramChecker(char String1[], char String2[])
{
    int check1[26] = {0}, check2[26] = {0}, i = 0;
 
    while (String1[i] != '\0')
    {
        check1[String1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (String2[i] != '\0')
    {
        check2[String2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (check1[i] != check2[i])
            return 0;
    }
    return 1;
}