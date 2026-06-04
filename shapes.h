typedef struct
{
    int type;

    int x;
    int y;

    int width;
    int height;

    int x2;
    int y2;

    int radius;

} Shape;
extern Shape shapes[100];
extern int shapeCount;
void drawRectangle(int x, int y, int width, int height);
void drawLine(int x1, int y1, int x2, int y2);
void drawTriangle(int x, int y, int height);
void drawCircle(int cx, int cy, int radius);