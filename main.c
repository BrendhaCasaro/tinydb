#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#define NULL ((void *)0)
#define true 1
#define false 0

int main()
{
    FILE *userdate = fopen("numbers.tdb", "a+");

    if (userdate == NULL)
    {
        printf("Erro ao abrir o arquivo\n");

        return 1;
    }

    while (true)
    {
        char *input = readline("tinydb> ");
        add_history(input);

        if (strcmp("EXIT", input) == 0)
        {
            break;
        }

        if (strstr(input, "PUT "))
        {
            char *key = NULL;
            char *value = NULL;

            for (int i = 4; input[i] != '\0'; i++)
            {
                if (key == NULL)
                {
                    key = &input[i];
                }

                if (input[i] == ' ')
                {
                    input[i] = '\0';
                    value = &input[i + 1];
                    break;
                }
            }

            if (key == NULL)
            {
                puts("Não foi digitada chave");

                free(input);

                continue;
            }

            if (value == NULL)
            {

                puts("Não foi digitado o valor\n");

                free(input);

                continue;
            }

            fprintf(userdate, "%s %s\n", key, value);
            fflush(userdate);
            rewind(userdate);
        }

        if (strstr(input, "GET "))
        {
            char *key = NULL;

            key = input + 4;

            if (key == NULL)
            {
                puts("Não foi digitada chave");

                continue;
            }

            char line[256];

            while (fgets(line, sizeof(line), userdate) != NULL)
            {

                line[strcspn(line, "\n")] = '\0';

                if (strstr(line, key))
                {
                    char *value = &line[strcspn(line, " ") + 1];

                    puts(value);

                    break;
                }
            }

            rewind(userdate);
        }

        free(input);
    }

    fclose(userdate);
    return 0;
}
