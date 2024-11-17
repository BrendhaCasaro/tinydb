#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#define NULL ((void *)0)
#define true 1
#define false 0



int main () 
{
    FILE *userdate = fopen("numbers.tdb", "a");

    if(userdate == NULL)
            {
                printf("Erro ao abrir o arquivo\n");

                return 1;
            }


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


        if(strstr(input, "PUT "))
        {
            char* key = NULL;
            char* value = NULL;

            for (int i = 4; input[i] != '\0'; i++) {
                if (key == NULL) {
                    key = &input[i];

                }   

                if (input[i] == ' ') {
                    input[i] = '\0';
                    value = &input[i + 1];
                    break;
                }
            }

        if(key == NULL)
        {
            puts("Não foi digitada chave");

            free(input);

            continue;
        }        

        if(strlen(value) < 1)
        {

            puts("Não foi digitado o valor\n");

            free(input);

            continue;
        }




        }


    free(input);
    }

    fclose(userdate);
    return 0;
}
