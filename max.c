#include<stdio.h>
int main()
{
int a[50],i,t;
  for(i=1;i<=10;i++)
  {
    scanf("%d",&a[i]);
}
  for(i=2;i<=10;i++)
  {
    if(a[1]<a[i])
    {
      t=a[1];
    a[1]=a[i];
    }
  }
  printf("%d",a[1]);
  return 0;
}
