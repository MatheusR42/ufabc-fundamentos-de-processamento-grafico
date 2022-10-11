/*
 * Meu Primeiro Programa: xxx.cpp
 * <NomeCompleto>, RA <RA>, data DD/MM/AAAA
 */

#include <GL/glut.h>


// For MAC:
// #define GL_SILENCE_DEPRECATION
// #include <iostream>
// #include <stdlib.h>
// #include <math.h>
// #include <GLUT/glut.h>
// #include <unistd.h> // needed to sleep

/* ASCII code for the escape key. */
#define ESCAPE 27

/* The number of our GLUT window */
int window;

void display(void)
{
    /* clear all pixels  */
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();

	// Especifica posição do observador e do alvo
    gluLookAt(0.0, 0.0, 30.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    /* draw white polygon (rectangle) with corners at
     * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
     */
    // glBegin(GL_POLYGON);
    //     glColor3f(1.0, 1.0, 1.0);
    //     glVertex3f(2.0f, 2.0f, -3.0f);
    //     glVertex3f(2.0f, 4.0f, -3.0f);
    //     glVertex3f(6.0f, 2.0f, -1.0f);
    //     glVertex3f(6.0f, 4.0f, -1.0f);
    // glEnd();

    // glTranslatef(0,0,-30);


  

   glBegin(GL_LINES);
    glColor4f(1.0,1.0,1.0,1.0);

      glVertex3f(0.033f, 100.0f, 29.0f);
      glVertex3f(0.033f, -100.0f, 29.0f);
    // glColor4f(1.0,.0,.0,1.0);

    //   glVertex3f(0.0f, 0.0f, 0.0f);
    //   glVertex3f(.5f, .5f, 2.0f);
   glEnd();

   glBegin(GL_LINES);
    glColor4f(1.0,1.0,1.0,1.0);

      glVertex3f(100.0f, .1f, 29.0f);
      glVertex3f(-100.0f, .1f, 29.0f);
    // glColor4f(1.0,.0,.0,1.0);

    //   glVertex3f(0.0f, 0.0f, 0.0f);
    //   glVertex3f(.5f, .5f, 2.0f);
   glEnd();


  glBegin(GL_POINTS);
    glColor4f(1.0,0.0,0.0,1.0);

      glVertex3f(1.0f, 3.0f, 0.0f);
    // glColor4f(1.0,.0,.0,1.0);

    //   glVertex3f(0.0f, 0.0f, 0.0f);
    //   glVertex3f(.5f, .5f, 2.0f);
   glEnd();
    /* don't wait!
     * start processing buffered OpenGL routines
     */
    glFlush();
}

void init(void)
{
    glClearColor( 0, 0, 0, 0 ); 
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluPerspective(30, 1.333, 1.0, 100.0); 

    glMatrixMode(GL_MODELVIEW);
	// Inicializa sistema de coordenadas do modelo
	

    glLoadIdentity();
    glClear( GL_COLOR_BUFFER_BIT );
}

/*
 * Declare initial window size, position, and display mode
 * (single buffer and RGBA).  Open window with "hello"
 * in its title bar.  Call initialization routines.
 * Register callback function to display graphics.
 * Enter main loop and process events.
 */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Equipe Átomos");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ANSI C requires main to return int. */
}
