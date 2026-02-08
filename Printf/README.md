# *Este proyecto ha sido creado como parte del currículo de 42 por jezambra.*

# Descripción
El proyecto **ft_printf** consiste en recrear la función `printf` de la biblioteca estándar de C `stdio.h`, el objetivo principal es profundizar en el conocimiento de las **funciones variádicas** en C las cuales son `va_list`, `va_start`, `va_arg`, `va_end`, el manejo de argumentos variables mediante macros y la conversión eficiente de diversos tipos de datos a formato de texto.

Así mismo, mejorar en el control de errores para el trabajo futuro y saber porque falla el código, porque se satura la ram, etc...

La función desarrollada es capaz de procesar una cadena de formato y un número indeterminado de argumentos, devolviendo el número total de caracteres impresos, tal como lo hace la función original, el prototipo de nuetra fune es:
<br><br><br>

       int ft_printf(char const *, ...)
<br>

### Conversiones implementadas

* `%c`: Imprime un carácter.
* `%%`: Imprime el símbolo de porcentaje.
* `%s`: Imprime una cadena de caracteres.
* `%d` e `%i`:Imprime números enteros con signo.
* `%u`:Imprime un número decimales sin signo.
* `%x` y `%X`:Imprime un número hexadecimal en minúsculas y mayúsculas.
* `%p`: Imprime una dirección de memoria en formato hexadecimal.

 
<br><br><br>

# Instrucciones


### Compilación
Para compilar la librería ejecuta el comando `make`.

El `Makefile` ha sido configurado para compilar los archivos fuente y generar la librería.

Esto generará el archivo `libftprintf.a`. Puedes limpiar los archivos objetos con `make clean` o realizar una limpieza total (objetos y librería.a) con `make fclean`.

### Ejecución

Para integrar `ft_printf` en tus propios programas:

Incluye el encabezado en tu código que seria `#include "ft_printf.h"`.

Compila tu archivo fuente vinculando la librería estática generada:

<br>

    cc main.c libftprintf.a -o my_ft_printf
<br>
O con las respectivas flags.

<br>

    cc -Wall -Wextra -Werror main.c libftprintf.a -o my_ft_printf
<br>

# Algoritmo y Estructura de Datos

## Algoritmo

La función `ft_printf` procesa la cadena de formato de manera secuencial, recorriéndola carácter por carácter, cuando se encuentra el símbolo `%`, la función identifica el especificador de conversión correspondiente y obtiene el argumento asociado mediante el uso de las  funciones variádicas `va_list, va_start, va_arg y va_end`.

### Justificación

* No requiere estructuras de datos complejas ni asignación dinámica de memoria.
* Permite un control claro del programa.
* Facilita la extensibilidad, ya que nuevos formatos pueden añadirse sin modificar la lógica principal del algoritmo.

Este diseño prioriza la simplicidad, la eficiencia y la legibilidad del código.

## Estructura de Datos

El proyecto adopta una arquitectura modular, donde cada componente tiene una responsabilidad bien definida.

### Componentes principales

Función principal `ft_printf` inicializa y libera la lista de argumentos variádicos `va_list`, recorre la cadena de formato y detecta el carácter `%`, delegada la conversión al parser correspondiente y acumula el número total de caracteres impresos;

Parser de formato `types`, identifica el especificador de conversión `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X` o `%p` y llama a la función de conversión adecuada según el tipo

### Funciones de conversión

* `ft_printf_chr.c` = manejo de `%c`.
* `ft_printf_str.c` = manejo de `%s`.
* `ft_printf_nbr.c` = manejo de `%d` e `%i`.
* `ft_printf_unsig.c` = manejo de `%u`.
* `ft_printf_hexa.c` = manejo de `%x` y `%X`.
* `ft_printf_ptr.c` = manejo de `%p`.


### Justificación de la Estructura

La separación en funciones especializadas aporta las siguientes ventajas:

* Código más limpio, mejor entendimiento y mantenible.
* Facilidad para testear, permitiendo probar cada conversión de forma independiente.
* Reutilización de código, como en el caso de `%d` e `%i` al igual que `%x` y `%X`, que comparten la misma lógica

Esta organización mejora la comprensión del proyecto y que a futuro se puedan añadir nuevos formatos o refactorizaciones.


### Control de errores

Si el formato (format) es NULL, **ft_printf devuelve -1**, los formatos no soportados pueden ser ignorados o provocar error en este caso **return -1**, los casos **NULL en %s y %p** están controlados dentro de sus funciones correspondientes.

Al igual que comparar el comportamineto y  valor de retorno de la funcion origuinal `printf()`.

## Recursos

### Referencias:

`Man printf(3)` manual oficial de Linux para entender el comportamiento y los valores de retorno;

El **Peer-to-Peer** en el campus de 42Madrid;

Tutoriales de youtube para la comprension de las funciones variadicas **https://www.youtube.com/watch?v=yPrOq2Io4D8**



### Uso de IA

* En el desarrollo de este proyecto se ha utilizado IA, para la comprension de las funciones variadicas y su correcto uso.
* Comprender situaciones limite que pueden provocar errores criticos.
