#include <stdio.h>
#include <string.h>

	int main() {
		int dia,year;
		char mes[10];
		printf("introducir dia mes y año\n");
		scanf ("%d  %s  %d " ,&dia,&mes,&year);
		
		if ((strcmp(mes, "enero") == 0) || (strcmp(mes, "Enero") == 0) || (strcmp(mes, "ENERO") == 0))
		{
			printf ("%d/01/%d",dia,year);
		}
		if ((strcmp(mes, "febrero") == 0) || (strcmp(mes, "Febrero") == 0) || (strcmp(mes, "FEBRERO") == 0))
		{
			printf ("%d/02/%d",dia,year);
		}
		if ((strcmp(mes, "marzo") == 0) || (strcmp(mes, "Marzo") == 0) || (strcmp(mes, "MARZO") == 0))
		{
			printf ("%d/03/%d",dia,year);
		}
		if ((strcmp(mes, "abril") == 0) || (strcmp(mes, "Abril") == 0) || (strcmp(mes, "ABRIL") == 0))
		{
			printf ("%d/04/%d",dia,year);
		}
		if ((strcmp(mes, "mayo") == 0) || (strcmp(mes, "Mayo") == 0) || (strcmp(mes, "MAYO") == 0))
		{
			printf ("%d/05/%d",dia,year);
		}
		if ((strcmp(mes, "junio") == 0) || (strcmp(mes, "Junio") == 0) || (strcmp(mes, "JUNIO") == 0))
		{
			printf ("%d/06/%d",dia,year);
		}
		if ((strcmp(mes, "julio") == 0) || (strcmp(mes, "Julio") == 0) || (strcmp(mes, "JULIO") == 0))
		{
			printf ("%d/07/%d",dia,year);
		}
		if ((strcmp(mes, "agosto") == 0) || (strcmp(mes, "Agosto") == 0) || (strcmp(mes, "AGOSTO") == 0))
		{
			printf ("%d/08/%d",dia,year);
		}
		if ((strcmp(mes, "septiembre") == 0) || (strcmp(mes, "Septiembre") == 0) || (strcmp(mes, "SEPTIEMBRE") == 0))
		{
			printf ("%d/09/%d",dia,year);
		}
		if ((strcmp(mes, "octubre") == 0) || (strcmp(mes, "Octubre") == 0) || (strcmp(mes, "OCTUBRE") == 0))
		{
			printf ("%d/10/%d",dia,year);
		}
		if ((strcmp(mes, "noviembre") == 0) || (strcmp(mes, "Noviembre") == 0) || (strcmp(mes, "NOVIEMBRE") == 0))
		{
			printf ("%d/11/%d",dia,year);
		}
		if ((strcmp(mes, "diciembre") == 0) || (strcmp(mes, "Diciembre") == 0) || (strcmp(mes, "DICIEMBRE") == 0))
		{
			printf ("%d/12/%d",dia,year);
		}
		
	 }
	
	return 0;
}

