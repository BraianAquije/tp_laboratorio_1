

#ifndef OPERACIONESMAT_H_
#define OPERACIONESMAT_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/// @fn float SumarOperandos(float, float)
/// @brief suma los numeros ingresados
/// @param operandoUno recibe primer numero ingresado en float
/// @param operandoDos recibe segundo numero ingresado en float
/// @return retorna el resultado de la suma
float SumarOperandos(float operandoUno, float operandoDos);

/// @fn float RestarOperandos(float, float)
/// @brief resta los numeros ingresado
/// @param operandoUno recibe primer numero ingresado en float
/// @param operandoDos recibe segundo numero ingresado en float
/// @return retorna el resultado de la resta
float RestarOperandos(float operandoUno, float operandoDos);

/// @fn int DividirOperandos(float, float, float*)
/// @brief divide los numeros ingresado
/// @param operandoUno recibe primer numero ingresado en float
/// @param operandoDos recibe segundo numero ingresado en float
/// @param refDivision devuelve el resultado de la division como referencia
/// @return retorna el resultado de la validación, si es divisible o no
int DividirOperandos(float operandoUno, float operandoDos, float *refDivision);

/// @fn float MultiplicarOperandos(float, float)
/// @brief multiplica los numeros ingresados
///
/// @param operandoUno recibe primer numero ingresado en float
/// @param operandoDos recibe segundo numero ingresado en float
/// @return retorna el resultado de la multiplicacion
float MultiplicarOperandos(float operandoUno, float operandoDos);

/// @fn int CalcularFactorial(float, int*)
/// @brief calcula el factorial de los numeros ingresados
/// @param numeroIngresado recibe uno de los operandos para calcular el factorial
/// @param refFactorial devuelve el resultado del factorial por referencia
/// @return retorna la validacion si se puede hacer el factorial de dicho numero
int CalcularFactorial(float numeroIngresado, int *refFactorial);


#endif /* OPERACIONESMAT_H_ */
