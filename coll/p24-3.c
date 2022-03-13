#include <stdio.h>

int main()
{
    float mass_mol = 3.0e-23;
    float mass_littre = 1000;
    float litres;
    float molecules;

    printf("Enter the number of litres of water:");
    scanf("%f",&litres);
    molecules = litres * mass_littre / mass_mol;
    printf("%f litres of water contain %e molecules.\n",litres ,molecules);
    return 0;
}