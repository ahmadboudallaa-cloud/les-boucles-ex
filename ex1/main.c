#include <stdio.h>
#include <stdlib.h>

int main() {
    int Nombre,i;

printf("veuillez entrer un nombre:");
scanf("%d",&Nombre);

   for (i=1;i<=10;i++){

       printf("%d x %d = %d\n",Nombre,i,Nombre*i);

}

    return 0;
}

