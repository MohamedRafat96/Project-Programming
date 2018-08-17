/*********************************************
Name : Mohamed Rafat Mohamed
E-Mail : Eng.MohammedRafaat@gmail.com
PH : +201014859309
Facebook : www.facebook.com/MohamedRafat29
********************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i = 4;
	double d = 4.0;
	char s[] = "HackerRank ";
	// Declare second integer, double, and String variables.
	int ii;
	double dd;
	char s2[70];
	char s3;
	// Read and save an integer, double, and String to your variables.
	scanf("%d", &ii);
	scanf("%lf", &dd);
	scanf("%c", &s3);
	fgets(s2, 70, stdin);
	// Print the sum of both integer variables on a new line.
	printf("%d\n", i + ii);
	// Print the sum of the double variables on a new line.
	printf("%.1lf\n", d + dd);
	// Concatenate and print the String variables on a new line
	// The 's' variable above should be printed first.

	printf("%s%s\n", s, s2);
	return 0;
}