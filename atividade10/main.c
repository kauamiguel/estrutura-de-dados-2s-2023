/*
Instruções
Crie uma pasta atividade10 no seu repositório de atividades. 
Implemente os arquivos main.c, tabela_hash.h e tabela_hash.c.

Nos arquivos tabela_hash.h e tabela_hash.c declare e implemente as funções:

char* hash_table_get(char* chave)
void hash_table_put(char* chave, char* dado)
int hash_table_contains(char* chave)
void hash_table_remove(char* chave)

No arquivo main.c demonstre o uso da tabela hash.

Você deve usar um array de char* para armazenar os valores na tabela. Crie uma função hash()
 que converte a chave em um índice do array.

Como solução, poste o link da pasta atividade10.
*/

#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"

int main(){
    hash_table_put("andre", "123");
    hash_table_put("breno", "123455");
    hash_table_get("andre");
    hash_table_contains("andre");
}