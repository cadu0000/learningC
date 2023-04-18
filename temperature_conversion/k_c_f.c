#include <stdio.h>
#include <ctype.h>
#include <string.h>

void erro();
char toUpperCase(char finalUnit);
char checkFinalUnit(char finalUnit);
void celsius_to(float temp, char finalUnit);
void fahrenheit_to(float temp, char finalUnit);
void kelvin_to(float temp, char finalUnit);

int main()
{
    char initialUnit, finalUnit;
    float temp;
    printf("\n is the temperature in (F), (C) or (K)?: ");
    scanf("%c", &initialUnit);
    initialUnit = toupper(initialUnit); // deixa maiúsculo

    switch (initialUnit)
    {
    case 'F':
        fahrenheit_to(temp, finalUnit);
        break;
    case 'C':
        celsius_to(temp, finalUnit);
        break;
    case 'K':
        kelvin_to(temp, finalUnit);
        break;
    default:
        erro();
        break;
    }

    return 0;
}

void erro()
{
    printf("your type of temperature is invalid, the program will start again\n");
    main();
}

char toUpperCase(char finalUnit)
{
    finalUnit = toupper(finalUnit);
    return finalUnit;
}

char checkFinalUnit(char finalUnit)
{
    printf("choose the unit of measurement you want (F) or (K): ");
    do
    {
        scanf("%c", &finalUnit);
    } while (strlen(&finalUnit) == 0);
    finalUnit = toUpperCase(finalUnit);
    return finalUnit;
}

void celsius_to(float temp, char finalUnit)
{
    finalUnit = checkFinalUnit(finalUnit);

    switch (finalUnit)
    {
    case 'F':
        temp = (temp * 9 / 5) + 32;
        printf("the temp in fahrenheit is: %.2f", temp);
        break;
    case 'K':
        temp += 273;
        printf("the temp in kelvin is: %.2f", temp);
        break;
    default:
        erro();
        break;
    }
}

void fahrenheit_to(float temp, char finalUnit)
{
    finalUnit = checkFinalUnit(finalUnit);

    switch (finalUnit)
    {
    case 'C':
        temp = ((temp - 32) * 5) / 9;
        printf("the temp in celsius is: %.2f", temp);
        break;
    case 'K':
        temp = (((temp + 273) - 32) * 5) / 9;
        printf("the temp in kelvin is: %.2f", temp);
        break;
    default:
        erro();
        break;
    }
}

void kelvin_to(float temp, char finalUnit)
{
    finalUnit = checkFinalUnit(finalUnit);

    switch (finalUnit)
    {
    case 'C':
        temp -= 273;
        printf("the temp in celsius is: %.2f", temp);
        break;
    case 'F':
        temp = ((temp - 273) * 9 / 5) + 32;
        printf("the temp in fahrenheit is: %.2f", temp);
        break;
    default:
        erro();
        break;
    }
}
