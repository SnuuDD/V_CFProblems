#include <stdio.h>

int main(){

    char operacion[110], numeros[60], sumas[60];
    //int cont1=0, cont2=0, cont3=0;
    int i,j,s=0;
    j=0;

    scanf("%s",&operacion);

    for(i=0;i<=110;i++){
        if(operacion[i]=="1"){
            numeros[j]=operacion[i];
            j++;
        }
    }

    for(i=0;i<=110;i++){
        if(operacion[i]=="2"){
            numeros[j]=operacion[i];
            j++;
        }
    }

    for(i=0;i<=110;i++){
        if(operacion[i]=="3"){
            numeros[j]=operacion[i];
            j++;
        }
    
    for(i=0;i<=110;i++){
        if(operacion[i]=="+"){
            sumas[s]=operacion[i];
            s++;
        }
    }

    
    for(i=0;i<=j;i++){
            printf("%c",&numeros[i]);

            if(sumas[i]!=NULL){
            printf("%c",&sumas[i]);
            }
            
        }
    }

    return 0;
}