#include <GL/freeglut.h>

void InitGL();
void Reshape(int width, int height);
void Display();

int main(int argc, char* argv[])
{
	int windowWidth, windowHeight;
	
	windowWidth = 1280;
	windowHeight = 720;

	//Glut Init
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(windowWidth, windowHeight);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - windowWidth) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - windowHeight) / 2);
	glutCreateWindow("OpenGL FreeGlut Window");

	//Callbacks
	glutReshapeFunc(Reshape);
	glutDisplayFunc(Display);
	InitGL();

	glutMainLoop();

	return 0;
}

void InitGL()
{
	glClearColor(0, 0, 0, 1);
	glEnable(GL_DEPTH_TEST);
}

void Reshape(int width, int height)
{
	glViewport(0, 0, width, height);
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glFlush();
}
