/*
    The question is generated by OpenAI GPT-4o

    Array of Structs
    Modify the Car struct program above to:
    Store details of 3 cars in an array.
    Take input for all 3 cars and display their details.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car
{
    char brand[50];
    int model;
    float price;
};

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ; // Clear the buffer
}

int main()
{
    struct Car car[3];
    size_t sizeOfArray = sizeof(car) / sizeof(car[0]);

    system("cls");

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Enter name of brand: ");
        fgets(car[i].brand, 50, stdin);

        printf("Enter model number: ");
        scanf("%d", &car[i].model);

        printf("Enter price: Rs. ");
        scanf("%f", &car[i].price);

        clearInputBuffer();
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("\nName of the brand: %s\n", car[i].brand);
        printf("The model number of the car: %d\n", car[i].model);
        printf("The price of the car %.2f\n", car[i].price);
    }

    return 0;
}