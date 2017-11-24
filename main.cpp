#include <GL\freeglut.h>

void render();

int main(int argc, char* argv[]) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Glut Window");

	glutDisplayFunc(render);

	glutMainLoop();
	return 0;
}

void render()
{
	
}