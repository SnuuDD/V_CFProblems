#include <stdio.h>
 
int main()
{
   int n, x;
    scanf("%i",&n);
    x=n%100;
    if (x==44 || x==77 || x==47 || n%44==0 || n%77==0 || n%47==0 || n%7==0 || n%4==0)
    {printf("YES");
            return 0;}
    else
        printf("NO");
    return 0;
}