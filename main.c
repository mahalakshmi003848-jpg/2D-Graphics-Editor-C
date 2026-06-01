#include <stdio.h>
#include "canvas.h"
#include "shapes.h"

int main()
{
    int choice;
    int x, y, width, height;

    initCanvas();

    while(1)
    {
        printf("\n===== 2D GRAPHICS EDITOR =====\n");
        printf("1. Draw Rectangle\n");
        printf("2. Display Canvas\n");
        printf("3. Exit\n");

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

                displayCanvas();

                break;

            case 3:

                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}