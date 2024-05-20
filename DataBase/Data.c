#include "Data.h"
#include "../Menu.h"
#include "../Model/Models.h"
#include "../Program.c"
#include "stdio.h"
#include "string.h"

char es[2];

FILE *caminho_arquivo(char path[LIM]) {
  int tamanho = strlen(path), i = 0;
  char caminho[tamanho];
  tamanho--;
  while (tamanho > i) {
    caminho[i] = path[i];
    i++;
  }
  FILE *f = fopen(caminho, "w");
  return f;
}

void Insere_arquivoF(FILE *a, Funcionario f) {

  fprintf(a,
          "Codigo: %d, CPF: %d, Nome: %s, Telefone: %d, Senha: %d,"
          "cargo: %s, Estado:%s, Cep: %d, numero da casa: %d, bairro %s, "
          "Cidade: %s,DATA: %d/%d/%d",
          f.Codigo, f.CPF, f.Nome, f.Telefone, f.Senha,
          f.cargo == Gerente ? "Gerente" : "funcionario", f.endereco.estado,
          f.endereco.cep, f.endereco.NumCasa, f.endereco.Bairro,
          f.endereco.Cidade, f.data.Ano, f.data.Mes, f.data.Dia);
}

void Insere_arquivoCC(FILE *a, Conta_Corrente c) {}
