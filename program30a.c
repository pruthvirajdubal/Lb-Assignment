
// Displays symbol, decimal, hexadecimal and octal value for 0 to 255

#include <stdio.h>


void DisplayASCII()
{
    int i = 0;

    printf("%-8s %-8s %-8s %-8s\n", "Symbol", "Decimal", "Hex", "Octal");
    printf("------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        // Non-printable characters are shown as '.'
        char symbol = (i >= 32 && i <= 126) ? (char)i : '.';
        printf("%-8c %-8d 0X%-6X 0%-7o\n", symbol, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}