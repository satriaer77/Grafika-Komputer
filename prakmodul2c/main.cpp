
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
//Supaya bisa menggunakan fungsi sin(), program perlu include Math.h
#include <math.h>

int a,b,d;
float c;

void myinit()
{
	glClearColor(0.0, 0.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 1.0, 1.0);
    glLineWidth(7);
    glBegin(GL_LINES);
        glVertex3f(-10.0,0.0,0.0);
        glVertex3f(30.0,0.0,0.0);
        glVertex3f(0.0,-10.0,0.0);
        glVertex3f(0.0,10.0,0.0);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
        glVertex3f(1.0,1.0,0.0);
        glVertex3f(1.0,5.0,0.0);
        glVertex3f(5.0,5.0,0.0);
        glVertex3f(5.0,1.0,0.0);
    glEnd();

    glFlush ();
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
    a=4;
	b=5;
	c=0.3;
	d=1;
    glutInitWindowSize(600,600);
    glutInitWindowPosition(400,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Latihan pertama");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
