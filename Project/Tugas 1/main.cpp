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
    glBegin(GL_LINE_LOOP);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*3,arrPoly[i][1]*3-4);
        }
    glEnd();
    glFlush ();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
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
    glBegin(GL_LINE_LOOP);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*3+2,arrPoly[i][1]*1.5+0.7);
        }
    glEnd();
    glFlush ();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*1.5+3.1,arrPoly[i][1]*0.75+2.2);
        }
    glEnd();
    glFlush ();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*3+2,(arrPoly[i][1]*1.5+0.5)-3);
        }
    glEnd();
    glFlush ();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
        for(int i=0;i<lenArr;i++)
        {
            glVertex2d(arrPoly[i][0]*1.5+3.1,(arrPoly[i][1]*0.75+2)-3);
        }
    glEnd();
    glFlush ();
    //////////////////////------------ END ANGKA 8 ------------//////////////////////



    //////////////////////------------ ANGKA 5 ------------//////////////////////
    int lenArrA5 = 24;
    float arrPolyA5[lenArrA5][2] ={
        {2.3977480049741, 3.1253903435857},
        {2.4831139994838, 3.1979514389189},
        {3.1190906585808, 3.1958172890562},
        {3.1937859037767, 3.123256193723},
        {3.1959200536395, 3.0763048967427},
        {3.125493108169, 2.999475501684},
        {2.6773216369933, 2.999475501684},
        {2.6047605416601, 2.9226461066253},
        {2.5986912431544, 2.4837427604364},
        {2.6720145583423, 2.4059756079644},
        {3.1141763681119, 2.3993098520382},
        {3.2007187577638, 2.319168553095},
        {3.1932915580673, 1.2849536095325},
        {3.1199615318903, 1.2008102485078},
        {2.4356759749232, 1.1959993321282},
        {2.4005244838615, 1.2418491030783},
        {2.4008838580684, 1.3583194207143},
        {2.4374822733766, 1.3983489374576},
        {2.896983340919, 1.3965073683687},
        {2.9378161783702, 1.4312770907955},
        {2.9365829068418, 1.9776163778761},
        {2.8933991129479, 2},
        {2.5, 2},
        {2.4023864351127, 2.0828344047424}
    };


    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
        for(int i=0;i<lenArrA5;i++)
        {
            glVertex2d(arrPolyA5[i][0]*2+0.5,arrPolyA5[i][1]*3-4.5);
        }
    glEnd();
    glFlush ();




    //////////////////////------------ END ANGKA 5 ------------//////////////////////


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
