#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glut.h>


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

        //first row
        glColor3f(255,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(150,750);
            glVertex2i(400,750);
            glVertex2i(400,800);
            glVertex2i(150,800);
        glEnd();

        //second row

        glColor3f(255,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(100,700);
            glVertex2i(550,700);
            glVertex2i(550,750);
            glVertex2i(100,750);
        glEnd();

        //3rd row
           //black
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(100,650);
            glVertex2i(250,650);
            glVertex2i(250,700);
            glVertex2i(100,700);
        glEnd();

            //skin
        glColor3ub(255.0,186.0,117.0);
        glBegin(GL_POLYGON);
            glVertex2i(250,700);
            glVertex2i(350,700);
            glVertex2i(350,650);
            glVertex2i(250,650);
        glEnd();

            //black

        glColor3ub(0.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glVertex2i(350,650);
            glVertex2i(400,650);
            glVertex2i(400,700);
            glVertex2i(350,700);
        glEnd();
            //skin
        glColor3ub(255.0,186.0,117.0);
        glBegin(GL_POLYGON);
            glVertex2i(400,650);
            glVertex2i(450,650);
            glVertex2i(450,700);
            glVertex2i(400,700);
        glEnd();


        //4th row
            //black

        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(50,600);
            glVertex2i(100,600);
            glVertex2i(100,650);
            glVertex2i(50,650);
        glEnd();


        //4-skin

        glColor3ub(255.0,186.0,117.0);
        glBegin(GL_POLYGON);
            glVertex2i(100,600);
            glVertex2i(150,600);
            glVertex2i(150,650);
            glVertex2i(100,650);
        glEnd();



         //4-black

        glColor3ub(0.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glVertex2i(150,600);
            glVertex2i(200,600);
            glVertex2i(200,650);
            glVertex2i(150,650);
        glEnd();


        //4-skin

        glColor3ub(255.0,186.0,117.0);
        glBegin(GL_POLYGON);
            glVertex2i(150,600);
            glVertex2i(350,600);
            glVertex2i(350,650);
            glVertex2i(150,650);
        glEnd();


        //4-black

        glColor3ub(0.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glVertex2i(350,600);
            glVertex2i(400,600);
            glVertex2i(400,650);
            glVertex2i(350,650);
        glEnd();

        //4-skin
        glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(400,600);
            glVertex2i(550,600);
            glVertex2i(550,650);
            glVertex2i(400,650);
        glEnd();



        //5-balck
        glColor3ub(0.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glVertex2i(50,550);
            glVertex2i(100,550);
            glVertex2i(100,600);
            glVertex2i(50,600);
        glEnd();


        //5-skin
         glColor3ub(255.0,186.0,117.0);
          glBegin(GL_POLYGON);
            glVertex2i(100,550);
            glVertex2i(150,550);
            glVertex2i(150,600);
            glVertex2i(100,600);
        glEnd();

        //5-black

        glColor3ub(0.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glVertex2i(150,550);
            glVertex2i(250,550);
            glVertex2i(250,600);
            glVertex2i(150,600);
        glEnd();

        //5-skin
         glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(250,550);
            glVertex2i(400,550);
            glVertex2i(400,600);
            glVertex2i(250,600);
        glEnd();


        //5-black

         glColor3ub(0.0,0.0,0.0);
          glBegin(GL_POLYGON);
            glVertex2i(400,550);
            glVertex2i(450,550);
            glVertex2i(450,600);
            glVertex2i(400,600);
        glEnd();

        //5-skin
         glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(450,550);
            glVertex2i(600,550);
            glVertex2i(600,600);
            glVertex2i(450,600);
        glEnd();



        //row 6

        //6-black
        glColor3ub(0.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(50,500);
            glVertex2i(150,500);
            glVertex2i(150,550);
            glVertex2i(50,550);
        glEnd();


        //6-skin
        glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(150,500);
            glVertex2i(350,500);
            glVertex2i(350,550);
            glVertex2i(150,550);
        glEnd();

        //6-black
        glColor3ub(0.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(350,500);
            glVertex2i(550,500);
            glVertex2i(550,550);
            glVertex2i(350,550);
        glEnd();



        //row-7
        //skin
          glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(150,450);
            glVertex2i(500,450);
            glVertex2i(500,500);
            glVertex2i(150,500);
        glEnd();


        //row-8
        //blue
          glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(100,400);
            glVertex2i(200,400);
            glVertex2i(200,450);
            glVertex2i(100,450);
        glEnd();


        //red

         glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(200,400);
            glVertex2i(250,400);
            glVertex2i(250,450);
            glVertex2i(200,450);
        glEnd();
        //blue
         glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(250,400);
            glVertex2i(400,400);
            glVertex2i(400,450);
            glVertex2i(250,450);
        glEnd();


        //row-9
        //blue
         glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(50,350);
            glVertex2i(200,350);
            glVertex2i(200,400);
            glVertex2i(50,400);
        glEnd();

        //red

         glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(200,350);
            glVertex2i(250,350);
            glVertex2i(250,400);
            glVertex2i(200,400);
        glEnd();

        //blue

         glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(250,350);
            glVertex2i(350,350);
            glVertex2i(350,400);
            glVertex2i(250,400);
        glEnd();

        //red
        glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(350,350);
            glVertex2i(400,350);
            glVertex2i(400,400);
            glVertex2i(350,400);
        glEnd();

        //blue
        glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(400,350);
            glVertex2i(550,350);
            glVertex2i(550,400);
            glVertex2i(400,400);
        glEnd();


        //10-row



        //blue
        glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(0,300);
            glVertex2i(200,300);
            glVertex2i(200,350);
            glVertex2i(0,350);
        glEnd();




        //red
        glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(200,300);
            glVertex2i(250,300);
            glVertex2i(250,350);
            glVertex2i(200,350);
        glEnd();

        //blue

         //blue
        glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(250,300);
            glVertex2i(350,300);
            glVertex2i(350,350);
            glVertex2i(250,350);
        glEnd();

        //red
        glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(350,300);
            glVertex2i(400,300);
            glVertex2i(400,350);
            glVertex2i(350,350);
        glEnd();

         //blue
        glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(400,300);
            glVertex2i(600,300);
            glVertex2i(600,350);
            glVertex2i(400,350);
        glEnd();



        //row-11


        //skin

         glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(0,250);
            glVertex2i(100,250);
            glVertex2i(100,300);
            glVertex2i(0,300);
        glEnd();

        //blue

        glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(100,250);
            glVertex2i(200,250);
            glVertex2i(200,300);
            glVertex2i(100,300);
        glEnd();


        //red
        glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(200,250);
            glVertex2i(400,250);
            glVertex2i(400,300);
            glVertex2i(200,300);
        glEnd();

         //blue

        glColor3ub(0.0,0.0,255.0);
         glBegin(GL_POLYGON);
            glVertex2i(400,250);
            glVertex2i(500,250);
            glVertex2i(500,300);
            glVertex2i(400,300);
        glEnd();


        //skin
         glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(500,250);
            glVertex2i(600,250);
            glVertex2i(600,300);
            glVertex2i(500,300);
        glEnd();



        //12-row

        //skin
        glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(0,200);
            glVertex2i(150,200);
            glVertex2i(150,250);
            glVertex2i(0,250);
        glEnd();

        //red
        glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(150,200);
            glVertex2i(200,200);
            glVertex2i(200,250);
            glVertex2i(150,250);
        glEnd();



        //yellow

        glColor3ub(255.0,255.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(200,200);
            glVertex2i(250,200);
            glVertex2i(250,250);
            glVertex2i(200,250);
        glEnd();

       //red

        glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(250,200);
            glVertex2i(350,200);
            glVertex2i(350,250);
            glVertex2i(250,250);
        glEnd();

        //yellow
         glColor3ub(255.0,255.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(350,200);
            glVertex2i(400,200);
            glVertex2i(400,250);
            glVertex2i(350,250);
        glEnd();


        //red

         glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(400,200);
            glVertex2i(450,200);
            glVertex2i(450,250);
            glVertex2i(400,250);
        glEnd();

        //skin
        glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(450,200);
            glVertex2i(600,200);
            glVertex2i(600,250);
            glVertex2i(450,250);
        glEnd();


        //13-row
        //skin
        glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(0,150);
            glVertex2i(100,150);
            glVertex2i(100,200);
            glVertex2i(0,200);
        glEnd();

        //red
         glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(100,150);
            glVertex2i(500,150);
            glVertex2i(500,200);
            glVertex2i(100,200);
        glEnd();

        //skin

        glColor3ub(255.0,186.0,117.0);
         glBegin(GL_POLYGON);
            glVertex2i(500,150);
            glVertex2i(600,150);
            glVertex2i(600,200);
            glVertex2i(500,200);
        glEnd();


        //14-row

        //red
          glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(100,100);
            glVertex2i(250,100);
            glVertex2i(250,150);
            glVertex2i(100,150);
        glEnd();

         glColor3ub(255.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(350,100);
            glVertex2i(500,100);
            glVertex2i(500,150);
            glVertex2i(350,150);
        glEnd();


        //14-row



         glColor3ub(0.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(50,50);
            glVertex2i(200,50);
            glVertex2i(200,100);
            glVertex2i(50,100);
        glEnd();


        glColor3ub(0.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(400,50);
            glVertex2i(550,50);
            glVertex2i(550,100);
            glVertex2i(400,100);
        glEnd();


//15-row

        glColor3ub(0.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(0,0);
            glVertex2i(200,0);
            glVertex2i(200,50);
            glVertex2i(0,50);
        glEnd();

        glColor3ub(0.0,0.0,0.0);
         glBegin(GL_POLYGON);
            glVertex2i(400,0);
            glVertex2i(600,0);
            glVertex2i(600,50);
            glVertex2i(400,50);
        glEnd();

    glFlush();
}
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,600,0,800);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Mario!!!!!!");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}



