#include <GL/glut.h>
#include <iostream>
#include <vector>
using namespace std;

void display();
void reshape(int, int);
void init();


const int HIGHT = 780, WIDTH = 1540;
const double a = 10.0, b = 8.0 / 3.0, p = 28.0;
double x = 2.0, y = 1.0, z = 1.0, dt = 0.01, dx = 0.0, dy = 0.0, dz = 0.0;
float red = 0.0, green = 0.0, blue = 0.0;
vector <vector <double>> points;

int main(int argv, char** argc)
{
	// Initializing glut
	glutInit(&argv, argc);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	// Declaring Window position and size
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(WIDTH, HIGHT);

	glutCreateWindow("Lorenz Attractor");

	// Prerequisite for displaying the window
	glutDisplayFunc(display);

	// Prerequisite for drawing
	glutReshapeFunc(reshape);
	init();

	glutMainLoop();
}


void display()
{
	//glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();


	//draw
	glPointSize(2.0);
	glBegin(GL_POINTS);
	for (int i = 0; i < points.size()/4; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			glColor3f(red, green, blue);
			glVertex2d(points[i][j], points[i][j + 1]);
			cout << points[i][j] << ' ' << points[i][j + 1] << endl;
		}
		red += 0.2;
		green += 0.3;
		blue += 0.5;

		if (red > 1)
			red = 0;
		else if (green > 1)
			green = 0;
		else if (blue > 1)
			blue = 0;
		
	}
	glEnd();

	glBegin(GL_POINTS);
	for (int i = points.size() / 4; i < points.size() / 2; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			glColor3f(red, green, blue);
			glVertex2d(points[i][j], points[i][j + 1]);
			cout << points[i][j] << ' ' << points[i][j + 1] << endl;
		}
		red += 0.2;
		green += 0.3;
		blue += 0.5;

		if (red > 1)
			red = 0;
		else if (green > 1)
			green = 0;
		else if (blue > 1)
			blue = 0;

	}
	glEnd();

	glBegin(GL_POINTS);
	for (int i = points.size() / 2; i < (3 * points.size()) / 4; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			glColor3f(red, green, blue);
			glVertex2d(points[i][j], points[i][j + 1]);
			cout << points[i][j] << ' ' << points[i][j + 1] << endl;
		}
		red += 0.2;
		green += 0.3;
		blue += 0.5;

		if (red > 1)
			red = 0;
		else if (green > 1)
			green = 0;
		else if (blue > 1)
			blue = 0;

	}
	glEnd();

	glBegin(GL_POINTS);
	for (int i = (3 * points.size()) / 4; i < points.size(); i++)
	{
		for (int j = 0; j < 1; j++)
		{
			glColor3f(red, green, blue);
			glVertex2d(points[i][j], points[i][j + 1]);
			cout << points[i][j] << ' ' << points[i][j + 1] << endl;
		}
		red += 0.2;
		green += 0.3;
		blue += 0.5;

		if (red > 1)
			red = 0;
		else if (green > 1)
			green = 0;
		else if (blue > 1)
			blue = 0;

	}
	glEnd();

	

	glutSwapBuffers();
}


void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluPerspective(45, 1, 0.1, 1500);
	gluOrtho2D(-25.0, 25.0, -25.0, 25.0);
	glMatrixMode(GL_MODELVIEW);

}

void init()
{
	//To give bg Color
	glClearColor(0.0, 0.0, 0.0, 0.0);

	for (int i = 0; i < 10000; i++)
	{
		dx = (a * (y - x)) * dt;
		dy = ((x * (p - z)) - y) * dt;
		dz = ((x * y) - (b * z)) * dt;

		vector <double> v;
		v.push_back(x);
		v.push_back(y);
		//v.push_back(z);

		points.push_back(v);

		x += dx;
		y += dy;
		z += dz;	
	}

	for (int i = 0; i < 10000; i++)
	{
		dx = (a * (y - x)) * dt;
		dy = ((x * (p - z)) - y) * dt;
		dz = ((x * y) - (b * z)) * dt;

		vector <double> v;
		v.push_back(x);
		v.push_back(y);
		//v.push_back(z);

		points.push_back(v);

		x += dx;
		y += dy;
		z += dz;
	}

}
