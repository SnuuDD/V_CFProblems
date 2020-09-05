#include <stdio.h>

int main()
{
    int Prpa, DenM, Acum,xd,Prpa2;
    Acum=0;
    xd=1;
    //Precio de Pala
    scanf("%i",&Prpa);
    //DenMoneda
    scanf("%i",&DenM);
    Prpa2=Prpa;
    do
    {

        Acum=Acum+1;
        Prpa2=Prpa*Acum;
        xd=Prpa2%10;
        if(xd==0)
        {
         printf("%i",Acum);
        return 0;
        }
        else
        xd=xd-DenM;

        //printf("%i",Acum);
    }while(xd!=0);
    printf("%i",Acum);
    return 0;
}
