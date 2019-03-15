#include <stdio.h>
int fact(int x)
{
     int i,f=1;
     for(i=1;i<=x;i++)
     {f=f*i;
     }
     return f;}
int main(int argc, char *argv[])
{
  
  int n;
  printf("entre un nombre :\n");
  scanf("%d",&n);
  printf("%d \n",fact(n));
  system("PAUSE");	
  return 0;
}
