#include<stdio.h>
int main()
{
          int a,b,c;
          scanf("%d%d%d",&a,&b,&c);

          if(a>b && a>c){
          printf("a is largest number");
          }else if (b>c && b>a){
          printf("b is largest number");
          }else if (c>a  && c>b ){
          printf("c is largest number");
          }else{
          printf("a b and c equal");
          }

          return 0;
}
