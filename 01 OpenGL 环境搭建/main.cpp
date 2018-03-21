#include <iostream>
#include <GLUT/GlUT.h>
#include "math3d.h"

void draw()
{
    

//-----------------画正方形-------------------------

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);

    glVertex3f(0.25f, 0.25f, 0.0f);
    glVertex3f(0.75f, 0.25f, 0.0f);
    glVertex3f(0.75f, 0.75f, 0.0f);
    glVertex3f(0.25f, 0.75f, 0.0f);

    glEnd();
    glFlush();

    
    
////----------------------画圆---------------------------------
//    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glBegin(GL_POLYGON);
//
//    const int n = 55;
//    const GLfloat R = 0.5f;
//    const GLfloat pi = 3.1415926f;
//    for (int i = 0; i < n; i++)
//    {
//        glVertex2f(R*cos(2 * pi / n*i), R*sin(2 * pi / n*i));
//    }
//    glEnd();
//    glFlush();
// 
 
    
  


//// ------------------------五角形-----------------------------
//
//    const GLfloat Pi = 3.1415926536f;
//     GLfloat a = 1 / (2-2*cos(72*Pi/180));
//     GLfloat bx = a * cos(18 * Pi/180);
//     GLfloat by = a * sin(18 * Pi/180);
//     GLfloat cy = -a * cos(18 * Pi/180);
//     GLfloat
//     PointA[2] = { 0, a },
//     PointB[2] = { bx, by },
//     PointC[2] = { 0.5, cy },
//     PointD[2] = { -0.5, cy },
//     PointE[2] = { -bx, by };
//
//     glClear(GL_COLOR_BUFFER_BIT);
//     glBegin(GL_LINE_LOOP);
//     glVertex2fv(PointA);
//     glVertex2fv(PointC);
//     glVertex2fv(PointE);
//     glVertex2fv(PointB);
//     glVertex2fv(PointD);
//     glEnd();
//     glFlush();
 
//----------- 画出正弦函数的图形---------------
//    const GLfloat factor = 0.1f;
//    GLfloat x;
//    glClear(GL_COLOR_BUFFER_BIT);
//    glBegin(GL_LINES);
//    glVertex2f(-1.0f, 0.0f);
//    glVertex2f(1.0f, 0.0f);
//    glVertex2f(0.0f, -1.0f);
//    glVertex2f(0.0f, 1.0f);
//    glEnd();
//    glBegin(GL_LINE_STRIP);
//    for(x=-1.0f/factor; x<1.0f/factor; x+=0.01f)
//    {
//        glVertex2f(x*factor, sin(x)*factor);
//    }
//    glEnd();
//    glFlush();
    
}

int main(int argc,const char *argv[])
{

    glutInit(&argc, (char **)argv);
    glutCreateWindow("CC_Window");
    glutDisplayFunc(draw);
    glutMainLoop();
    
    return 0;
}
