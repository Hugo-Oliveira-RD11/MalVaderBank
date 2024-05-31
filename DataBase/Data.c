#include "Data.h"
#include "../Menu.h"
#include "../Model/Models.h"
#include "stdio.h"
#include "string.h"

char es[2];

FILE *Abrindo_Arquivo() {
  FILE *fl = fopen("Banquinho.txt", "wb");
  return fl;
}

void Fechando_Arquivo(FILE *fl) { fclose(fl); }

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

void Insere_arquivoCP(FILE *a, Conta_Poupanca c) {
  fprintf(a,
          "agencia: %d, N° conta: %d, Nome: %s, CPF : %d, data: %d/%d/%d,"
          " Estado:%s, Cep: %d, numero da casa: %d, bairro %s, "
          "Cidade: %s, Telefone: %d, senha: %d\n",
          c.Agencia, c.NumConta, c.Nome, c.CPF, c.data.Ano, c.data.Mes,
          c.data.Dia, c.endereco.estado, c.endereco.cep, c.endereco.NumCasa,
          c.endereco.Bairro, c.endereco.Cidade, c.Telefone, c.Senha);
}
