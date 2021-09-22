Lista de exercicios desenvolvidos no curso de Sistemas de Informacao da Unipar
Disciplina: Algoritmos e Fundamentos de Programação de Computadores
Professor: Elyssandro Piffer
Instruções:
Os exercícios devem ser desenvolvidos em linguagem C.

Exercícios com estrutura sequencial
1) Encontrar e apresentar o valor para Z aplicando a seguinte fórmula: Z = (L + A * 2.3) / C

Exercícios com estrutura de decisão simples e/ou composta
2) Faça um algoritmo que tendo como dados de entrada a altura e o sexo de uma pessoa (digite “M” para Masculino e “F” para Feminino), calcule o peso ideal dessa pessoa, utilizando-se das seguintes fórmulas:
- Para sexo Masculino: peso_i = (450.7 * altura) / 10
- Para sexo Feminino: peso_i = (400.7 * altura) / 10

Exercícios com estruturas de repetição
3) Utilizando a estrutura de repetição while, leia 20 valores reais e escreva a somatória.
4) Utilizando a estrutura de repetição do-while, com base na fórmula [ area = (base * altura) / 2 ], faça um algoritmo para ler a base e a altura de um triângulo. Ao término do processamento imprima a área calculada. Execute este algoritmo 6 vezes.

Exercícios com estrutura de decisão múltipla escolha
5) Elabore um algoritmo que monte um menu com as seguintes opções:
1 – Exercício 1
2 – Exercício 2
3 – Exercício 3
4 – Fim
Se o usuário executar a opção 1, o algoritmo deve executar o exercício 1 desta lista.
Se o usuário executar a opção 2, o algoritmo deve executar o exercício 2 desta lista.
Se o usuário executar a opção 3, o algoritmo deve executar o exercício 3 desta lista.
Se o usuário executar a opção 4, o algoritmo deve finalizar a execução do algoritmo com a mensagem, “Fim de execução”.
Caso seja informado um número diferente de 1, 2, 3 e 4, o algoritmo deve emitir a mensagem de opção inválida.

6) Utilizando a estrutura de repetição for, calcule a conversão de graus Fahrenheit para Celsius através da fórmula [ C = (5/9) * (F-32) ]. Onde a variável F da fórmula significa “Fahrenheit” e a variável C significa “Celsius”. Escreva um algoritmo que calcule uma tabela de graus Celsius em função de graus Fahrenheit que variem de 40 até 60.
Exercícios com variáveis homogêneas

7) Solicitando ao usuário 10 valores maiores que zero (bloquear com estrutura de repetição), os quais devem ser armazenados num único vetor, apresente o maior, o menor e as posições em que os mesmos foram informados.

8) Faça a entrada dos valores para uma matriz de tamanho (4x5) de valores inteiros. Em seguida, encontre e imprima a somatória de cada uma das colunas da matriz. Ao final, imprima também a somatória de todas as colunas.
Exercícios com variável heterogênea

9) Desenvolva um algoritmo que crie uma variável do tipo struct com os seguintes dados (relativos a 5 clientes): código, nome, endereço, data de nascimento (deve ser um vetor de 3 posições onde armazene dia na primeira posição, mês na segunda e ano na terceira), sexo, valor total devido, valor total em crédito, idade e status do cadastro (ativo ou inativo). Quando o usuário executar o algoritmo, o mesmo deve cadastrar os clientes e ao término dos cadastros, deve emitir um relatório com os dados dos clientes cadastrados. Antes da finalização do algoritmo, deve ser emitida uma mensagem perguntando ao usuário se ele deseja executar o algoritmo novamente, em caso afirmativo o algoritmo deve ser executado novamente, em caso negativo, deve ser emitida uma mensagem alertando o usuário do final de execução do algoritmo.

Exercícios com modularização
10) Faça um algoritmo onde no programa principal será feita a chamada a uma FUNÇÃO onde será feita a leitura de 4 notas e o cálculo da média, em seguida, imprima as quatro notas e a média. Feito isso, volte ao programa principal, retornando a média encontrada, chame uma segunda FUNÇÃO levando a média como parâmetro e já dentro da função diga se o aluno está ou não aprovado (média para aprovação 6.0). Após isso, volte ao programa principal e emita uma mensagem dizendo se “deseja fazer novo cálculo S/N”, se a resposta for “N” encerre o programa, caso contrário, faça novo cálculo.