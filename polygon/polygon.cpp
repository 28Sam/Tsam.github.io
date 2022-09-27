#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void trapesium()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 01.0);

    glBegin(GL_POLYGON);

    glVertex2f(0.4, 0.4);   // Titik 1
    glVertex2f(0.7, 0.3);   // Titik 2
    glVertex2f(0.8, 0.8);   // Titik 3
    glVertex2f(0.3, 0.7);   // Titik 4

    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Polygon(Sam)");
    Initialize();
    glutDisplayFunc(trapesium);
    glutMainLoop();
    return 0;
}
