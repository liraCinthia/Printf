**Printf Project**

![image](https://github.com/user-attachments/assets/516268cf-9109-4aa2-a298-d89950a58c63)

Project developed at school 42 São Paulo.
The aim of this project is to recode the printf() function.
We mainly learned how to use a variable number of arguments, as well as gaining knowledge about: variable function, format string, token and parsing (the way a computer understands and processes the input of a symbol to convert it into a useful form).

To compile the program with:
```
git clone git@github.com:liraCinthia/Printf_42.git
```
You can create a main() to test.
Example:
```
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	ft_printf("function created:\n");
	ft_printf("%c\n", 'a');
	printf("original function:\n");
	printf("%c\n", 'a');
}
```
Next:
```
cc <files>.c
```
Example: 
```
cc ft_parsing.c ft_printf_utils.c ft_printf.c main.c
```
Run the compiled program:
```
./your_executable_file
Example:
./a.out
```

_____

Projeto desenvolvido na escola 42 São Paulo.
O objetivo deste projeto é recodificar a função printf().
Aprendemos principalmente a utilizar um número variável de argumentos, para além disso adquirirmos conhecimentos sobre: função variádica, string de formatação, token e parsing (é a forma como um computador entende e processa a entrada de um símbolo para convertê-lo em uma forma útil).

Para compilar o programa:
```
git clone git@github.com:liraCinthia/Printf_42.git
```
Você pode criar um main() para testar.
Exemplo:
```
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	ft_printf("function created:\n");
	ft_printf("%c\n", 'a');
	printf("original function:\n");
	printf("%c\n", 'a');
}
```
Próximo passo:
```
cc <arquivos>.c
```
Exemplo: 
```
cc ft_parsing.c ft_printf_utils.c ft_printf.c main.c
```
Execute o programa compilado:
```
./seu_arquivo_executável
```
Exemplo:
```
./a.out
```
