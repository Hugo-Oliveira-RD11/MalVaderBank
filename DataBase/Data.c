#include "Data.h"
#include "../Menu.h"
#include "../Model/Models.h"
#include "stdio.h"
#include "string.h"

#define LIM 100

// MAIOR DOR DA VIDA

char es[2];

FILE *Abrindo_Arquivo() {
  FILE *fl = fopen("Banquinho.txt", "a");
  return fl;
}

void Fechando_Arquivo(FILE *fl) { fclose(fl); }

void Insere_arquivoF(Funcionario f) {
  FILE *a = Abrindo_Arquivo();
  fprintf(a,
          "Codigo: %d, CPF: %d, Nome: %s, Telefone: %d, Senha: %d,"
          "cargo: %s, Estado:%s, Cep: %d, numero da casa: %d, bairro %s, "
          "Cidade: %s,DATA: %d/%d/%d\n",
          f.Codigo, f.CPF, f.Nome, f.Telefone, f.Senha,
          f.cargo == Gerente ? "Gerente" : "funcionario", f.endereco.estado,
          f.endereco.cep, f.endereco.NumCasa, f.endereco.Bairro,
          f.endereco.Cidade, f.data.Ano, f.data.Mes, f.data.Dia);
  fclose(a);
}

void Insere_arquivoCC(Conta_Corrente c) {
  FILE *a = Abrindo_Arquivo();

  fclose(a);
}

void Insere_arquivoCP(Conta_Poupanca c) {

  FILE *a = Abrindo_Arquivo();

  fprintf(a,
          "agencia: %d, N° conta: %d, Nome: %s, CPF : %d, data: %d/%d/%d,"
          " Estado:%s, Cep: %d, numero da casa: %d, bairro %s, "
          "Cidade: %s, Telefone: %d, senha: %d\n",
          c.Agencia, c.NumConta, c.Nome, c.CPF, c.data.Ano, c.data.Mes,
          c.data.Dia, c.endereco.estado, c.endereco.cep, c.endereco.NumCasa,
          c.endereco.Bairro, c.endereco.Cidade, c.Telefone, c.Senha);

  fclose(a);
}

ContaPoupanca PesquisarContaCP(int flag) {
  FILE *a = Abrindo_Arquivo();
  Conta_Poupanca conta;
  char linha[LIM];

  printf("digite o numero da conta corrente");
  scanf("%d", &flag);

  fseek(a, 0, SEEK_CUR);

  while (fgets(linha, sizeof(linha), a)) {
    sscanf(linha,
           "%d,%d,%100[^,],%d,%d,%d,%d,%100[^,],%d,%d,%100[^,]%100[^,],%d,%d");
    if (conta.Agencia == flag) {
      printf("agencia: %d, N° conta: %d, Nome: %s, CPF: %d, data: %d/%d/%d, "
             "Estado: %s, Cep: %d, numero da casa: %d, bairro: %s, Cidade: %s, "
             "telefone: %d, senha: %d",
             conta.Agencia, conta.NumConta, conta.Nome, conta.CPF,
             conta.data.Ano, conta.data.Mes, conta.data.Dia,
             conta.endereco.estado, conta.endereco.cep, conta.endereco.NumCasa,
             conta.endereco.Bairro, conta.endereco.Cidade, conta.Telefone,
             conta.Senha);
      return conta;
    }
    return;
  }
}
