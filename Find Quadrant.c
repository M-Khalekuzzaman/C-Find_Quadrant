#include<stdio.h>
int main()
{
    double col1,col2;
    printf("Input the value for X and Y are :");
    scanf("%lf %lf",&col1,&col2);

    if(col1>0 && col2>0)
        printf("The  quadrant lies in the First quandrant\n");
   else if(col1<0 && col2>0)
        printf("The  quadrant lies in the Second quandrant\n");
       else  if(col1<0 && col2<0)
        printf("The  quadrant lies in the Third quandrant\n");
       else     if(col1>0 && col2<0)
        printf("The  quadrant lies in the Four quandrant\n");
        else
            printf("Not correct quandrant\n");
}
