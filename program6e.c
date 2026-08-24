#include<stdio.h>
//input:2
//output:20  18  16...........2

void TableRev(int ino)
{
    for (int i=10;i>=1;i--)
    {
        printf("%d ",ino *i);
        
    }

}

int main()
{
    int ivalue =0;

    printf("Enter number...");
    scanf("%d",&ivalue);

    TableRev(ivalue);


    return 0;
}