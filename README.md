# Jogo da Adivinhação em C++

Projeto desenvolvido durante meus estudos de **C++**, com o objetivo de praticar conceitos fundamentais da linguagem por meio da criação de um jogo de adivinhação com sistema de pontuação.

## Sobre o projeto

O jogo consiste em descobrir um número secreto definido no código. A cada tentativa, o programa informa se o número digitado é maior ou menor que o número secreto.

Além de contar as tentativas, o jogo possui um sistema de pontuação: o jogador começa com 1.000 pontos e perde pontos de acordo com a distância entre o número digitado e o número secreto.

O objetivo é acertar o número utilizando o menor número de tentativas e mantendo a maior pontuação possível.

## Funcionalidades

- Número secreto definido no código (`42`).
- Leitura de números digitados pelo usuário.
- Indicação se o chute é maior ou menor que o número secreto.
- Contagem automática de tentativas.
- Sistema de pontuação inicial de 1.000 pontos.
- Desconto de pontos proporcional à distância entre o chute e o número secreto.
- Exibição da pontuação final com duas casas decimais.

## Sistema de pontuação

O jogador começa com **1.000 pontos**.

A cada tentativa, o programa calcula a distância entre o número digitado e o número secreto. Metade dessa distância é descontada da pontuação.

**Fórmula utilizada:**

```cpp
double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
pontos = pontos - pontos_perdidos;
```

Quanto mais distante o chute estiver do número secreto, maior será o desconto de pontos.

**Exemplo:**

Considerando que o número secreto seja 42:

| Chute | Distância | Pontos descontados |
|---|---:|---:|
| 40 | 2 | 1 |
| 30 | 12 | 6 |
| 20 | 22 | 11 |
| 50 | 8 | 4 |

## Conceitos de C++ praticados

- Variáveis e constantes.
- Tipos de dados (`int`, `bool` e `double`).
- Estruturas condicionais (`if`, `else if`).
- Estrutura de repetição (`while`).
- Entrada e saída de dados (`cin` e `cout`).
- Operadores aritméticos e relacionais.
- Função `abs()` para obter valores absolutos.
- Formatação de números decimais com `precision()` e `fixed`.

## Objetivo

Este projeto faz parte da minha jornada de aprendizado em programação e desenvolvimento de software, permitindo aplicar conceitos fundamentais de C++ na construção de um programa interativo.

---

**Status:** Em andamento 

**Linguagem:** C++
