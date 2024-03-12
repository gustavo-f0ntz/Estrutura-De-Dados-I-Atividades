#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct ContaBancaria ContaBancaria;

ContaBancaria *criarConta(char nomeTitular[], int numeroConta, float saldoInicial);

void depositar(ContaBancaria *conta, float valor);

void transferir(ContaBancaria *contaOrigem, ContaBancaria *contaDestino, float valor);

float consultarSaldo(ContaBancaria *conta);

void excluirConta(ContaBancaria *conta);

#endif 


