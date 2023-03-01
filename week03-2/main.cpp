#include <GL/glut.h>
#include <stdio.h>
float X=0, Y=0;
void display()

{
    ///glutSolidTeapot(0.3);
    glBegin(GL_POLYGON);
    glVertex2f(0.007, -0.040);
    glVertex2f(0.007, -0.040);
    glVertex2f(0.007, -0.040);
    glVertex2f(0.007, -0.040);
    glVertex2f(0.007, -0.040);
    glVertex2f(0.000, 0.007);
    glVertex2f(0.000, 0.007);
    glVertex2f(0.000, 0.007);
    glVertex2f(0.000, 0.007);
    glVertex2f(0.000, 0.007);
    glVertex2f(-0.220, 0.147);
    glVertex2f(-0.253, 0.067);
    glVertex2f(-0.300, -0.033);
    glVertex2f(-0.293, -0.100);
    glVertex2f(-0.260, -0.187);
    glVertex2f(-0.227, -0.227);
    glVertex2f(-0.133, -0.227);
    glVertex2f(0.200, -0.213);
    glVertex2f(0.267, -0.167);
    glVertex2f(0.293, -0.127);
    glVertex2f(0.280, -0.007);
    glVertex2f(0.220, 0.133);
    glVertex2f(0.193, 0.167);
    glVertex2f(0.133, 0.153);
    glVertex2f(0.040, 0.180);
    glVertex2f(-0.020, 0.193);
    glVertex2f(-0.140, 0.160);
    glVertex2f(-0.220, 0.160);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.207, 0.140);
    glVertex2f(-0.233, 0.173);
    glVertex2f(-0.267, 0.233);
    glVertex2f(-0.300, 0.353);
    glVertex2f(-0.320, 0.440);
    glVertex2f(-0.320, 0.547);
    glVertex2f(-0.300, 0.613);
    glVertex2f(-0.233, 0.647);
    glVertex2f(-0.207, 0.620);
    glVertex2f(-0.187, 0.527);
    glVertex2f(-0.180, 0.433);
    glVertex2f(-0.180, 0.313);
    glVertex2f(-0.153, 0.260);
    glVertex2f(-0.147, 0.187);
    glVertex2f(-0.133, 0.160);
    glVertex2f(-0.107, 0.133);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.093, 0.147);
    glVertex2f(0.100, 0.187);
    glVertex2f(0.120, 0.227);
    glVertex2f(0.140, 0.373);
    glVertex2f(0.140, 0.440);
    glVertex2f(0.140, 0.520);
    glVertex2f(0.147, 0.560);
    glVertex2f(0.153, 0.640);
    glVertex2f(0.193, 0.700);
    glVertex2f(0.233, 0.700);
    glVertex2f(0.247, 0.627);
    glVertex2f(0.253, 0.573);
    glVertex2f(0.253, 0.487);
    glVertex2f(0.253, 0.400);
    glVertex2f(0.240, 0.267);
    glVertex2f(0.233, 0.167);
    glVertex2f(0.220, 0.127);
    glVertex2f(0.180, 0.053);
    glEnd();
    glutSwapBuffers();

}

void mouse(int button, int state, int x, int y)
{
    float X = (x-150)/150.0;
    float Y = -(y-150)/150.0;
    if(state==GLUT_DOWN)
    {
        printf("    glVertex2f(%.3f, %.3f);\n", X, Y);
    }
}
int main(int argc, char *argv[])

{

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("GLUT Shapes");

	glutDisplayFunc(display);
	glutMouseFunc(mouse);

    glutMainLoop();

}
