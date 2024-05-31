#include "MenuF.h"
#include "../Menu.h"
#include "../Model/Models.h"
#include <stdio.h>

#define Sub 2 /* subgerente */
#define Ger 3 /* gerente */

int MFuncionario_Abertura();

void Principal_Funcionario() {
  int escolha = 0, verifica = 0;

  printf("1 - abertura de conta\n2 - encerramento de conta\n3 - consulta "
         "dados\n4 - alterar dados\n5 - cadastro de funcionarios\n6 - gerar "
         "relatorios\n7 - sair");

  do {
    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
      MFuncionario_Abertura();
      break;
    }
  } while (1);
}

int MFuncionario_Abertura() {
  int escolha = 0;
  printf("1 - conta poupança - CP\n2 - conta corrente - CC\n3 - Voltar");
  do {
    switch (escolha) {
    case 1:
      Conta_Poupanca conta;

      printf("digite o cpf:\n");
      scanf("%d", &conta.CPF);

      printf("digite o agencia:\n");
      scanf("%d", &conta.Agencia);

      printf("digite a conta:\n");
      scanf("%d", &conta.NumConta);

      LimpaBuffer(); // chama o while para limpar o buffer, se não da o fgets n
                     // funciona.
      printf("digite a Nome:\n");
      fgets(conta.Nome, sizeof(conta.Nome), stdin);

      printf("digite o telefone\n");
      scanf("%d", &conta.Telefone);

      printf("digite o cep\n");
      scanf("%d", &conta.endereco.cep);

      printf("digite o numero da casa\n");
      scanf("%d", &conta.endereco.NumCasa);

      LimpaBuffer();
      printf("digite o Bairro\n");
      fgets(conta.endereco.Bairro, sizeof(conta.endereco.Bairro), stdin);

      LimpaBuffer();
      printf("digite a cidade\n");
      fgets(conta.endereco.Cidade, sizeof(conta.endereco.Cidade), stdin);

      LimpaBuffer();
      printf("digite o Estado: [DF - SP - RJ]\n");
      fgets(conta.endereco.estado, sizeof(conta.endereco.estado), stdin);

      printf("digite a a senha do cliente\n");
      scanf("d", &conta.Senha);

      break;
    case 2:

      break;
    case 3:
      Principal_Funcionario();
      break;
    default:
      break;
    }
  } while (1);
}

int MFuncionario_Encerramento() { Digite_Senha(Sub); }

void MFuncionario_Consulta() {
  printf("1 - Alterar conta\n2 - Alterar Funcionario\n3 - Alterar cliente\n4 - "
         "voltar");
}

void MFuncionario_CadastroNovoFuncionario() { Digite_Senha(Ger); }
