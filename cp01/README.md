![alt text](image-1.png)

# C++ Module 01

## Sumário
Este repositório contém os exercícios do Módulo 01 dos módulos de C++. Os exercícios abordam alocação de memória, ponteiros para membros, referências e a instrução `switch`.

## Regras Gerais

- Compilar o código com `c++` e as flags `-Wall -Wextra -Werror`.
- O código deve compilar com a flag `-std=c++98`.
- Utilize convenções de nomenclatura e formatação descritas nas diretrizes.
- É permitido usar quase tudo da biblioteca padrão, exceto as funções proibidas listadas.
- Evite vazamentos de memória.
- Os exercícios de módulos subsequentes devem seguir o Formato Canônico Ortodoxo, a menos que especificado de outra forma.
- Funções implementadas em arquivos header (exceto templates) resultam em nota 0.

## Exercícios

### Exercício 00: BraiiiiiiinnnzzzZ
**Objetivo:**  
Criar uma classe `Zombie` que possui um atributo privado `name` do tipo `string` e uma função membro `announce()` que imprime uma mensagem no formato:

Implementar duas funções:
- `Zombie* newZombie(std::string name);`
- `void randomChump(std::string name);`

**Requisitos:**  
Destruir os zumbis quando não forem mais necessários. O destruidor deve imprimir uma mensagem de depuração com o nome do zumbi.
 

### Exercício 01: Moar brainz!
**Objetivo:**  
Implementar a função `Zombie* zombieHorde(int N, std::string name);` que aloca N objetos `Zombie` de uma vez no heap e inicializa cada um com o nome fornecido.

**Requisitos:**  
Testar a função e garantir que cada zumbi chame sua função `announce()` corretamente. Deletar todos os zumbis e verificar vazamentos de memória.


### Exercício 02: HI THIS IS BRAIN
**Objetivo:**  
Escrever um programa que contenha:
- Uma variável `string` inicializada com "HI THIS IS BRAIN".
- Um ponteiro `stringPTR` para a string.
- Uma referência `stringREF` para a string.

**Requisitos:**  
O programa deve imprimir os endereços de memória e os valores correspondentes.


### Exercício 03: Unnecessary violence
**Objetivo:**  
Implementar uma classe `Weapon` e duas classes `HumanA` e `HumanB`, cada uma com um nome e uma arma, e uma função membro `attack()`.

**Requisitos:**  
- `HumanA` recebe a arma no construtor.
- `HumanB` não recebe a arma no construtor e pode não ter uma arma.

### Exercício 04: Sed is for losers
**Objetivo:**  
Criar um programa que substitui todas as ocorrências de `s1` por `s2` no conteúdo de um arquivo e salva em `<filename>.replace`.

**Requisitos:**  
Não usar `std::string::replace`. Utilizar outras funções da classe `std::string`.

 
### Exercício 05: Harl 2.0
**Objetivo:**  
Implementar uma classe `Harl` com funções membro privadas e uma função pública `complain` que chama a função apropriada dependendo do nível passado como parâmetro.

**Requisitos:**  
Utilizar ponteiros para funções membro em vez de `if/else`.


### Exercício 06: Harl filter
**Objetivo:**  
Implementar um filtro para as mensagens de `Harl` baseado no nível de log passado como parâmetro.

**Requisitos:**  
Utilizar a instrução `switch`.

 