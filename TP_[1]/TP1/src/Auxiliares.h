#ifndef AUXILIARES_H_
#define AUXILIARES_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/// @fn float PedirOperando(void)
/// @brief Pide los operando
///
/// @return devuelve un operando en float
float PedirOperando(void);

/// @fn int ValidarNumero(char[], float*)
/// @brief valida si lo que ingreso el usuario es un numero
///
/// @param operando recibe el valor ingresado
/// @param refFlotante si el numero es valido lo devuelve por referencia
/// @return retorna la validacion si el valor ingresado es correcto o no
int ValidarNumero(char operando[20], float *refFlotante);

/// @fn int ValidarSiEsEntero(float)
/// @brief valida si el numero ingresado en float es un entero,
///
/// @param numeroIngresado recibe el numero ingresado por el usuario
/// @return retorna la validez del resultado, 1 o 0
int ValidarSiEsEntero(float numeroIngresado);

/// @fn int ValidarSigno(float)
/// @brief valida si el numero ingresado por el usuario es positivo o negativo
///
/// @param numeroIngresado recibe el numero ingresado por el usuario
/// @return retorna la validez del resultado, 1 o 0
int ValidarSigno(float numeroIngresado);

/// @fn void MostrarResultados(float, float, float, float, float)
/// @brief muestra los resultados de los calculos, suma, resta y multiplicacion
///
/// @param primerOperando recibe el primer numero ingresado por el usuario
/// @param segundoOperando recibe el segundo numero ingresado por el usuario
/// @param suma resultado de la suma entre operandos
/// @param resta resultado de la resta entre operandos
/// @param multiplicar resultado multiplicacion de los operandos
void MostrarResultados(float primerOperando, float segundoOperando, float suma,
		float resta, float multiplicar);

/// @fn void MostrarDivision(float, float, float, float)
/// @brief muestra el resultado de la division
///
/// @param primerOperando recibe el primer numero ingresado por el usuario
/// @param segundoOperando  recibe el segundo numero ingresado por el usuario
/// @param dividir validacion de si son numeros divisibles o no
/// @param refDividir referencia de resultado de la division
void MostrarDivision(float primerOperando, float segundoOperando, float dividir,
		float refDividir);


/// @fn void MostrarFactorial(float, float, int, int, int, int)
/// @brief muestra el resultado del factorial
///
/// @param primerOperando recibe el primer numero ingresado por el usuario
/// @param segundoOperando
/// @param retornoFactorialUno recibe el retorno de validez 1 o 0 del primer operando ingresado. Si se puede factoriar o no
/// @param retornoFactorialDos recibe el retorno de validez 1 o 0 del segundo operando ingresado. Si se puede factoriar o no
/// @param refFactorialUno recibe el resultado por referencia del factorial del operando 1
/// @param refFactorialDos recibe el resultado por referencia del factorial del operando 2
void MostrarFactorial(float primerOperando, float segundoOperando,
		int retornoFactorialUno, int retornoFactorialDos, int refFactorialUno,
		int refFactorialDos);

#endif /* AUXILIARES_H_ */
