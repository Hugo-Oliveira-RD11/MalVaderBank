#include "MenuF.h"
#include "Menu.h"
#include <stdio.h>

#define Sub 2 /* subgerente */
#define Ger 3 /* gerente */

void Menu_Principal_Funcionario() {
  printf("1 - abertura de conta\n2 - encerramento de conta\n3 - consulta "
         "dados\n4 - alterar dados\n5 - cadastro de funcionarios\n6 - gerar "
         "relatorios\n7 - sair");
}

void MFuncionario_Abertura() {
  printf("1 - conta poupança - CP\n2 - conta corrente - CC\n3 - Voltar");
}

void MFuncionario_Encerramento() { Digite_Senha(Sub); }

void MFuncionario_Consulta() {
  printf("1 - Alterar conta\n2 - Alterar Funcionario\n3 - Alterar cliente\n4 - "
         "voltar");
}

void MFuncionario_CadastroNovoFuncionario() { Digite_Senha(Ger); }
