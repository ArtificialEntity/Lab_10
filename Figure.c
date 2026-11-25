#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

float area_triangle(void)
{
    int h;

    printf("Введите высоту треугольника: ");

    scanf("%d", &h);

    float S;

    float b = 2 * h - 1;

    S = 0.5 * b * h;

    return S;
}

int definition(void)
{
    puts("Равнобедренный треугольник — это треугольник, у которого две стороны равны. Эти равные стороны называются боковыми, а третья сторона —  основанием.");
}

int draw(void)
{
    int h;

    char sym;

    printf("Введите символ для рисования: ");

    scanf(" %c", &sym);

    printf("Введите высоту треугольника: ");

    scanf("%d", &h);

    for (int i = 1; i <= h; i++)
    {
        for (int j = 0; j < h - i; j++)
        {
            putchar(' ');
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            putchar(sym);
        }

        putchar('\n');
    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    int h;

    char sym;

    char choice;

    puts("Выберите действие (1 - Площадь треугольника, 2 - Рисование треугольника, 3 - Определение треугольника");

    scanf(" %c", &choice);

    switch (choice) 
    {
    case '1':
        printf("Площадь треугольника: %.2f\n", area_triangle());

        break;

    case '2':
        draw();

        break;

    case '3':
        definition();

        break;

    default:
        puts("Введено неверное действие!");

        break;
    }

    return 0;
}