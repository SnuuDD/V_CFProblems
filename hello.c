#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main (){
    int x=0, h,e,l1,l2,i;
    int cont1=0;
    char hello[99];
    scanf("%s",&hello);

if(hello[0]=='o'){
    printf("NO");
    return 0;
}

for(i=0;i<=100;i++){
        if(hello[i]==NULL){
            break;
        }
        cont1++;
    }
    

    do {
        if (hello[x]=='h'){
                h=x;

              break;
        }else
            x++;
    }while(x<cont1);


    if (hello[x]=='h')
        {
            do {
                if (hello[x]=='e'){
                        e=x;
                      break;
                }else
                    x++;
            }while(x<cont1);
        }

    if ((hello[h]=='h')&&(hello[x]=='e'))
    {
      do {
        if (hello[x]=='l'){
                l1=x;
              break;
        }else

            x++;

        }while(x<cont1);
    }
    if ((hello[h]=='h')&&(hello[e]=='e')&&(hello[x]=='l'))
    {
    do {
        if (hello[x]=='l'){
             l2=x+1;
              break;
        }else
            x++;

    }while(x<cont1);
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

    }while(x<cont1);
    }

  printf("NO");
    return 0;
}