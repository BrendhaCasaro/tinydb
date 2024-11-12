#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#define NULL ((void *)0)
#define true 1
#define false 0


FILE *userdate;

void main () 
{
    char chave[50];
    int valor;
    while (true)
    {
        char* input = readline("tinydb> ");
        add_history(input);

        if(strcmp("EXIT", input) == 0)
        {
            break;
        }

        userdate = fopen("PUTs_user.txt", "a");

        if(userdate == NULL)
            {
                printf("Erro ao abrir o arquivo\n");

                break;
            }

        if(strstr(input, "PUT "))
        {
            sscanf(input, "%d", &valor);
            fprintf(userdate, "%d", valor);
        }

    free(input);
    fclose(userdate);

    break;
    }
}
