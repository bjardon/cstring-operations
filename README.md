# operaciones-cadenas
Práctica 1 de Teoría Computacional: Operaciones con cadenas 

## string.h
Librería básica de manejo de cadenas.

### Dependencias
* stdlib

### Funciones

* Inicialización de una cadena
	void str(string *);
* Cálculo de la longitud de una cadena
	int str_length(string);
* Copia de una cadena origen a una cadena destino
	void str_copy(string, string);
* Concatenación de una cadena origen a una cadena destino
	void str_concat(string, string);
* Extracción de un prefijo de longitud dada de una cadena origen a una cadena destino
	void str_prefix(string, string, int);
* Extracción de un sufijo de longitud dada de una cadena origen a una cadena destino
	void str_suffix(string, string, int);
* Extracción de una subcadena dadas las longitudes del prefijo y el sufijo a una cadena destino
	void str_substr(string, string, int, int);
* Obtención de una subsecuencia
	void str_subseq(string, string, char [], int);
* Inversión del orden de una cadena origen a una cadena destino
	void str_invert(string, string);
* Verifica si una cadena es palindromo
	int str_ispalindrome(string);
* Determina si un arreglo de n elementos contiene un elemento dado
	int arr_contains(char, char [], int);

## menu.h
Librería de control de menús

### Dependencias
* stdio
* string

### Funciones

* Impresión de las opciones de un menu
	void menu_printoptions(string[], string, int);
* Obtiene la respuesta de un menú
	int menu_getanswer();
* Función de control de menú pricipal
	int menu_main();
* Función de control de menú de concatenación
	int menu_concat();
* Función de control de menú del prefijo
	int menu_prefix();
* Función de control de menú del sufijo
	int menu_suffix();
* Función de control de menú de subcadena
	int menu_substring();
* Función de control de menú de susecuencia
	int menu_subseq();
* Función de control de menú de inversión
	int menu_invert();
* Función de control de menú de potencia
	int menu_power();
