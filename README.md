# Jogo da Adivinhação em C++

Projeto desenvolvido durante meus estudos de **C++**, com o objetivo de praticar conceitos fundamentais da linguagem por meio da criação de um jogo de adivinhação com níveis de dificuldade e sistema de pontuação.

## Sobre o projeto

O jogo consiste em descobrir um número secreto gerado aleatoriamente pelo programa, entre 0 e 99.

Antes de começar, o jogador deve escolher um nível de dificuldade, que determina a quantidade de tentativas disponíveis.

A cada chute, o programa informa se o número digitado é maior ou menor que o número secreto. Além disso, o jogador começa com 1.000 pontos, que são descontados proporcionalmente à distância entre o chute e o número correto.

O jogo termina quando o jogador acerta o número secreto ou utiliza todas as tentativas disponíveis.

## Funcionalidades

- Geração aleatória de um número secreto entre 0 e 99.
- Três níveis de dificuldade.
- Quantidade de tentativas definida conforme a dificuldade escolhida.
- Indicação se o chute é maior ou menor que o número secreto.
- Contagem automática de tentativas.
- Sistema de pontuação inicial de 1.000 pontos.
- Desconto de pontos proporcional à distância entre o chute e o número secreto.
- Encerramento automático ao acertar o número ou atingir o limite de tentativas.
- Exibição da pontuação final e da quantidade de tentativas utilizadas em caso de vitória.

## Níveis de dificuldade

O jogador pode escolher entre três níveis:

| Dificuldade | Opção | Tentativas |
|---|---|---:|
| Fácil | F | 15 |
| Média | M | 10 |
| Difícil | D | 5 |

Quanto maior a dificuldade, menor será a quantidade de tentativas disponíveis para descobrir o número secreto.

## Sistema de pontuação

O jogador começa com **1.000 pontos**.

A cada tentativa, o programa calcula a distância entre o chute e o número secreto. Metade dessa distância é descontada da pontuação.

**Fórmula utilizada:**

```cpp
double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
pontos = pontos - pontos_perdidos;
```

**Exemplo:**

Considerando que o número secreto seja 42:

| Chute | Distância | Pontos descontados |
|---|---:|---:|
| 40 | 2 | 1 |
| 30 | 12 | 6 |
| 20 | 22 | 11 |
| 50 | 8 | 4 |

Quanto mais distante o chute estiver do número secreto, maior será o desconto de pontos.

## Conceitos de C++ praticados

- Variáveis e constantes.
- Tipos de dados (`int`, `bool`, `double` e `char`).
- Estruturas condicionais (`if`, `else if`, `else`).
- Estruturas de repetição (`for`).
- Entrada e saída de dados (`cin` e `cout`).
- Operadores aritméticos e relacionais.
- Função `abs()` para obter valores absolutos.
- Geração de números aleatórios com `rand()` e `srand()`.
- Utilização de `time(0)` para inicializar o gerador de números aleatórios.
- Interrupção de laços de repetição com `break`.
- Formatação de números decimais com `precision()` e `fixed`.

## Objetivo

Este projeto faz parte da minha jornada de aprendizado em programação e desenvolvimento de software. Através dele, pude praticar estruturas de controle, operações matemáticas, geração de números aleatórios e lógica de programação, aplicando os conceitos estudados na construção de um jogo interativo.

---

**Status:** Concluído

**Linguagem:** C++
