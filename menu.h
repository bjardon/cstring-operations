/**
 *  MENU.H
 *
 *  Librería de control de menús
 *
 *  Autor: Jardón Fonseca Bruno
 *  https://github.com/bjardon
 *
 */

#ifndef PRACTICA01_MANEJOCADENAS_MENU_H
#define PRACTICA01_MANEJOCADENAS_MENU_H

    /** DEPENDENCIAS **/

// Requerido para la impresión a stdout
#include <stdio.h>
// Requerido por el alias de string
#include "string.h"

    /** PROTOTIPOS **/

// Impresión de las opciones de un menu
void menu_printoptions(string[], string, int);
// Obtiene la respuesta de un menú
int menu_getanswer();
// Función de control de menú pricipal
int menu_main();
// Función de control de menú de concatenación
int menu_concat();
// Función de control de menú del prefijo
int menu_prefix();
// Función de control de menú del sufijo
int menu_suffix();
// Función de control de menú de subcadena
int menu_substring();
// Función de control de menú de susecuencia
int menu_subseq();
// Función de control de menú de inversión
int menu_invert();
// Función de control de menú de potencia
int menu_power();

    /** DEFINICIÓN DE FUNCIONES **/

/**
 * Impresión de las opciones de un menú
 *
 * Recibe:
 *  options [strings]:
 *   Arreglo de los nombres de las opciones que se imprimen
 *
 * Retorna:
 *  [void]
 */
void menu_printoptions(string options[], string title, int opt_len) {
    printf("\nMENU %s:", title);
    for (int i = 0; i < opt_len; ++i) {
        printf("\n%0d: %s", (i + 1), options[i]);
    }
}

/**
 * Obtiene la respuesta de un menú
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_getanswer() {
    string ans;
    str(&ans);
    fflush(stdin);
    printf("\nSu respuesta: >  ");
    scanf("%[^\n]s", ans);
    return atoi(ans);
}

/**
 * Valida la respuesta obtenida
 *
 * Recibe:
 *  ans [int]:
 *   Respuesta obtenida
 *  max [int]:
 *   Valor máximo permitido
 *
 * Retorna:
 *  [int]:
 *   1 si es válido, 0 de otra forma
 */
int menu_validateanswer(int ans, int max) {
    if(ans > 0 && ans <= max)
        return 1;
    printf("\n>> ERROR: Respuesta invalida!");
    return 0;
}

/**
 * Función de control de menú pricipal
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_main() {
    int ans;
    string options[] = {
            "Leer cadenas de nuevo",
            "Ver cadenas actuales",
            "Concatenar de cadenas",
            "Obtener un prefijo",
            "Obtener un sufijo",
            "Obtener una subcadena",
            "Obtener una subsecuencia",
            "Obtener la inversa",
            "Obtener la potencia",
            "Salir"
    };
    do {
        menu_printoptions(options, "PRINCIPAL", 10);
        ans = menu_getanswer();
    } while (!menu_validateanswer(ans, 10));
    return ans;
}

/**
 * Función de control de menú de concatenación
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_concat() {
    int ans;
    string options[] = {
            "Concatenar AMBAS",
            "Concatenar UV",
            "Concatenar VU",
            "Regresar"
    };
    do {
        menu_printoptions(options, "CONCATENACION", 4);
        ans = menu_getanswer();
    } while (!menu_validateanswer(ans, 4));
    return ans;
}

/**
 * Función de control de menú del prefijo
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_prefix() {
    int ans;
    string options[] = {
            "Prefijo de AMBAS",
            "Prefijo de U",
            "Prefijo de V",
            "Volver"
    };
    do {
        menu_printoptions(options, "PREFIJO", 4);
        ans = menu_getanswer();
    } while (!menu_validateanswer(ans, 4));
    return ans;
}

/**
 * Función de control de menú del sufijo
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_suffix() {
    int ans;
    string options[] = {
            "Sufijo de AMBAS",
            "Sufijo de U",
            "Sufijo de V",
            "Volver"
    };
    do {
        menu_printoptions(options, "SUFIJO", 4);
        ans = menu_getanswer();
    } while (!menu_validateanswer(ans, 4));
    return ans;
}

/**
 * Función de control de menú de subcadena
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_substring() {
    int ans;
    string options[] = {
            "Subcadena de AMBAS",
            "Subcadena de U",
            "Subcadena de V",
            "Volver"
    };
    do {
        menu_printoptions(options, "SUBCADENA", 4);
        ans = menu_getanswer();
    } while (!menu_validateanswer(ans, 4));
    return ans;
}

/**
 * Función de control de menú de subsecuencia
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_subseq() {
    int ans;
    string options[] = {
            "Quitar caracteres a AMBAS",
            "Quitar caracteres a U",
            "Quitar caracteres a V",
            "Volver"
    };
    do {
        menu_printoptions(options, "SUBSECUENCIA", 4);
        ans = menu_getanswer();
    } while (!menu_validateanswer(ans, 7));
    return ans;
}

/**
 * Función de control de menú de inversión
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_invert() {
    int ans;
    string options[] = {
            "Invertir AMBAS",
            "Invertir U",
            "Invertir V",
            "Volver"
    };
    do {
        menu_printoptions(options, "INVERSION", 4);
        ans = menu_getanswer();
    } while (!menu_validateanswer(ans, 4));
    return ans;
}

/**
 * Función de control de menú de potencia
 *
 * Recibe:
 *  [void]
 *
 * Retorna:
 *  [int]:
 *   Número de la respuesta que se introdujo
 */
int menu_power() {
    int ans;
    string options[] = {
            "Elevar AMBAS^n",
            "Elevar U^n",
            "Elevar V^n",
            "Volver"
    };
    do {
        menu_printoptions(options, "POTENCIA", 4);
        ans = menu_getanswer();
    } while (!menu_validateanswer(ans, 4));
    return ans;
}

#endif //PRACTICA01_MANEJOCADENAS_MENU_H
