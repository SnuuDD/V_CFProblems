#include <stdio.h>

int main(){

    char derecho[110], alreves[110];
    int cont1=0, cont2=0, cont3=0;
    int i,j;

    scanf("%s",&derecho);
    scanf("%s",&alreves);

    for(i=0;i<=100;i++){
        if(derecho[i]==NULL){
            break;
        }
        cont1++;
    }

    for(j=(cont1-1);j>=0;j=j-1){
        if(alreves[j]==derecho[cont3]){
            cont3++;
        }
        else{
            //printf("%c = %c",derecho[cont3],alreves[j]);
            printf("NO");
            return 0;
        }
    }
   // printf("%i",i);
    //printf("\n");
    //printf("%i",cont3);
    //printf("\n");
    printf("YES");

    return 0;
}