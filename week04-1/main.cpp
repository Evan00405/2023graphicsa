#include <GL/glut.h>

float angle = 0; ///step02-1 宣告global全域變數 angle

void display()

{

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///背景

    glPushMatrix(); ///矩陣

        glRotatef(angle, 0, 1, 0); ///角度

        glutSolidTeapot( 0.3 );

    glPopMatrix();  ///還原矩陣

    glutSwapBuffers();

    angle++; ///把角度++

}

int main(int argc, char* argv[] )

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week04");



    glutDisplayFunc(display);

    glutIdleFunc(display); ///step02-1 有空idle時,就重畫畫面

    glutMainLoop();

}
