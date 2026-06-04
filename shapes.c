#include <stdio.h>
#include "canvas.h"
#include "shapes.h"
Shape shapes[100];
int shapeCount = 0;
void drawRectangle(int x, int y, int width, int height)
{
    int i, j;

    for(i = y; i < y + height; i++)
    {
        for(j = x; j < x + width; j++)
        {
            if(i == y || i == y + height - 1 ||
               j == x || j == x + width - 1)
            {
                canvas[i][j] = '*';
            }
        }
    }
}
void drawLine(int x1, int y1, int x2, int y2)
{
    int i;

    /* Horizontal Line */

    if(y1 == y2)
    {
        for(i = x1; i <= x2; i++)
        {
            canvas[y1][i] = '*';
        }
    }

    /* Vertical Line */

    else if(x1 == x2)
    {
        for(i = y1; i <= y2; i++)
        {
            canvas[i][x1] = '*';
        }
    }

    else
    {
        printf("Only horizontal and vertical lines supported!\n");
    }
}
void drawTriangle(int x, int y, int height)
{
    int i, j;

    for(i = 0; i < height; i++)
    {
        for(j = 0; j <= i; j++)
        {
            canvas[y + i][x + j] = '*';
        }
    }
}
void drawCircle(int cx, int cy, int radius)
{
    int x, y;

    for(y = 0; y < ROWS; y++)
    {
        for(x = 0; x < COLS; x++)
        {
            int dx = x - cx;
            int dy = y - cy;

            if(dx * dx + dy * dy <= radius * radius)
            {
                canvas[y][x] = '*';
            }
        }
    }
}
