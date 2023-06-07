#include <stdio.h>
main()
{
    int num;
	double cube(double num);   
    double c;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = cube(num);

    printf("Cube of %d is %.2f", num, c); 
    
    return 0;
}

double cube(double num)
{
    return (num * num * num);
}
