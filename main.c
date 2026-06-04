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
int deleteID;
int i;
    initCanvas();

    while(1)
    {
        printf("\n===== 2D GRAPHICS EDITOR =====\n");

        printf("1. Draw Rectangle\n");
printf("2. Draw Line\n");
printf("3. Draw Triangle\n");
printf("4. Draw Circle\n");
printf("5. Display Canvas\n");
printf("6. Delete Shape\n");
printf("7. Exit\n");

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
shapes[shapeCount].type = 2;

shapes[shapeCount].x = x1;
shapes[shapeCount].y = y1;

shapes[shapeCount].x2 = x2;
shapes[shapeCount].y2 = y2;

shapeCount++;
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
shapes[shapeCount].type = 3;

shapes[shapeCount].x = x;
shapes[shapeCount].y = y;

shapes[shapeCount].height = triangleHeight;

shapeCount++;
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
shapes[shapeCount].type = 4;

shapes[shapeCount].x = x;
shapes[shapeCount].y = y;

shapes[shapeCount].radius = radius;

shapeCount++;
                printf("Circle Drawn!\n");

                break;

            case 5:

                displayCanvas();

                break;

            case 6:

    printf("Enter Shape ID to delete: ");
    scanf("%d", &deleteID);

    if(deleteID >= 0 && deleteID < shapeCount)
    {
        shapes[deleteID].type = 0;

        clearCanvas();

        for(i = 0; i < shapeCount; i++)
        {
            if(shapes[i].type == 1)
            {
                drawRectangle(
                    shapes[i].x,
                    shapes[i].y,
                    shapes[i].width,
                    shapes[i].height
                );
            }

            else if(shapes[i].type == 2)
            {
                drawLine(
                    shapes[i].x,
                    shapes[i].y,
                    shapes[i].x2,
                    shapes[i].y2
                );
            }

            else if(shapes[i].type == 3)
            {
                drawTriangle(
                    shapes[i].x,
                    shapes[i].y,
                    shapes[i].height
                );
            }

            else if(shapes[i].type == 4)
            {
                drawCircle(
                    shapes[i].x,
                    shapes[i].y,
                    shapes[i].radius
                );
            }
        }

        printf("Shape Deleted!\n");
    }

    else
    {
        printf("Invalid Shape ID!\n");
    }

    break;
case 7:

    return 0;
            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}