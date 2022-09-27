#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glLineWidth(3.0);
    glBegin(GL_LINES);

    glColor3f(0.0, 5.0, 0.0);   //Warna hijau
    glVertex3f(0.8, 0.7, 0.0);  // Koordinat Titik 1
    glVertex3f(0.12, 0.2, 0.0);  // Koordinat Titik 2
    glVertex3f(0.1, 0.7, 0.0);  // Koordinat Titik 3
    glVertex3f(0.8, 0.2, 0.0);  // Koordinat Titik 4

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
    glutInitWindowPosition(300, 300);
    glutCreateWindow("Garis(Sam)");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
