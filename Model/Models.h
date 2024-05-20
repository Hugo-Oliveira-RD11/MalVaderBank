#ifndef MODELS_H_
#define MODELS_H_

#define LIM 100
#define LimEstado 2

typedef enum { Gerente, funcionario } Cargo;

typedef struct {
  int cep;
  int NumCasa;
  char Bairro[LIM];
  char Cidade[LIM];
  char estado[LimEstado];
} Endereco;

typedef struct {
  int Dia;
  int Mes;
  int Ano;
} Data;

typedef struct {
  int Codigo;
  int CPF;
  char Nome[LIM];
  Data data;
  Endereco endereco;
  Cargo cargo;
  int Telefone;
  int Senha;
} Funcionario;

typedef struct {
  int Agencia;
  int Limite;
  Data Vencimento;
  int NumConta;
  char Nome[LIM];
  int CPF;
  Data data;
  int Telefone;
  Endereco endereco;
  int Senha;
} Conta_Corrente;

typedef struct {
  int Agencia;
  int NumConta;
  char Nome[LIM];
  int CPF;
  Data data;
  int Telefone;
  Endereco endereco;
  int Senha;
} Conta_Poupanca;

#endif // MODELS_H_
