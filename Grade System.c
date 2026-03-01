#include<stdio.h>
int main()
{
          int a;
          scanf("%d",&a);

          if(a>=80 && a<=100){
          printf("A+");
          }else if(a>=70){
          printf("A");
          }else if(a>=60){
          printf("B");
          }else if(a>=50){
          printf("C");
          }else if(a>=40){
          printf("D");
          }else
          printf("Fail");

          return 0;
}
