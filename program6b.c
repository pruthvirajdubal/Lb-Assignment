#include<stdio.h>
/*
ACCEPT SINGLE DIGIT NUMBER FROM USER AND PRINT IT INTO WORD*/
//in :9
//op:nine


void Display(int ino)
{
    switch (ino)
    {
    case 0:
        printf("zero");
        break;

     case 1:
        printf("one");
        break;

     case 2:
        printf("two");
        break;
    
     case 3:
        printf("three");
        break;

     case 4:
        printf("four");
        break;
    
     case 5:
        printf("five");
        break;

     case 6:
        printf("six");
        break;

     case 7:
        printf("seven");
        break;

    default:
    printf("Invalid number:Enter only1 to 7...");
        break;
    }

}

int main ()
{
    int ivalue =0;

    printf("Enter the number..");
    scanf("%d",&ivalue);

    Display(ivalue);


    return 0;
}