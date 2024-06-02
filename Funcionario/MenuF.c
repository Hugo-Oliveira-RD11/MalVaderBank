#include "MenuF.h"
#include "../DataBase/Data.h"
#include "../Menu.h"
#include "../Model/Models.h"
#include <stdio.h>

#define Sub 2 /* subgerente */
#define Ger 3 /* gerente */

int MFuncionario_Abertura();
int MFuncionario_Encerramento();
void MFuncionario_Consulta();
void MFuncionario_Alterar();
void MFuncionario_CadastroNovoFuncionario();
void MFuncionario_Relatorio();

void Principal_Funcionario() {

  int escolha = 0, verifica = 0;
  do {
    printf("1 - abertura de conta\n2 - encerramento de conta\n3 - consulta "
           "dados\n4 - alterar dados\n5 - cadastro de funcionarios\n6 - gerar "
           "relatorios\n7 - sair\n");

    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
      verifica = MFuncionario_Abertura();
      // colocar verificação (talvez)
      break;
    case 2:
      verifica = MFuncionario_Encerramento();
      break;
    case 3:
      MFuncionario_Consulta();
      break;
    case 4:
      MFuncionario_Alterar();
      break;
    case 5:
      MFuncionario_CadastroNovoFuncionario();
      break;
    case 6:
      MFuncionario_Relatorio();
      break;
    case 7:
      Menu_Principal();
      break;
    default:
      printf("Opção invalida");
      continue;
      break;
    }
  } while (1);
}

int MFuncionario_Abertura() {
  int escolha = 0;
  do {
    printf("1 - conta poupança - CP\n2 - conta corrente - CC\n3 - Voltar");
    scanf("%d", &escolha);
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

      Insere_arquivoCP(conta);
      break;
    case 2:

      Conta_Corrente conta2;

      printf("digite o agencia:\n");
      scanf("%d", &conta2.Agencia);

      printf("digite o limite da conta\n");
      scanf("%d", &conta2.Limite);

      printf("digite a data de vencimento do limite da conta\n");
      scanf("%d %d %d", &conta2.Vencimento.Dia, &conta2.Vencimento.Mes,
            &conta2.Vencimento.Ano);

      printf("digite a conta:\n");
      scanf("%d", &conta2.NumConta);

      printf("digite o cpf:\n");
      scanf("%d", &conta2.CPF);

      LimpaBuffer(); // chama o while para limpar o buffer, se não da o fgets n
                     // funciona.
      printf("digite a Nome:\n");
      fgets(conta2.Nome, sizeof(conta2.Nome), stdin);

      printf("digite o telefone\n");
      scanf("%d", &conta2.Telefone);

      printf("digite o cep\n");
      scanf("%d", &conta2.endereco.cep);

      printf("digite o numero da casa\n");
      scanf("%d", &conta2.endereco.NumCasa);

      LimpaBuffer();
      printf("digite o Bairro\n");
      fgets(conta2.endereco.Bairro, sizeof(conta2.endereco.Bairro), stdin);

      LimpaBuffer();
      printf("digite a cidade\n");
      fgets(conta2.endereco.Cidade, sizeof(conta2.endereco.Cidade), stdin);

      LimpaBuffer();
      printf("digite o Estado: [DF - SP - RJ]\n");
      fgets(conta2.endereco.estado, sizeof(conta2.endereco.estado), stdin);

      printf("digite a a senha do cliente\n");
      scanf("d", &conta2.Senha);

      Insere_arquivoCC(conta2);
      break;
    case 3:
      Principal_Funcionario();
      break;
    default:
      printf("Opcao invalida, digite um numero valido por favor.");
      continue;
      break;
    }
  } while (1);
}

int MFuncionario_Encerramento() { Digite_Senha(Sub); }

void MFuncionario_Consulta() {
  printf("1 - Alterar conta\n2 - Alterar Funcionario\n3 - Alterar cliente\n4 - "
         "voltar");
}

void MFuncionario_Alterar() { Digite_Senha(Sub); }

void MFuncionario_CadastroNovoFuncionario() { Digite_Senha(Ger); }

void MFuncionario_Relatorio() { Digite_Senha(Sub); }
