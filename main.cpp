#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>

#include<math.h>

#define PI 3.141516
GLfloat position = 0.0f;
GLfloat speed = 0.2f;

GLfloat boatPosition = 0.0f;
GLfloat boatSpeed = 0.1f;

void updateBoat(int);

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

glutPostRedisplay();


glutTimerFunc(100, updateBoat, 0);
}

void updateBoat(int value)
{
    if(boatPosition <-1.0)
        boatPosition = 1.0f;

    boatPosition -= boatSpeed;

glutPostRedisplay();


glutTimerFunc(100, update, 0);
}



void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
      glVertex2f(-1.0f, 0.1f);
      glVertex2f( 1.0f, 0.1f);
      glVertex2f( 1.0f,  -0.1f);
      glVertex2f(-1.0f,  -0.1f);
   glEnd();

glBegin(GL_QUADS);
      glColor3ub(41, 128, 185);
      glVertex2f(-1.0f, -0.1f);
      glVertex2f( 1.0f, -0.1f);
      glVertex2f( 1.0f,  -1.0f);
      glVertex2f(-1.0f,  -1.0f);
   glEnd();

   glBegin(GL_QUADS);
      glColor3ub(52, 152, 219);
      glVertex2f(-1.0f, 1.0f);
      glVertex2f( 1.0f, 1.0f);
      glVertex2f( 1.0f,  0.1f);
      glVertex2f(-1.0f,  0.1f);
   glEnd();

   glLineWidth(10);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(-1.0f, 0.0f);
      glVertex2f( 1.0f, 0.0f);
   glEnd();

   // Sun
int i;


glColor3ub (241, 196, 15);
    GLfloat p1=-0.80f; GLfloat q1= 0.80f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

    glBegin (GL_TRIANGLE_FAN);

    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    glPopMatrix();

    // cloud

    glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

     p1=-0.60f;  q1= 0.60f;  r1 = 0.1f;
     tringle2=40;

     tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (236, 240, 241);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

     p1=-0.45f;  q1= 0.60f;  r1 = 0.15f;
     tringle2=40;

     tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (236, 240, 241);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

     p1=-0.30f;  q1= 0.60f;  r1 = 0.125f;
tringle2=40;

     tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (236, 240, 241);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    glPopMatrix();

    // cloud

    glPushMatrix();
glTranslatef(-position,0.0f, 0.0f);


     p1=-0.80f;  q1= 0.30f;  r1 = 0.1f;
     tringle2=40;

     tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (236, 240, 241);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

     p1=-0.65f;  q1= 0.30f;  r1 = 0.15f;
     tringle2=40;

     tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (236, 240, 241);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

     p1=-0.50f;  q1= 0.30f;  r1 = 0.125f;
tringle2=40;

     tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (236, 240, 241);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glPopMatrix();

    // Wave
    glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(-1.0f, -0.4f);
      glVertex2f(-0.8f, -0.4f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.8f, -0.5f);
      glVertex2f(-0.6f, -0.5f);
   glEnd();
   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.4f, -0.4f);
      glVertex2f(-0.6f, -0.4f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.2f, -0.5f);
      glVertex2f(-0.4f, -0.5f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.2f, -0.4f);
      glVertex2f(-0.0f, -0.4f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.0f, -0.5f);
      glVertex2f(0.2f, -0.5f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(0.2f, -0.4f);
      glVertex2f(0.4f, -0.4f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(0.4f, -0.5f);
      glVertex2f(0.6f, -0.5f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(0.6f, -0.4f);
      glVertex2f(0.8f, -0.4f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(255, 255, 255);
      glVertex2f(0.8f, -0.5f);
      glVertex2f(1.0f, -0.5f);
   glEnd();


    // Boat

    glPushMatrix();
glTranslatef(boatPosition,0.0f, 0.0f);

    glBegin(GL_TRIANGLES);
   glColor3ub(192, 57, 43);
   glVertex2f(-0.9f,-0.7f);
   glVertex2f(-0.7f, -0.7f);
   glVertex2f(-0.7f, -0.9f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(192, 57, 43);
      glVertex2f(-0.7f, -0.7f);
      glVertex2f( -0.5f, -0.7f);
      glVertex2f( -0.5f,  -0.9f);
      glVertex2f(-0.7f,  -0.9f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3ub(192, 57, 43);
   glVertex2f(-0.5f,-0.7f);
   glVertex2f(-0.3f, -0.7f);
   glVertex2f(-0.5f, -0.9f);
   glEnd();

   glBegin(GL_QUADS);
      glColor3ub(243, 156, 18);
      glVertex2f(-0.7f, -0.5f);
      glVertex2f( -0.5f, -0.5f);
      glVertex2f( -0.5f,  -0.7f);
      glVertex2f(-0.7f,  -0.7f);
   glEnd();

   // Pal
   glBegin(GL_TRIANGLES);
   glColor3ub(231, 76, 60);
   glVertex2f(-0.525f,-0.1f);
   glVertex2f(-0.675f, -0.6f);
   glVertex2f(-0.525f, -0.6f);
   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3ub(231, 76, 60);
   glVertex2f(-0.625f,-0.15f);
   glVertex2f(-0.725f, -0.65f);
   glVertex2f(-0.625f, -0.65f);
   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3ub(231, 76, 60);
   glVertex2f(-0.5f,-0.175f);
   glVertex2f(-0.5f, -0.675f);
   glVertex2f(-0.4f, -0.675f);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(231, 76, 60);
      glVertex2f(-0.5f, -0.675f);
      glVertex2f(-0.5, -0.7);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(231, 76, 60);
      glVertex2f(-0.625f, -0.65f);
      glVertex2f(-0.625, -0.7);
   glEnd();

   glLineWidth(2.5);
   glBegin(GL_LINES);
      glColor3ub(231, 76, 60);
      glVertex2f(-0.525f, -0.6f);
      glVertex2f(-0.525, -0.7);
   glEnd();

   glPopMatrix();



   glFlush();
}

void handleMouse(int button, int state, int x, int y) {
if (button == GLUT_LEFT_BUTTON)
{	boatSpeed += 0.1f;
}
if (button == GLUT_RIGHT_BUTTON)
{boatSpeed -= 0.1f;   }
glutPostRedisplay();}


void handleKeypress(unsigned char key, int x, int y) {
switch (key) {
case 'a':
    {
        speed = 0.0f;
        boatSpeed = 0.0;
    }

    break;
case 'w':
    speed = 0.1f;
    break;
case 's':
    speed += 0.1f;
    break;
case 'd':
    speed -= 0.1f;
    break;
glutPostRedisplay();
}}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1920, 1080);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);
   glutTimerFunc(100, update, 0);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutMainLoop();
   return 0;
}


