#include <GL/glut.h>

void display()

{
    glBegin(GL_POLYGON);
    glColor3f(1,0,0); glVertex2f(0,1); ///紅色頂點
    glColor3f(0,1,0); glVertex2f(-1,-1); ///綠色頂點
    glColor3f(0,0,1); glVertex2f(+1,-1); ///藍色頂點
    glEnd();

    glColor3f(1,1,0);
    glutSolidTeapot(0.3); ///劃出一個實心的茶壺 大小0.3

    glutSwapBuffers(); /// GLUT把畫面swap送到顯示的地方

}

int main(int argc, char *argv[])

{

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("GLUT Shapes");

	glutDisplayFunc(display);

	 glutMainLoop();

}
