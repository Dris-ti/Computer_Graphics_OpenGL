#include <GL/glut.h>
#include <math.h>

void display();
void reshape(int, int);
void init();


int main(int argv, char** argc)
{
	// INITIALIZE GLUT
	glutInit(&argv, argc);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	// DECLARE WINDOW POS, SIZE AND NAME
	glutInitWindowPosition(300, 110);
	glutInitWindowSize(800, 500);
	glutCreateWindow("House");

	// PRE-REQUISITE FUNC FOR DISPLAYING, DRAWING
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	init();

	// MAINLOOP
	glutMainLoop();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	// BG CIRCLE
	
	

	// BOX OF CHIMNEY
	glColor4f((224.0 / 255.0), (142.0 / 255.0), (136.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-2.4, 7.4);
	glVertex2f(-3.3, 7.4);
	glVertex2f(-3.3, 7.0);
	glVertex2f(-2.4, 7.0);
	glVertex2f(-2.4, 7.4);
	glEnd();
	
	// CHIMNEY
	glColor4f((219.0 / 255.0), (97.0 / 255.0), (94.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-2.2, 7.0);
	glVertex2f(-3.5, 7.0);
	glVertex2f(-3.5, -1.0);
	glVertex2f(-2.2, -1.0);
	glVertex2f(-2.2, 7.0);
	glEnd();

	// LOWER BRICK
	glColor4f((224.0 / 255.0), (142.0 / 255.0), (136.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-2.2, 5.7);
	glVertex2f(-2.9, 5.7);
	glVertex2f(-2.9, 5.2);
	glVertex2f(-2.2, 5.2);
	glVertex2f(-2.2, 5.7);
	glEnd();

	// UPPER BRICK
	glColor4f((224.0 / 255.0), (142.0 / 255.0), (136.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-3.5, 6.6);
	glVertex2f(-2.8, 6.6);
	glVertex2f(-2.8, 6.1);
	glVertex2f(-3.5, 6.1);
	glVertex2f(-3.5, 6.6);
	glEnd();

	// WALL
	glColor4f((254.0 / 255.0), (254.0 / 255.0), (244.0/255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 7.0);
	glVertex2f(-4.0, 2.5);
	glVertex2f(-4.0, -5.0);
	glVertex2f(4.0, -5.0);
	glVertex2f(4.0, 2.5);
	glVertex2f(0.0, 7.0);
	glEnd();

	// CELLING
	glColor4f((211.0 / 255.0), (60.0 / 255.0), (53.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 8.0);
	glVertex2f(-5.0, 2.45);
	glVertex2f(-4.5, 1.95);
	glVertex2f(0.0, 7.0);
	glVertex2f(4.5, 1.95);
	glVertex2f(5.0, 2.45);
	glVertex2f(0.0, 8.0);
	glEnd();

	// CELLING SHADOW
	glColor4f((184.0 / 255.0), (190.0 / 255.0), (196.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 7.0);
	glVertex2f(-4.0, 2.5);
	glVertex2f(-4.0, 1.8);
	glVertex2f(0.0, 6.3);
	glVertex2f(4.0, 1.8);
	glVertex2f(4.0, 2.5);
	glVertex2f(0.0, 7.0);
	glEnd();

	// DOOR
	glColor4f((109.0 / 255.0), (130.0 / 255.0), (135.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, 2.0);
	glVertex2f(-3.0, 2.0);
	glVertex2f(-3, -5.0);
	glVertex2f(-0.5, -5.0);
	glVertex2f(-0.5, 2.0);
	glEnd();

	// RIGHT SIDE OF THE DOOR
	glColor4f((140.0 / 255.0), (211.0 / 255.0), (193.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 1.2);
	glVertex2f(-1.7, 1.2);
	glVertex2f(-1.7, -4.0);
	glVertex2f(-0.8, -4.0);
	glVertex2f(-0.8, 1.2);
	glEnd();

	// RIGHT SIDE OF THE DOOR SHADOW
	glColor4f((50.0 / 255.0), (189.0 / 255.0), (158.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 1.2);
	glVertex2f(-1.7, 1.2);
	glVertex2f(-1.7, 0.5);
	glVertex2f(-0.8, 0.5);
	glVertex2f(-0.8, 1.2);
	glEnd();

	// LEFT SIDE OF THE DOOR
	glColor4f((140.0 / 255.0), (211.0 / 255.0), (193.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1.8, 1.2);
	glVertex2f(-2.7, 1.2);
	glVertex2f(-2.7, -4.0);
	glVertex2f(-1.8, -4.0);
	glVertex2f(-1.8, 1.2);
	glEnd();

	// LEFT SIDE OF THE DOOR SHADOW
	glColor4f((50.0 / 255.0), (189.0 / 255.0), (158.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1.8, 1.2);
	glVertex2f(-2.7, 1.2);
	glVertex2f(-2.7, 0.5);
	glVertex2f(-1.8, 0.5);
	glVertex2f(-1.8, 1.2);
	glEnd();

	// HANDLE
	glColor4f((231.0 / 255.0), (181.0 / 255.0), (52.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.6, -2.0);
	glVertex2f(-1.1, -2.0);
	glVertex2f(-1.1, -2.3);
	glVertex2f(-0.6, -2.3);
	glVertex2f(-0.6, -2.0);
	glEnd();

	//WINDOW
	glColor4f((109.0 / 255.0), (130.0 / 255.0), (135.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(3.3, 2.0);
	glVertex2f(0.4, 2.0);
	glVertex2f(0.4, -1.0);
	glVertex2f(3.3, -1.0);
	glVertex2f(3.3, 2.0);
	glEnd();

	// UPPER RIGHT SIDE OF THE WINDOW
	glColor4f((140.0 / 255.0), (211.0 / 255.0), (193.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(3.15, 1.8);
	glVertex2f(1.935, 1.8);
	glVertex2f(1.935, 0.6);
	glVertex2f(3.15, 0.6);
	glVertex2f(3.15, 1.8);
	glEnd();

	// UPPER RIGHT SIDE OF THE WINDOW SHADOW
	glColor4f((50.0 / 255.0), (189.0 / 255.0), (158.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(3.15, 1.8);
	glVertex2f(1.935, 1.8);
	glVertex2f(1.935, 1.4);
	glVertex2f(3.15, 1.4);
	glVertex2f(3.15, 1.8);
	glEnd();

	// UPPER LEFT SIDE OF THE WINDOW
	glColor4f((140.0 / 255.0), (211.0 / 255.0), (193.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(1.775, 1.8);
	glVertex2f(0.55, 1.8);
	glVertex2f(0.55, 0.6);
	glVertex2f(1.775, 0.6);
	glVertex2f(1.775, 1.8);
	glEnd();

	// UPPER LEFT SIDE OF THE WINDOW SHADOW
	glColor4f((50.0 / 255.0), (189.0 / 255.0), (158.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(1.775, 1.8);
	glVertex2f(0.55, 1.8);
	glVertex2f(0.55, 1.4);
	glVertex2f(1.775, 1.4);
	glVertex2f(1.775, 1.8);
	glEnd();

	// LOWER RIGHT SIDE OF THE WINDOW
	glColor4f((140.0 / 255.0), (211.0 / 255.0), (193.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(3.15, 0.4);
	glVertex2f(1.935, 0.4);
	glVertex2f(1.935, -0.8);
	glVertex2f(3.15, -0.8);
	glVertex2f(3.15, 0.4);
	glEnd();

	// LOWER LEFT SIDE OF THE WINDOW
	glColor4f((140.0 / 255.0), (211.0 / 255.0), (193.0 / 255), 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(1.775, 0.4);
	glVertex2f(0.55, 0.4);
	glVertex2f(0.55, -0.8);
	glVertex2f(1.775, -0.8);
	glVertex2f(1.775, 0.4);
	glEnd();

	glutSwapBuffers();
}

void reshape(int w, int h)
{
	// CREATE VIEWPORT
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
}

void init()
{
	// BG COLOR
	glClearColor((36.0 / 255.0), (67.0 / 255.0), (72.0 / 255), 0.0);
}

