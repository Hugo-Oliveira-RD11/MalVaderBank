#include "Menu.h"
#include "./Cliente/MenuC.h"
#include "./Funcionario/MenuF.h"
#include <stdio.h>

void Menu_Principal() {
  int escolha;
  do {
    printf("1 - funcionario\n2 - Cliente\n3 - Sair do Programa\n");
    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
      Principal_Funcionario();
      break;
    case 2:
      Principal_Cliente();
      break;
    case 3:
      return;
      break;
    default:
      printf("!!DIGITE UM NUMERO VALIDO!!\n");
      continue;
      break;
    }
  } while (1);
}

/*
** op = 1 e gerente
** op = 2 e subgerente
** op = 3 e Conta Corrente
*/

int Digite_Senha(int op) {
  switch (op) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  default:
    break;
  }
  return 0;
}

void LimpaBuffer() {
  while ((getchar()) != '\n')
    ;
}
