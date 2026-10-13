/*write a program which accept range frome user and display all
 number in between that renge in reverse order*/
 //input: 23 35
 //output: 35 34 33 31 30 29 28 27 26 25 24 23
  //input: 10  18
  //output:18 17 16 15 14 13 12 11 10
  #include<stdio.h>
  void RangeDisplayRev(int iStart,int iEnd)
  {
    int iCnt = 0;
    for(iCnt =iEnd; iCnt>=iStart;iCnt--)
    {
      printf("%d ",iCnt);
    }

  }

  int main()
  {
      int ivalue1 = 0,ivalue2=0;

        printf("Enter starting number..");
        scanf("%d",&ivalue1);

         printf("Enter Ending number..");
        scanf("%d",&ivalue2);

        RangeDisplayRev(ivalue1,ivalue2);

    return 0;
  }