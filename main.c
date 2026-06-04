#include <stdio.h>
#include "canvas.h"
#include "shapes.h"

int main()
{
    int choice;

    int x, y, width, height;

    int x1, y1, x2, y2;

    int triangleHeight;

    int radius;

    initCanvas();

    while(1)
    {
        printf("\n===== 2D GRAPHICS EDITOR =====\n");

        printf("1. Draw Rectangle\n");
        printf("2. Draw Line\n");
        printf("3. Draw Triangle\n");
        printf("4. Draw Circle\n");
        printf("5. Display Canvas\n");
        printf("6. Exit\n");

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
                shapes[shapeCount].type = 1;

shapes[shapeCount].x = x;
shapes[shapeCount].y = y;

shapes[shapeCount].width = width;
shapes[shapeCount].height = height;

shapeCount++;
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

                printf("Enter center x: ");
                scanf("%d", &x);

                printf("Enter center y: ");
                scanf("%d", &y);

                printf("Enter radius: ");
                scanf("%d", &radius);

                drawCircle(x, y, radius);

                printf("Circle Drawn!\n");

                break;

            case 5:

                displayCanvas();

                break;

            case 6:

                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}