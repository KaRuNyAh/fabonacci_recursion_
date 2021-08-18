#include <stdio.h>
int fab(int n)
{
    int fab1;
    if(n==1)
     return 1;
    else if (n==0)
      return 0;
    else
     fab1=fab(n-1)+fab(n-2);
     // this is for printing the before number which goes repeatedly in series;
     return fab1;
}
int main()
{
    int n;
    scanf("%d",&n);
   
    for(int i=0;i<n;i++)
      printf("%d",fab(i));
    return 0;
}