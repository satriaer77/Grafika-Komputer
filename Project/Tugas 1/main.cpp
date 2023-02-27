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
    glClear (GL_COLOR_BUFFER_BIT);

    //////////////////////------------ ANGKA 0 ------------//////////////////////
    glColor3f (1.0, 1.0, 1.0);
    int lenArr = 9;
    float arrPoly[lenArr][2] = {
        {1,1.1},
        {0.9,1},
        {0.6,1},
        {0.6,1},
        {0.5,1.1},
        {0.5,3},
        {0.6,3.1},
        {0.9,3.1},
        {1,3}
    };
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*3,arrPoly[i][1]*3-4);
        }
    glEnd();
    glFlush ();

    glColor3f (0, 0, 0);
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*1.4+1.2,arrPoly[i][1]*1.7-1.5);
        }
    glEnd();
    glFlush ();
    //////////////////////------------ END ANGKA 0 ------------//////////////////////

    //Batas Atas 9
    //Batas Kiri 1.5
    //Batas Kanan 3
    //Batas Bawah 3

    //////////////////////------------ ANGKA 8 ------------//////////////////////
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*3+2,arrPoly[i][1]*1.5+0.5);
        }
    glEnd();
    glFlush ();

    glColor3f (0, 0, 0);
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*1.5+3.1,arrPoly[i][1]*0.75+2);
        }
    glEnd();
    glFlush ();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*3+2,(arrPoly[i][1]*1.5+0.5)-3);
        }
    glEnd();
    glFlush ();

    glColor3f (0, 0, 0);
    glBegin(GL_POLYGON);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*1.5+3.1,(arrPoly[i][1]*0.75+2)-3);
        }
    glEnd();
    glFlush ();
    //////////////////////------------ END ANGKA 8 ------------//////////////////////

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
    glutCreateWindow("NIM 3 Angka 085");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
