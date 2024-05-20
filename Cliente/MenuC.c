#include "MenuC.h"
#include "../Menu.h"
#include <stdio.h>
#define Cli 1

void Principal_Cliente() {
  printf("1 - Saldo\n2 - Deposito\n3 - Saque"
         "4 - Extrato\n5 - Consultar Limite\n6 - Sair");
}
void MCliente_Saldo() { Digite_Senha(Cli); }

void MCliente_Saque() { Digite_Senha(Cli); }

void MCliente_Extrato() { Digite_Senha(Cli); }

void MCliente_Conultar() { Digite_Senha(Cli); }
