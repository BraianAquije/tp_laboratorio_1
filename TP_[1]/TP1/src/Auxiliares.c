#include "OperacionesMat.h"
#include "Auxiliares.h"
#include "Menu.h"

float PedirOperando(void) {

	char operando[20];
	int validarNumero;
	float numeroFlotante;
	printf("\tIngrese un numero: ");
	fflush(stdin);
	scanf("%s", operando);

	validarNumero = ValidarNumero(operando, &numeroFlotante);

	while (validarNumero == 0) {
		printf("\tERROR! No ingresó un numero: ");
		fflush(stdin);
		scanf("%s", operando);
		validarNumero = ValidarNumero(operando, &numeroFlotante);
	}

	return numeroFlotante;
}

int ValidarNumero(char operando[20], float *refFlotante) {

	int esUnNumero;
	float num;
	esUnNumero = 0;

	num = atof(operando);

	if (num != 0) {
		esUnNumero = 1;
		*refFlotante = num;
	}

	return esUnNumero;
}


int ValidarSiEsEntero(float numeroIngresado) {

	int validacionDeEntero;

	float resultado;
	int numeroEntero;
	validacionDeEntero = 1;

	numeroEntero = numeroIngresado;
	resultado = numeroIngresado - numeroEntero;

	if (resultado > 0) {
		validacionDeEntero = 0;
	}
	return validacionDeEntero;
}

int ValidarSigno(float numeroIngresado) {
	int esPositivo;
	esPositivo = 0;

	if (numeroIngresado >= 0) {
		esPositivo = 1;
	}
	return esPositivo;
}

void MostrarResultados(float primerOperando, float segundoOperando, float suma,
		float resta, float multiplicar) {
	printf("\tEl resultado de la suma %.2f + %.2f es: %.2f\n", primerOperando,
			segundoOperando, suma);
	printf("\tEl resultado de la resta %.2f - %.2f es: %.2f\n", primerOperando,
			segundoOperando, resta);

	printf("\tEl resultado de la multiplicacion %.2f * %.2f es: %.2f\n",
			primerOperando, segundoOperando, multiplicar);

}

void MostrarDivision(float primerOperando, float segundoOperando, float dividir,
		float refDividir) {
	if (dividir == 1) {
		printf("\tNo se puede dividir por 0\n\n");
	} else {
		printf("\tEl resultado de la division %.2f / %.2f es: %.2f\n",
				primerOperando, segundoOperando, refDividir);
	}
}

void MostrarFactorial(float primerOperando, float segundoOperando,
		int RetornoFactorialUno, int retornoFactorialDos, int refFactorialUno,
		int refFactorialDos) {

	int primerOperandoInt;
	int segundoOperandoInt;

	primerOperandoInt = primerOperando;
	segundoOperandoInt = segundoOperando;

	if (RetornoFactorialUno == 1 && retornoFactorialDos == 1) {
		printf("\tEl factorial de %.d es: %d y El factorial de %.d es: %d\n\n",
				primerOperandoInt, refFactorialUno, segundoOperandoInt,
				refFactorialDos);
	} else {
		if (RetornoFactorialUno == 0 && retornoFactorialDos == 1) {
			printf(
					"\tEl factorial de %.2f no es posible calcularlo y El factorial de %.d es: %d\n\n",
					primerOperando, segundoOperandoInt, refFactorialDos);
		} else {
			if (RetornoFactorialUno == 1 && retornoFactorialDos == 0) {
				printf(
						"\tEl factorial de %d es: %d y El factorial de %.2f no es posible calcularlo\n\n",
						primerOperandoInt, refFactorialUno, segundoOperando);
			} else {
				if (RetornoFactorialUno == 0 && retornoFactorialDos == 0) {
					printf(
							"\tEl factorial de %.2f  y El factorial de %.2f no son posible calcularlos\n\n",
							primerOperando, segundoOperando);
				}
			}
		}
	}
}
