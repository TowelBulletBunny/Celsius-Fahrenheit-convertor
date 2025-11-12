#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float Celsius2Fahrenheit(float celsius);
float celsius;

float Fahrenheit2Celsius(float fahrenheit);
float  fahrenheit;




float Fahrenheit2Celsius(float fahrenheit){
    float Celsius = ((float)5/9*(fahrenheit-32));
    return Celsius;
}


 float Celsius2Fahrenheit(float celsius){
     float CelsiusConverted = ((float)9/5*celsius)+32;
     return CelsiusConverted;
 }
 int main(int argc, const char * argv[]) {

    
    
    printf("=== Celsius to Fahrenheit Converter ===\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f",&celsius);
    float CelsiusConverted = Celsius2Fahrenheit((float) celsius);
    printf("--- Conversion Results ---\n");
    printf("Celsius:\t\t%.2f C\n",celsius);
    printf("Fahrenheit:\t\t%.2f F\n",CelsiusConverted);
    printf("---------------------------");

    printf("=== Fahrenheit to Celsius Converter ===\n");
    printf("Enter temperature in Fahrenheit: ");
    
    scanf("%f",&fahrenheit);//user input
    float Celsius = Fahrenheit2Celsius((float) fahrenheit);
    printf("--- Conversion Results ---\n");
    printf("Fahrenheit:\t\t%.2f F\n",fahrenheit);
    printf("Celsius:\t\t%.2f C\n",Celsius);
    printf("---------------------------");

    
    return EXIT_SUCCESS;
    

}
     