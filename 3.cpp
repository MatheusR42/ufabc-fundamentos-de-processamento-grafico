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

    glTranslatef(0,0,-5);
    glColor4f(1.0,1.0,1.0,1.0);

    glBegin(GL_QUADS);
        glVertex2f(-1,-1);
        glVertex2f( 1,-1);
        glVertex2f( 1, 1);
        glVertex2f(-1, 1);
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
    gluPerspective(45, 1.333, 0, 100); 
    glMatrixMode( GL_MODELVIEW );
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
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Equipe Átomos");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ANSI C requires main to return int. */
}
