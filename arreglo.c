#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main (){
    int x=0, h,e,l1,l2;
    char hello[150];
    scanf("%s",&hello);

    do {
        if (hello[x]=='h'){
                h=x;

              break;
        }else
            x++;
    }while(x<100);
    if (hello[x]=='h')
        {
            do {
                if (hello[x]=='e'){
                        e=x;
                      break;
                }else
                    x++;
            }while(x<100);
        }
    if ((hello[h]=='h')&&(hello[x]=='e'))
    {
      do {
        if (hello[x]=='l'){
                l1=x;
              break;
        }else

            x++;

        }while(x<100);
    }
    if ((hello[h]=='h')&&(hello[e]=='e')&&(hello[x]=='l'))
    {
    do {
        if (hello[x]=='l'){
             l2=x+1;
              break;
        }else
            x++;

    }while(x<100);
    }
      if ((hello[h]=='h')&&(hello[e]=='e')&&(hello[l1]=='l')&&(hello[x]=='l'))
    {
    do {
        if (hello[x]=='o'){
            if(((   (x>l2)&&(x>l1)&&(x>e)&&(x>h))   &&   (((l2>l1)&&(l2>e)&&(l2>h))  &&  (l1>e)&&(l1>h)    &&  (e>h)))){printf("YES");return 0;}
            else
                {
                    printf("NO");
                    //printf("%i\n%i",l2,l1);
                   return 0;
                }

              break;
        }else
            x++;

    }while(x<100);
    }

  printf("NO");
    return 0;
}
