/* TEMPERATURE CONVERTER -- by Ryan Cannon
Made with Borland Turbo C 2.01 via DOSBOX-X ver.2026.01.02 (Yes really...)
Based off of my Python Temperature Converter program */

#include <stdio.h>


/* Ye old Borland C declarations */
float userTemperature, temperatureResult;
void fahrenheit_to_celsius(), celsius_to_fahrenheit();
void fahrenheit_to_kelvin(), kelvin_to_fahrenheit();
void celsius_to_kelvin(), kelvin_to_celsius();

main()
{

  char userOption;

  clrscr();   /* Clear any remaining dos text  */
  printf("\n MS-DOS Temperature Converter"
	 "\n Copyright Ryan Cannon 2026"
	 "\n Press enter to continue");

  /* Not sure how, but placing a do while loop here seems to prevent
  letters from being typed in to the temperature prompt, which I'm happy about */
    do {
      getchar(); /* Clear input buffer for userOption due to newline character loop bug. */
      clrscr();

      printf("\n 1. Convert from Fahrenheit to Celsius"
	     "\n 2. Convert from Celsius to Fahrenheit"
	     "\n 3. Convert from Fahrenheit to Kelvin"
	     "\n 4. Convert from Kelvin to Fahrenheit"
	     "\n 5. Convert from Celsius to Kelvin"
	     "\n 6. Convert from Kelvin to Celsius"
	     "\n 7. Quit \n");


      printf("Select an option with a number 1-7: ");
      userOption = getchar();

      /* Menu selection logic */
      switch (userOption) {
      case '1':
	 fahrenheit_to_celsius();
	 break;
      case '2':
	 celsius_to_fahrenheit();
	 break;
      case '3':
	 fahrenheit_to_kelvin();
	 break;
      case '4':
	 kelvin_to_fahrenheit();
	 break;
      case '5':
	 celsius_to_kelvin();
	 break;
      case '6':
	 kelvin_to_celsius();
	 break;
      case '7':
	 clrscr();
	 printf("\n Goodbye \n");
	 exit();
      default:
	 printf("Invalid option \n");
	 printf("Press enter to continue");
	 break;
     }

  }
  while (getchar() != '7');  /* Dummy value since the program will exit on case 7 anyway */

}


/* Functions */
void fahrenheit_to_celsius()
{
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &userTemperature);
  temperatureResult = (userTemperature - 32) * 5 / 9;
  printf("The temperature in celsius is: %f \n", temperatureResult);
  printf("Press enter to continue");
}

void celsius_to_fahrenheit()
{
  printf("Enter temperature in Celsius: ");
  scanf("%f", &userTemperature);
  temperatureResult = (userTemperature * 9 / 5) + 32;
  printf("The temperature in Fahrenheit is: %f \n", temperatureResult);
  printf("Press enter to continue");
}

void fahrenheit_to_kelvin()
{
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &userTemperature);
  temperatureResult = ((userTemperature-32) * (5/9) + 273.15);
  printf("The temperature in Kelvin is: %f \n", temperatureResult);
  printf("Press enter to continue");
}

void kelvin_to_fahrenheit()
{
  printf("Enter temperature in Kelvin: ");
  scanf("%f", &userTemperature);
  temperatureResult = ((userTemperature-273.15) * 9/5 + 32);
  printf("The temperature in Fahrenheit is: %f \n", temperatureResult);
  printf("Press enter to continue");
}

void celsius_to_kelvin()
{
  printf("Enter temperature in Celsius: ");
  scanf("%f", &userTemperature);
  temperatureResult = (userTemperature + 273.15);
  printf("The temperature in Kelvin is: %f \n", temperatureResult);
  printf("Press enter to continue");
}

void kelvin_to_celsius()
{
  printf("Enter temperature in Kelvin: ");
  scanf("%f", &userTemperature);
  temperatureResult = (userTemperature - 273.15);
  printf("The temperature in Celsius is: %f \n", temperatureResult);
  printf("Press enter to continue");
}