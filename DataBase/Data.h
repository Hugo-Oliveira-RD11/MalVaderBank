#ifndef DATA_H_
#define DATA_H_
#include "../Model/Models.h"
#include <stdio.h>

#define LIM 100

FILE *Abrindo_Arquivo();

void Insere_arquivoF(FILE *a, Funcionario f);
void Insere_arquivoCC(FILE *a, Conta_Corrente c);
void Insere_arquivoCP(FILE *a, Conta_Poupanca c);

#endif // DATA_H_
