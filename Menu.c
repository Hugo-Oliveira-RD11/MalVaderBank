#include "Menu.h"
#include "./Cliente/MenuC.h"
#include "./Funcionario/MenuF.h"
#include <stdio.h>

void Menu_Principal() {
  int escolha;
  printf("1 - funcionario\n2 - Cliente\n3 - Sair do Programa");
  scanf("%d", &escolha);
  do {
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
      continue;
      break;
    }
  } while (1);
}

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


