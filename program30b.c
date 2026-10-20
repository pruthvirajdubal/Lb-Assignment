// Capital -> small, small -> capital, others unchanged

//input:Q
//output:q

//Input:m
//output:M



#include <stdio.h>


void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;       // 'A' (65) -> 'a' (97)
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;       // 'a' (97) -> 'A' (65)
    }

    printf("Output : %c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}