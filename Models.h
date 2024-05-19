#ifndef MODELS_H_
#define MODELS_H_

#define LIM 100

typedef enum { Gerente, funcionario } Cargo;
typedef enum {
  AC,
  AL,
  AP,
  AM,
  BA,
  CE,
  DF,
  ES,
  GO,
  MA,
  MT,
  MG,
  PA,
  PB,
  PR,
  PE,
  PI,
  RJ,
  RN,
  RS,
  RO,
  RR,
  SC,
  SP,
  SE,
  TO
} Estado;

typedef struct {
  int cep;
  int NumCasa;
  char Bairro[LIM];
  char Cidade[LIM];
  Estado estado;
} Endereco;

typedef struct {
  int Dia;
  int Mes;
  int Ano;
} Data;

struct Funcionario {
  int Codigo;
  int CPF;
  char Nome[LIM];
  Data data;
  Endereco endereco;
  Cargo cargo;
  int Telefone;
  int Senha;
};

struct Conta_Corrente {
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
};

struct Conta_Poupanca {
  int Agencia;
  int NumConta;
  char Nome[LIM];
  int CPF;
  Data data;
  int Telefone;
  Endereco endereco;
  int Senha;
};

#endif // MODELS_H_
