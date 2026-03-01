#include<stdio.h>
int main()
{
          int a,b;
          scanf("%d%d",&a,&b);

          if(a>b){
          printf("a is largest number");
          }else if (b>a){
          printf("b is largest number");
          }else{
          printf("a and b equal");
          }

          return 0;
}
