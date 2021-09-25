#include "OperacionesMat.h"
#include "Auxiliares.h"
#include "Menu.h"

float SumarOperandos(float operandoUno, float operandoDos) {
	float suma;
	suma = operandoUno + operandoDos;
	return suma;
}

float RestarOperandos(float operandoUno, float operandoDos) {
	float resta;
	resta = operandoUno - operandoDos;
	return resta;
}

int DividirOperandos(float operandoUno, float operandoDos, float *refDivision) {
	float dividir;
	float resultadoDeDivision;
	dividir = 0;

	if (operandoDos == 0) {
		dividir = 1;
	} else {
		resultadoDeDivision = operandoUno / operandoDos;
	}

	*refDivision = resultadoDeDivision;
	return dividir;
}

float MultiplicarOperandos(float operandoUno, float operandoDos) {
	float multiplicar;
	multiplicar = operandoUno * operandoDos;
	return multiplicar;
}

int CalcularFactorial(float numeroIngresado, int *refFactorial) {
	int retorno;
	int validacionEntero;
	int validacionSigno;
	int numeroEntero;
	int i;
	int fact = 1;
	fact = 1;
	retorno = 0;

	validacionEntero = ValidarSiEsEntero(numeroIngresado);
	validacionSigno = ValidarSigno(numeroIngresado);

	if (validacionEntero == 1 && validacionSigno == 1) {
		numeroEntero=numeroIngresado;
		if (numeroEntero == 0 || numeroEntero == 1) {
			fact = 1;
			retorno = 1;

		} else {

			for (i = numeroEntero; i > 1; i--) {
				fact = fact * i;
				retorno = 1;
			}
		}
	}

	*refFactorial = fact;

	return retorno;
}
