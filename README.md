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


## Etapas

- Ler o camando em um loop, caso a pessoa digite "EXIT" o programa deve parar.
- Interpretar o comando digitado
- Executar o comando
- PUT: Adicionar no arquivo a chave e o valor digitado
- GET: Buscar no arquivo pela chave e retornar o valor