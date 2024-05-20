#include "MenuF.h"
#include "../Menu.h"
#include <stdio.h>

#define Sub 2 /* subgerente */
#define Ger 3 /* gerente */

void Principal_Funcionario() {
  int escolha = 0, verifica = 0;

  printf("1 - abertura de conta\n2 - encerramento de conta\n3 - consulta "
         "dados\n4 - alterar dados\n5 - cadastro de funcionarios\n6 - gerar "
         "relatorios\n7 - sair");

  switch (escolha) {
  case 1:
    verifica = MFuncionario_Abertura();
    if (verifica == true) {
      printf("dados do cliente cadastrados com sucesso");
      break;
    }
    printf("dados do cliente não foram cadastrados");
    break;
  }
}

int MFuncionario_Abertura() {
  printf("1 - conta poupança - CP\n2 - conta corrente - CC\n3 - Voltar");
}

int MFuncionario_Encerramento() { Digite_Senha(Sub); }

void MFuncionario_Consulta() {
  printf("1 - Alterar conta\n2 - Alterar Funcionario\n3 - Alterar cliente\n4 - "
         "voltar");
}

void MFuncionario_CadastroNovoFuncionario() { Digite_Senha(Ger); }
