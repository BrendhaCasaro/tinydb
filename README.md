# TinyDB

Programa definido em um REPL que possui dois comandos, GET e PUT.

O comando PUT irá armazenar um dado em um arquivo com chave e valor.
Estrutura: `PUT <chave> <valor>`

Ex: 
```
> PUT idade 13
```

Esse comando irá salvar em um arquivo o valor 13 na chave idade.

O comando GET irá printar o valor contido em uma chave
Estrutura: `GET <chave>`

Ex: 
```
> GET idade
13
```

Tudo isso será armazenado em apenas um arquivo e os dados devem persistir em diferentes execuções.


Futuro:
    - Avisar quando o comando não existe
    - chave com espaço
    - chave duplicada
    - get em chave inexistente
