#include "temperature.h"
#include <stdio.h>

// Converts Celsius to Fahrenheit using the formula: F = (9/5)C + 32
float celsius_to_fahrenheit (float celsius)
{
    return ((9.0/5.0) * celsius) + 32.0;
}

// Converts Fahrenheit to Celsius using the formula: C = (5/9)(F - 32)
float fahrenheit_to_celsius (float fahrenheit)
{
    return (5.0/9.0) * (fahrenheit - 32.0);
}

// Converts Celsius to Kelvin using the formula: K = C + 273.15
float celsius_to_kelvin (float celsius)
{
    return celsius + 273.15;
}

// Converts Kelvin to Celsius using the formula: C = K - 273.15
float kelvin_to_celsius (float kelvin)
{
    return kelvin - 273.15;
}

// Categorizes the temperature into “Freezing,” “Cold,” “Comfortable,” “Hot,” or “Extreme Heat” based on Celsius value
// Provides an advisory message
void categorize_temperature(float celsius)
{
    if (celsius < 0)
    {
        printf("Freezing: Stay near someplace warm.");
    }
    else if (celsius < 10)
    {
        printf("Cold: Wear a jacket.");
    }
    else if (celsius < 25)
    {
        printf("Comfortable: Have fun.");
    }
    else if (celsius <= 35)
    {
        printf("Hot: Stay in the shade.");
    }
    else if (celsius > 35)
    {
        printf("Extreme Heat: Stay somewhere cool.");
    }

    printf("\n");
}