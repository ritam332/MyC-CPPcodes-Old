#include <stdio.h>
int main()
{
    float dep, pur, sal, year;
    printf("Enter Purchase Price, Year of service and Annual Depreciation respectively\n");
    scanf("%f%f%f", &pur, &year, &dep);
    sal=pur-(dep*year);
    printf("The Salvage Value Of the Item is %.2f\n", sal);
    return 0;
}