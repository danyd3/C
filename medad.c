/*
 * Author  :Daniel Alberto De Jesús (danyd3)
 * Fecha: 19_10_2021
 */

/*Realizar un codigo para determinar si el usuario es mayor o menos de edad dependiendo del año de nacimiento*/

#include <stdio.h>

int main(){//Inicio metodo principal
	//Declaracion de variables
	int Fecha_Nacimiento;
	int Fecha_Actual = 2021;
	int diferencia = 0;
	
	printf ("Digite su año de nacimiento: ");
	scanf ("%d", &Fecha_Nacimiento);
	
	diferencia = (Fecha_Actual - Fecha_Nacimiento);

	if ( diferencia >= 18){
		printf ("%s %d %s", "El usuario tiene ", diferencia,"por lo tanto es mayor de edad");
	}
	else {
		printf("%s %d %s", "El usuario tiene", diferencia,"por lo tanto es menor de edad");
	}

}//Fin metodo principal
