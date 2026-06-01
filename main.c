#include <stdio.h>
#include "canvas.h"
#include "shapes.h"

int main()
{
    int choice;

    int x, y, width, height;

    int x1, y1, x2, y2;

    int triangleHeight;

    initCanvas();

    while(1)
    {
        printf("\n===== 2D GRAPHICS EDITOR =====\n");

        printf("1. Draw Rectangle\n");
        printf("2. Draw Line\n");
        printf("3. Draw Triangle\n");
        printf("4. Display Canvas\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter x position: ");
                scanf("%d", &x);

                printf("Enter y position: ");
                scanf("%d", &y);

                printf("Enter width: ");
                scanf("%d", &width);

                printf("Enter height: ");
                scanf("%d", &height);

                drawRectangle(x, y, width, height);

                printf("Rectangle Drawn!\n");

                break;

            case 2:

                printf("Enter x1: ");
                scanf("%d", &x1);

                printf("Enter y1: ");
                scanf("%d", &y1);

                printf("Enter x2: ");
                scanf("%d", &x2);

                printf("Enter y2: ");
                scanf("%d", &y2);

                drawLine(x1, y1, x2, y2);

                printf("Line Drawn!\n");

                break;

            case 3:

                printf("Enter x position: ");
                scanf("%d", &x);

                printf("Enter y position: ");
                scanf("%d", &y);

                printf("Enter triangle height: ");
                scanf("%d", &triangleHeight);

                drawTriangle(x, y, triangleHeight);

                printf("Triangle Drawn!\n");

                break;

            case 4:

                displayCanvas();

                break;

            case 5:

                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}