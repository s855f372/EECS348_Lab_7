#include "temperature.h"
#include <stdio.h>

int main(int argc, char *argv[]) {

    float temp;
    int temp_type, convert_type;

    while (1)
    {
        printf("Enter temperature value: ");
        if (scanf("%f", &temp) != 1) 
        {
            printf("[Invalid Temperature Value]\n");
            while (getchar() != '\n');                  // This clears the input
        }
        else if (temp < -459.67f)
        {
            printf("[Invalid: Temperature too low]\n");
            while (getchar() != '\n');
        }
        else
        {
            break;
        }
    }

    printf("1. Fahrenheit\n2. Celsius\n3. Kelvin\n");
    
    while (1)
    {
        printf("Enter temperature type: ");
        scanf("%d", &temp_type);
        if (temp_type != 1 && temp_type != 2 && temp_type != 3) 
        {
            printf("[Invalid Temperature Type]\n");
            while (getchar() != '\n');
        }
        else if (temp_type == 2 && temp < -273.15f)
        {
            printf("[Invalid: Celsius temperature too low]\n");
            while (getchar() != '\n');
        }
        else if (temp_type == 3 && temp < 0)
        {
            printf("[Invalid: Kelvin temperature too low]\n");
            while (getchar() != '\n');
        }
        else
        {
            break;
        }
    }

    while (1)
    {
        printf("Enter temperature type to convert to: ");
        scanf("%d", &convert_type);
        if (convert_type != 1 && convert_type != 2 && convert_type != 3) 
        {
            printf("[Invalid Temperature Type]\n");
            while (getchar() != '\n');
        }
        else if (convert_type == temp_type)
        {
            printf("[Invalid: Convert type same as Temperature type]\n");
            while (getchar() != '\n');
        }
        else
        {
            break;
        }
    }

    float convert_temp;

    if (temp_type == 1 && convert_type == 2) // Fahrenheit to Celsius
    {
        convert_temp = fahrenheit_to_celsius(temp);
    }
    if (temp_type == 1 && convert_type == 3) // Fahrenheit (to Celsius) to Kelvin
    {
        float celsius = fahrenheit_to_celsius(temp);
        convert_temp = celsius_to_kelvin(celsius);
    }

    if (temp_type == 2 && convert_type == 1) // Celsius to Fahrenheit
    {
        convert_temp = celsius_to_fahrenheit(temp);
    }
    if (temp_type == 2 && convert_type == 3) // Celsius to Kelvin
    {
        convert_temp = celsius_to_kelvin(temp);
    }

    if (temp_type == 3 && convert_type == 1) // Kelvin (to Celsius) to Fahrenheit
    {
        float celsius = kelvin_to_celsius(temp);
        convert_temp = celsius_to_fahrenheit(celsius);
    }
    if (temp_type == 3 && convert_type == 2) // Kelvin to Celsius
    {
        convert_temp = kelvin_to_celsius(temp);
    }

    printf("Converted Temperature: %f\n", convert_temp);

    if (temp_type == 1) // Fahrenheit
    {
        categorize_temperature(fahrenheit_to_celsius(temp));
    }
    if (temp_type == 2) // Celsius
    {
        categorize_temperature(temp);
    }
    if (temp_type == 3) // Kelvin
    {
        categorize_temperature(kelvin_to_celsius(temp));
    }

    return 0;
}