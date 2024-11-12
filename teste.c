#include <stdio.h>
#include <string.h>


char chave[10];

FILE *user;

int operação;

void main ()
{
    scanf("%s", chave);

    user = fopen("user.txt", "w");
    fprintf(user, "%s", chave);
    //fwrite(chave, sizeof(chave), 1, user);


    fclose(user);


}