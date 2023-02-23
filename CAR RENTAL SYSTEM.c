#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u, d, r, l;
    char name[50];
    long long int age, contact, n;
    FILE *fp;
    fp = fopen("rental_info.txt", "w"); // open file for writing
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter your name:");
    scanf("%49[^\n]*c", name);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your contact number (10 digits):");
    scanf("%lld", &contact); // using %ld for long long int

    fprintf(fp, "Name: %s\n", name); // write to file
    fprintf(fp, "Age: %d\n", age);
     fprintf(fp, "Contact: %lld\n", contact);

    fclose(fp); // close file

    printf("Name=%s\n", name);
    printf("Age=%d\n", age);
    printf("contact=%d\n", contact);
    printf("\n CAR RENTAL APPLICATION \n");
    printf("\n ----------------------- \n");
    printf("\n Press 1 for Deluxe Vehicles \n");
    printf("\n Press 2 for OFF-ROAD Vehicles \n");
    printf("\n Press 3 for Luxury Vehicle \n");
    printf("\n ---------------------------- \n");
    printf("\n Press any Option: \n");
    scanf("%d", &u);
    switch (u)
    {
    case 1:
        printf("\nYou have chosen Deluxe Vehicles.\n");
        printf("Deluxe Vehicles available are:\n");
        printf("1. SWIFT DEZIRE (Cost 4000rs per day)\n");
        printf("2. SAFARI (Cost 5000rs per day)\n");
        printf("3. ECO SPORT (Cost 10,000rs per day)\n");
        printf("-----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &d);
        switch (d)
        {
        case 1:
            printf("\nYou have selected SWIFT DEZIRE.\n Cost 4000rs per day.\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        case 2:
            printf("\nYou have selected SAFARI.\n Cost 5000rs per day.\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        case 3:
            printf("\nYou have selected ECO SPORT.\n Cost 10,000rs per day.\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        default:
            printf("\nInvalid input.\n");
            break;
        }
        break;
    case 2:
        printf("\nYou have chosen OFF-ROAD Vehicles.\n");
        printf("OFF-ROAD Vehicles available are:\n");
        printf("1. THAR (Cost 20,000rs per day)\n");
        printf("2. GYPSY (Cost 30,000rs per day)\n");
        printf("3. RUBICON (Cost 50,000rs per day)\n");
        printf("-----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &r);
        switch (r)
        {
        case 1:
            printf("\nYou have selected THAR.\n Cost 20,000rs per day\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        case 2:
            printf("\nYou have selected GYPSY.\n Cost 30,000rs per day\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        case 3:
            printf("\nYou have selected RUBICON.\n Cost 50,000rs per day\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        default:
            printf("\nInvalid input.\n");
            break;
        }
        break;
    case 3:
        printf("\nYou have chosen Luxury Cars.\n");
        printf("Luxury Cars available are:\n");
        printf("1. MERCEDES BENZ (Cost 40,000rs per day)\n");
        printf("2. BMW X5 (Cost 45,000rs per day)\n");
        printf("3. AUDI A4(Cost 50,000rs per day)\n");
        printf("-----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &l);
        switch (l)
        {
        case 1:
            printf("\nYou have selected MERCEDES BENZ.\n Cost 40,000rs per day.\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        case 2:
            printf("\nYou have selected GYPSY.\n Cost 45,000rs per day.\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        case 3:
            printf("\nYou have selected RUBICON.\n Cost 50,000rs per day.\n GOODBYE! HAVE A GREAT JOURNEY.\n **THANK YOU** \n");
            break;
        default:
            printf("\nInvalid input.\n");
            break;
        }
    }
    return 0;
}
