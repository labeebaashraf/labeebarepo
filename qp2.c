/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
    
    {
        char str[10];
        int word,alph,nbr,i;
        alph = word = nbr = i = 0;
        printf("enter a string");
        scanf(" %[^\n]",str);
        while(str[i]!='\0')
          {
              if((str[i]>='a' && str[i]<'z') || (str[i]>='A' && str[i]<='Z'))
                {
                    alph++;
                } 
              else if(str[i]>='0' && str[i]<='9') 
                {
                    nbr++;
                }
              else if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
                {
                    word++;
                }
                i++;
          } 
        printf("the word count is %d\n",word);
        printf("alphabet cout is %d\n",alph);
        printf("numbers count is %d\n",nbr);
    
}
