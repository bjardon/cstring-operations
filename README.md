# Operaciones con cadenas
Práctica 1 de Teoría Computacional: Operaciones con cadenas

# Estructura de librerías
Se construyó modularmente, permitiendo así la reutilización de código. A continuación se describen las dos librerías construidas para el desarrollo del proyecto: strings.h y menu.h

## string.h
Librería básica de manejo de cadenas.

### Dependencias
* stdlib

### Funciones

Inicialización de una cadena

	void str(string *);

Cálculo de la longitud de una cadena

	int str_length(string);

Copia de una cadena origen a una cadena destino

	void str_copy(string, string);

Concatenación de una cadena origen a una cadena destino

	void str_concat(string, string);

Extracción de un prefijo de longitud dada de una cadena origen a una cadena destino

	void str_prefix(string, string, int);

Extracción de un sufijo de longitud dada de una cadena origen a una cadena destino

	void str_suffix(string, string, int);

Extracción de una subcadena dadas las longitudes del prefijo y el sufijo a una cadena destino

	void str_substr(string, string, int, int);

Obtención de una subsecuencia

	void str_subseq(string, string, char [], int);

Inversión del orden de una cadena origen a una cadena destino

	void str_invert(string, string);

Verifica si una cadena es palindromo

	int str_ispalindrome(string);

Determina si un arreglo de n elementos contiene un elemento dado

	int arr_contains(char, char [], int);


## menu.h
Librería de control de menús

### Dependencias
* stdio
* string

### Funciones

Impresión de las opciones de un menu

	void menu_printoptions(string[], string, int);

Obtiene la respuesta de un menú

	int menu_getanswer();

Función de control de menú pricipal

	int menu_main();

Función de control de menú de concatenación

	int menu_concat();

Función de control de menú del prefijo

	int menu_prefix();

Función de control de menú del sufijo

	int menu_suffix();

Función de control de menú de subcadena

	int menu_substring();

Función de control de menú de susecuencia

	int menu_subseq();

Función de control de menú de inversión

	int menu_invert();

Función de control de menú de potencia

	int menu_power();

# Estructura del programa principal

Se diseñó modularmente también, para facilitar la resolución de problemas grandes atacando problemas chicos. Está compuesto de las siguientes funciones

*readstrings*

	void readstrings(string u, string v) {
	    printf("\nLECTURA DE CADENAS");
	    printf("\nEscriba la primera cadena (U): > ");
	    fflush(stdin);
	    scanf("%[^\n]s", u);
	    printf("Escriba la segunda cadena (V): > ");
	    fflush(stdin);
	    scanf("%[^\n]s", v);
	}

Lee dos cadenas desde stdin.

*showstrings*

	void showstrings(string u, string v) {
	    printf("\nCADENAS ACTUALES:");
	    printf("\nPrimera cadena (U): %s, longitud: %d", u, str_length(u));
	    printf("\nSegunda cadena (V): %s, longitud: %d\n", v, str_length(v));
	}

Muestra las cadenas actuales imprimiendo a stdout

*concatenation*

	void concatenation(string u, string v) {
	    string u1, v1, aux;
	    str(&u1);
	    str(&v1);
	    str(&aux);
	    while (1) {
	        str_copy(u1, u);
	        str_copy(v1, v);
	        switch (menu_concat()) {
	            case 1: {
	                printf("\nConcatenar AMBAS\n");
	                printf("\nCadenas originales:\n  %s\n  %s", u1, v1);
	                str_copy(aux, u1);
	                str_concat(u1, v1);
	                str_concat(v1, aux);
	                printf("\nResultado:\n  UV: %s\n  VU: %s\n", u1, v1);
	                break;
	            }
	            case 2: {
	                printf("\nConcatenar UV\n");
	                printf("\nCadenas originales:\n  %s\n  %s", u1, v1);
	                str_concat(u1, v1);
	                printf("\nResultado:\n  UV: %s\n", u1);
	                break;
	            }
	            case 3: {
	                printf("\nConcatenar VU\n");
	                printf("\nCadenas originales:\n  %s\n  %s", u1, v1);
	                str_concat(v1, u1);
	                printf("\nResultado:\n  UV: %s\n", v1);
	                break;
	            }
	            case 4: {
	                return;
	            }
	        }
	    }
	}

Se encarga de toda la interacción con el usuario para concatenar dos cadenas, así como de hacer la respectiva llamada a `str_concat`

De igual forma, para las demás operaciones