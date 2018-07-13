// C Programming
//
//  Exercise_2-4
//
//  Deletes each character in s1 that matches any character in the string s2
//
//  Created by Louie Shi on 7/13/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <stdio.h>

#define MAXSIZE 1000

void squeeze(char s[], int c);
void modifiedSqueeze(char s1[], char s2[]);

// Code from the textbook on page 47
// Removes all occurrences of the character c from the string s
void squeeze(char s[], int c)
{
    int i, j;
    
    for(i = j = 0; s[i] != '\0'; i++)
    {
        if(s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

// Deletes each character in s1 that matches any character in the string s2
void modifiedSqueeze(char s1[], char s2[])
{
    int i, j;
    int curChar;
    
    //loop through s1 to find characters to delete in s2
    for(i = 0; i < strlen(s1); i++)
    {
        curChar = s1[i];
        squeeze(s2, curChar);
    }
}

int main(int argc, const char * argv[])
{
    char str1[MAXSIZE] = "louie";
    char str2[MAXSIZE] = "youchen";
    
    modifiedSqueeze(str1, str2);
    
    printf("str1: %s \n", str1);
    printf("str2: %s \n", str2);
    
    return 0;
}
