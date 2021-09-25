#include "OperacionesMat.h"
#include "Auxiliares.h"
#include "Menu.h"

void EntrarAlMenu(void) {
	int ingresarOpcion;
	char inicialA[20] = { 'x' };
	char inicialB[20] = { 'y' };
	float operandoUno = 0000;
	float operandoDos = 0000;
	float respuestaSuma;
	float respuestaResta;
	int respuestaDividir;
	float refDivision;
	int flagIngresoOperandoUno;
	int flagIngresoOperandoDos;
	int flagNoSeHicieronCalculos;
	float respuestaMultiplicar;
	int factorialPrimerOperando;
	int factorialSegundoOperando;
	int refFactorialUno;
	int refFactorialDos;
	char respuesta = 's';
	flagIngresoOperandoUno = 0;
	flagIngresoOperandoDos = 0;
	flagNoSeHicieronCalculos = 0;

	printf("BIENVENIDO\n\n");

	while (respuesta == 's') {
		printf("1-Ingrese primer operando\t (A= %s)\n", inicialA);
		printf("2-Ingrese segundo operando\t (B= %s)\n", inicialB);
		printf("3-Calcular todas las operaciones\n");
		printf("4-Informar resultados\n");
		printf("5-Salir\n");

		printf("\n\tIngrese una opción: ");
		scanf("%d", &ingresarOpcion);

		switch (ingresarOpcion) {
		case 1:
			printf("\tHA SELECCIONADO LA OPCION 1\n");
			operandoUno = PedirOperando();
			printf("\tUsted ha ingresado el numero %.2f\n\n", operandoUno);
			sprintf(inicialA, "%.2f", operandoUno);
			flagIngresoOperandoUno = 1;
			break;
		case 2:
			if (flagIngresoOperandoUno == 0) {
				printf("\tHA SELECCIONADO LA OPCION 2\n");
				printf("\tNo se cargó ningún valor en la opción 1:\n");
				break;
			} else {
				printf("\tHA SELECCIONADO LA OPCION 2\n");
				operandoDos = PedirOperando();
				printf("\tUsted ha ingresado el numero %.2f\n\n", operandoDos);
				sprintf(inicialB, "%.2f", operandoDos);
				flagIngresoOperandoDos = 1;
			}

			break;
		case 3:
			if (flagIngresoOperandoUno == 0 || flagIngresoOperandoDos == 0) {
				printf("\tHA SELECCIONADO LA OPCION 3\n");
				printf(

						"\tNO SE PUEDE CALCULAR. \n\tFALTAN CARGAR VALORES, CARGUE AMBOS Y REINTENTELO\n\n");
				break;
			} else {
				printf("\tHA SELECCIONADO LA OPCION 3\n");
				printf(
						"\n\tSe han realizado los siguientes calculos:\n \t-Suma\n \t-Resta\n \t-Multiplicacion\n \t-Factorial\n \t-Division\n\n  \tPresione 4 para ver los resultados\n\n");
				respuestaSuma = SumarOperandos(operandoUno, operandoDos);
				respuestaResta = RestarOperandos(operandoUno, operandoDos);
				respuestaDividir = DividirOperandos(operandoUno, operandoDos,
						&refDivision);
				respuestaMultiplicar = MultiplicarOperandos(operandoUno,
						operandoDos);

				factorialPrimerOperando = CalcularFactorial(operandoUno,
						&refFactorialUno);
				factorialSegundoOperando = CalcularFactorial(operandoDos,
						&refFactorialDos);
				flagNoSeHicieronCalculos = 1;
			}
			break;
		case 4:
			if (flagIngresoOperandoUno == 0 || flagIngresoOperandoDos == 0) {
				printf("\tHA SELECCIONADO LA OPCION 4\n");
				printf(
						"\tNO HAY RESULTADOS PARA INFORMAR. \n\tFALTAN CARGAR VALORES, CARGUE AMBOS Y REINTENTELO\n\n");
				break;
			} else {
				if (flagNoSeHicieronCalculos == 0) {
					printf(
							"\tNO HAY RESULTADOS PARA INFORMAR. \n\tFALTA CALCULAR LAS OPCIONES CON LA OPCIÓN 3\n\n");
					break;
				} else {
					printf("\tHA SELECCIONADO LA OPCION 4\n\n");
					printf("\tINFORME DE RESULTADOS:\n");
					MostrarResultados(operandoUno, operandoDos, respuestaSuma,
							respuestaResta, respuestaMultiplicar);
					MostrarDivision(operandoUno, operandoDos, respuestaDividir,
							refDivision);
					MostrarFactorial(operandoUno, operandoDos,
							factorialPrimerOperando, factorialSegundoOperando,
							refFactorialUno, refFactorialDos);
					break;
				}

			}
		case 5:
			respuesta = 'n';
			break;

		}

	}
	printf("\n\tESTA HA SIDO LA CALCULADORA DE BRAIAN AQUIJE!");
}
