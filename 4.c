 /*4. write a C program to convert temperature from degree Celsius to Fahrenheit.*/
 
  #include<stdio.h>
int main(){
	float celsius,fahrenheit;
	printf("Enter temperature in celsisus:");
	scanf("%f",&celsius);
	fahrenheit=9.0/5*celsius+32;
	printf("Temperature in fahreheit is %f",fahrenheit);
	
}
 
