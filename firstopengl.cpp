/* 
   g++ firstopengl.cpp -lGL -lGLU -lglut -lm
   ./a.out
*/

#include<iostream>
#include<GL/glut.h>

void init(void)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,800.0,0.0,600.0);
}
void createline(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINES);
	 glVertex2i(200,100);
	 glVertex2i(20,50);
	glEnd();
	glFlush();
}
int main(int argc,char**argv)
{
	glutInit(& argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(800,600);
	glutCreateWindow("The OpenGL example");
	
	
	init();
	glutDisplayFunc(createline);
	glutMainLoop();
	return 0;
}
