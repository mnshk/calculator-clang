#include <stdio.h>
#include <conio.h>

int main()
{
    int opt, cat;
    float a, b, r;
    char e;

    system("cls");

    printf("\n\tCalculator By Munish.\n\n");

    printf("\nList of Operations:\n\n 1.Arthmetic Operation\n 2.Relational Operation\n 3.Unary Operation\n 4.Find ASCII Code\n\n\n Enter 0 for Info.\n\n");
    printf("\nSelect a Category: ");
    scanf("%d", &cat);
    system("cls");

    if (cat == 1)
    {
        printf("\n\tArthmetic Operators.\n\n");

        printf("\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n");
        printf("\nSelect an Operation: ");
        scanf("%d", &opt);

        system("cls");

        if (opt < 5)
        {
            printf("\n\tAdd two Numbers\n\n");

            printf("\nEnter first number: ");
            scanf("%f", &a);
            printf("\nEnter second number: ");
            scanf("%f", &b);

            if (opt == 1)
            {
                r = a + b;
                printf("\n(+)Answer = %.2f", r);
            }
            else if (opt == 2)
            {
                r = a - b;
                printf("\n(-)Answer = %.2f", r);
            }
            else if (opt == 3)
            {
                r = a * b;
                printf("\n(*)Answer = %.2f", r);
            }
            else if (opt == 4)
            {
                r = a / b;
                printf("\n(/)Answer = %.2f", r);
            }
        }
        else
        {
            printf("\nUnknown Choice...");
        }
    }

    else if (cat == 2)
    {
        printf("\n\tRelational Operators.\n\n");

        printf("\n 1.Compare (Small, Large)\n 2.Equality (Equal, Not Equal)\n");
        printf("\nSelect an Operation: ");
        scanf("%d", &opt);

        system("cls");

        if (opt < 3)
        {
            printf("\n\tCheck Relation\n\n");

            printf("\nEnter First number: ");
            scanf("%f", &a);
            printf("\nEnter another number to Compare: ");
            scanf("%f", &b);

            if (opt == 1)
            {
                if (a == b)
                    printf("\nBoth are equal.");
                else if (a < b)
                    printf("\nFirst Number is Smaller");
                else
                    printf("\nFirst Number is Greater", a, b);
            }
            else if (opt == 2)
            {
                if (a == b)
                    printf("\nNumbers are equal.");
                else
                    printf("\nNumbers are not Equal.");
            }
        }
        else
        {
            printf("\nUnknown Choice...");
        }
    }

    else if (cat == 3)
    {
        printf("\n\tUnary Operators.\n\n");

        printf("\n 1.Increment\n 2.Decrement\n");
        printf("\nSelect an Operation: ");
        scanf("%d", &opt);

        system("cls");

        if (opt < 3)
        {
            printf("\n\tUnary\n\n");

            printf("\nEnter the number: ");
            scanf("%f", &a);

            if (opt == 1)
            {
                ++a;
                printf("\nNumber After Increment= %.2f", a);
            }
            else if (opt == 2)
            {
                --a;
                printf("\nNumber After Decrement= %.2f", a);
            }
        }
        else
        {
            printf("\nUnknown Choice...");
        }
    }
    else if (cat == 4)
    {
        printf("\n\tFind ASCII Code.\n\n");

        printf("\nEnter any Letter:");
        scanf("%s", &e);
        printf("\nASCII Code is: %d", e);
    }
    else if (cat == 0)
    {
        system("cls");
        printf("\n\tCalculator by Munish\n\n\tThis is a program written in C language by me.\n\tIt can Perform various type of Operations.\n\tIt also supports Decimal Point values.\n\n");
    }
    else
    {
        printf("\n\nUnknown Category.");
    }
    getch();
}
