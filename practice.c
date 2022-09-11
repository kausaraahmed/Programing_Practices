#include <stdio.h>

float km_to_ml(float km)
{
	float ml;
	ml = km * 0.621371;
	return ml;
}
float in_to_cm(float in)
{
	float cm;
	cm = in * 2.54;
	return cm;
}
float kg_to_pd(float kg)
{
	float pd;
	pd = kg * 2.20462;
	return pd;
}
float lt_to_gl(float lt)
{
	float gl;
	gl = lt * 0.264172;
	return gl;
}

int main()
{
	int choose;
	printf("Choose which conversion you want:\n Km to mile (press 1)\n Inch to cm (press 2)\n Kg to Pound (press 3)\n Kg to Pound (press 4)\n = ");
	scanf("%d", &choose);

	if (choose == 1)
	{
		float value;
		printf("Enter value in km: ");
		scanf("%f", &value);
		printf("%0.1f km = %0.2f mile", value, km_to_ml(value));
	}
	if (choose == 2)
	{
		float value;
		printf("Enter value in Inch: ");
		scanf("%f", &value);
		printf("%0.1f Inch = %0.2f Centimeters", value, in_to_cm(value));
	}
	if (choose == 3)
	{
		float value;
		printf("Enter value in Kg: ");
		scanf("%f", &value);
		printf("%0.1f Kg = %0.2f lbs", value, kg_to_pd(value));
	}
	if (choose == 4)
	{
		float value;
		printf("Enter value in Liter: ");
		scanf("%f", &value);
		printf("%0.1f Liter = %0.2f Gallon", value, lt_to_gl(value));
	}
}