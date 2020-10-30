#include<stdio.h>
#include<string.h>
#define size (sizeof (str)/sizeof str[0])
int main()
{
    char str[50]={0};
    int i,num;
    char ch;
  //  int len=strlen(str);
    //printf("enter messsage to be encrypyed: ");
    for(i=0;(ch=getchar())!='\n';i++)
    {

        str[i]=ch;
    }
    printf("\n");
   // printf("enter shift amount:");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=((str[i]-'A')+num)%26+'A';
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=((str[i]-'a')+num)%26+'a';
        }
        
 
    }
    //printf("encrypted message: ");
    for(i=0;i<size;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    
    
}