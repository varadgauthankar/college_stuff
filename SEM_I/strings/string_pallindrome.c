#include<stdio.h>
void main()
{
    char word[50];
    int i, j, len;

    printf("Enter the word : ");
    scanf("%s", word);

    for(len=0; word[len]!= '\0'; len++);
   // printf("%d",len);
   len--;
    for(i=0, j=len; i < len/2; i++, j--)
    {
        if(word[i]!=word[j])
        {
            printf("NOT a pallindrome!");
            break;
        }
    }

    if(i>=j)
        printf("Pallindrome");
}