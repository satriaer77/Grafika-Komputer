#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

void myinit()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1.0, 10.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    int scale= 2;
    int down = 4;
    int horz = 1;
    glClear (GL_COLOR_BUFFER_BIT);

    //////////////////////------------ Red Quads ------------//////////////////////
    glColor3f (1.0, 0.0, 0.0);
    int lenArr = 4;
    float arrPoly[lenArr][2] = {
        {1,1},
        {2,1},
        {2,3},
        {1,3}
    };
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*scale+horz,arrPoly[i][1]*scale-down);
        }
    glEnd();
    glFlush ();

    //////////////////////------------ END Red Quads ------------//////////////////////



    //////////////////////------------ Blue Quads ------------//////////////////////
    glColor3f (0.0, 0.0, 1.0);
    int lenArr1 = 4;
    float arrPoly1[lenArr1][2] = {
        {2,1},
        {2.3,1.4},
        {2.3,3.2},
        {2,3}

    };
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr1;i++)
        {
            glVertex2d(arrPoly1[i][0]*scale+horz,arrPoly1[i][1]*scale-down);
        }
    glEnd();
    glFlush ();

    //////////////////////------------ END Blue Quads ------------//////////////////////

    //////////////////////------------ Green Quads ------------//////////////////////
    glColor3f (0.0, 1.0, 0.0);
    int lenArr2 = 4;
    float arrPoly2[lenArr1][2] = {
        {2,3},
        {2.3,3.2},
        {1.3,3.2},
        {1,3}

    };
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr1;i++)
        {
            glVertex2d(arrPoly2[i][0]*scale+horz,arrPoly2[i][1]*scale-down);
        }
    glEnd();
    glFlush ();

    //////////////////////------------ END Green Quads ------------//////////////////////
}

 void kunci(unsigned char key, int x, int y)
{
   switch (key)
   {
     /* aplikasi berhenti ketika tombol q ditekan */
     case 27 :
     case 'q':
      exit(0);
      break;
     }
    glutPostRedisplay();
}

int main(int argc, char *argv[])
{

    glutInit(&argc, argv);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("3 Quads");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
