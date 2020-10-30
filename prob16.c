#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include<stdbool.h>
#define len (sizeof(a) / sizeof(a[0]));
#define N 26
int main()
{
    int digit,digitseen[N] = { 0} ;
    char ch;
    char a[N];

    //printf("enter string one: ");
    while ((ch = toupper(getchar()))!= '\n'){
        if (isalpha(ch)){
        digit=(ch)-'A';
        digitseen[digit]++;
    }}
    //printf("enter string two: ");
     while ((ch = toupper(getchar()))!= '\n'){
        if (isalpha(ch)){
        digit=(ch)-'A';
        digitseen[digit]--;
    }}
    for (int i=0;i<N;i++)
        if (digitseen[i]!=0){
           printf("0\n");
            return 0;          
        }
    
    printf("1\n");
    return 0;
}  
