#include <iostream>

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif


using namespace std;

// Store the width and height of the window
int width = 640, height = 640;

//-------------------------------------------------------
// A function to draw the scene
//-------------------------------------------------------
void appDrawScene() {
	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Set background color to black
	glClearColor(0.0, 0.0, 0.0, 1.0);

	// Set up the transformations stack
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

    // Draw stuff here
    
    // ---------------------------- Letter C ---------------------------------- //
    glColor3f(1, 0, 0);
    
    glBegin(GL_POLYGON);
    glVertex3f(-1.5, 0.8, 0);
    glVertex3f(-1.5, 0.85, 0);
    glVertex3f(-1.25, 0.85, 0);
    glVertex3f(-1.25, 0.8, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-1.5, 0.5, 0);
    glVertex3f(-1.5, 0.85, 0);
    glVertex3f(-1.55, 0.85, 0);
    glVertex3f(-1.55, 0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-1.5, 0.5, 0);
    glVertex3f(-1.5, 0.55, 0);
    glVertex3f(-1.25, 0.55, 0);
    glVertex3f(-1.25, 0.5, 0);
    glEnd();
    
    // ---------------------------- Letter H ---------------------------------- //
    glColor3f(1, 0, 0);

    glBegin(GL_POLYGON);
    glVertex3f(-0.8, 0.5, 0);
    glVertex3f(-0.8, 0.85, 0);
    glVertex3f(-0.85, 0.85, 0);
    glVertex3f(-0.85, 0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.8, 0.65, 0);
    glVertex3f(-0.8, 0.7, 0);
    glVertex3f(-0.55, 0.7, 0);
    glVertex3f(-0.55, 0.65, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5, 0);
    glVertex3f(-0.5, 0.85, 0);
    glVertex3f(-0.55, 0.85, 0);
    glVertex3f(-0.55, 0.5, 0);
    glEnd();
    
    
    
    // ---------------------------- Letter R ---------------------------------- //

    glColor3f(1, 0, 0);

    glBegin(GL_POLYGON);
    glVertex3f(-0.1, 0.5, 0);
    glVertex3f(-0.1, 0.85, 0);
    glVertex3f(-0.05, 0.85, 0);
    glVertex3f(-0.05, 0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.1, 0.82, 0);
    glVertex3f(-0.1, 0.85, 0);
    glVertex3f(0.15, 0.85, 0);
    glVertex3f(0.15, 0.82, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.1, 0.72, 0);
    glVertex3f(-0.1, 0.75, 0);
    glVertex3f(0.125, 0.75, 0);
    glVertex3f(0.125, 0.72, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.1, 0.72, 0);
    glVertex3f(0.1, 0.85, 0);
    glVertex3f(0.15, 0.85, 0);
    glVertex3f(0.15, 0.72, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.10, 0.68, 0);
    glVertex3f(0.10, 0.5, 0);
    glVertex3f(0.15, 0.5, 0);
    glVertex3f(0.15, 0.68, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.10, 0.67, 0);
    glVertex3f(-0.10, 0.70, 0);
    glVertex3f(0.15, 0.70, 0);
    glVertex3f(0.15, 0.67, 0);
    glEnd();
    
    // fix the diagonal one lol
    // -- couldn't get diagonal polygon for now. Alternate with 8-bit style letter R
    /*
    glBegin(GL_POLYGON);
    glVertex3f(-0.05, 0.65, 0);
    glVertex3f(-0.10, 0.60, 0);
    glVertex3f(0.15, 0.55, 0);
    glVertex3f(0.10, 0.5, 0);
    glEnd();
    */

    // ---------------------------- Letter I ---------------------------------- //
    
    glColor3f(1, 0, 0);

    glBegin(GL_POLYGON);
    glVertex3f(0.7, 0.5, 0);
    glVertex3f(0.7, 0.85, 0);
    glVertex3f(0.75, 0.85, 0);
    glVertex3f(0.75, 0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.6, 0.8, 0);
    glVertex3f(0.6, 0.85, 0);
    glVertex3f(0.85, 0.85, 0);
    glVertex3f(0.85, 0.8, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.6, 0.5, 0);
    glVertex3f(0.6, 0.55, 0);
    glVertex3f(0.85, 0.55, 0);
    glVertex3f(0.85, 0.5, 0);
    glEnd();
    
    
    // ---------------------------- Letter S ---------------------------------- //
    
    glColor3f(1, 0, 0);

    glBegin(GL_POLYGON);
    glVertex3f(1.5, 0.8, 0);
    glVertex3f(1.5, 0.85, 0);
    glVertex3f(1.25, 0.85, 0);
    glVertex3f(1.25, 0.8, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(1.25, 0.7, 0);
    glVertex3f(1.25, 0.85, 0);
    glVertex3f(1.3, 0.85, 0);
    glVertex3f(1.3, 0.7, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(1.25, 0.65, 0);
    glVertex3f(1.25, 0.7, 0);
    glVertex3f(1.5, 0.7, 0);
    glVertex3f(1.5, 0.65, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(1.45, 0.5, 0);
    glVertex3f(1.45, 0.65, 0);
    glVertex3f(1.5, 0.65, 0);
    glVertex3f(1.5, 0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(1.5, 0.5, 0);
    glVertex3f(1.5, 0.55, 0);
    glVertex3f(1.25, 0.55, 0);
    glVertex3f(1.25, 0.5, 0);
    glEnd();
    
    // ---------------------------- Letter A (middle initial) ---------------------------------- //
    
    glColor3f(0, 1, 0);

    glBegin(GL_POLYGON);
    glVertex3f(-0.1, -0.2, 0);
    glVertex3f(-0.1, 0.15, 0);
    glVertex3f(-0.05, 0.15, 0);
    glVertex3f(-0.05, -0.2, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.1, -0.2, 0);
    glVertex3f(0.1, 0.15, 0);
    glVertex3f(0.15, 0.15, 0);
    glVertex3f(0.15, -0.2, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.1, 0.0, 0);
    glVertex3f(-0.1, -0.05, 0);
    glVertex3f(0.15, -0.05, 0);
    glVertex3f(0.15, 0.0, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.1, 0.15, 0);
    glVertex3f(-0.1, 0.10, 0);
    glVertex3f(0.15, 0.10, 0);
    glVertex3f(0.15, 0.15, 0);
    glEnd();
    
    // ---------------------------- Letter P ---------------------------------- //
    
    glColor3f(0, 0, 1);

    glBegin(GL_POLYGON);
    glVertex3f(-1.5, -0.85, 0);
    glVertex3f(-1.5, -0.5, 0);
    glVertex3f(-1.55, -0.5, 0);
    glVertex3f(-1.55, -0.85, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-1.5, -0.5, 0);
    glVertex3f(-1.5, -0.55, 0);
    glVertex3f(-1.35, -0.55, 0);
    glVertex3f(-1.35, -0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-1.5, -0.65, 0);
    glVertex3f(-1.5, -0.70, 0);
    glVertex3f(-1.35, -0.70, 0);
    glVertex3f(-1.35, -0.65, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-1.3, -0.7, 0);
    glVertex3f(-1.3, -0.5, 0);
    glVertex3f(-1.35, -0.5, 0);
    glVertex3f(-1.35, -0.7, 0);
    glEnd();
    
    
    // ---------------------------- Letter A ---------------------------------- //
    
    glColor3f(0, 0, 1);

    glBegin(GL_POLYGON);
    glVertex3f(-0.7, -0.65, 0);
    glVertex3f(-0.7, -0.70, 0);
    glVertex3f(-0.95, -0.70, 0);
    glVertex3f(-0.95, -0.65, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.70, -0.85, 0);
    glVertex3f(-0.70, -0.50, 0);
    glVertex3f(-0.75, -0.50, 0);
    glVertex3f(-0.75, -0.85, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.90, -0.85, 0);
    glVertex3f(-0.90, -0.50, 0);
    glVertex3f(-0.95, -0.50, 0);
    glVertex3f(-0.95, -0.85, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.7, -0.50, 0);
    glVertex3f(-0.7, -0.55, 0);
    glVertex3f(-0.95, -0.55, 0);
    glVertex3f(-0.95, -0.50, 0);
    glEnd();
    
    
    // ---------------------------- Letter Y ---------------------------------- //
    
    glColor3f(0, 0, 1);

    glBegin(GL_POLYGON);
    glVertex3f(-0.20, -0.65, 0);
    glVertex3f(-0.20, -0.85, 0);
    glVertex3f(-0.25, -0.85, 0);
    glVertex3f(-0.25, -0.65, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.1, -0.6, 0);
    glVertex3f(-0.1, -0.65, 0);
    glVertex3f(-0.35, -0.65, 0);
    glVertex3f(-0.35, -0.6, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.30, -0.5, 0);
    glVertex3f(-0.30, -0.65, 0);
    glVertex3f(-0.35, -0.65, 0);
    glVertex3f(-0.35, -0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.10, -0.5, 0);
    glVertex3f(-0.10, -0.65, 0);
    glVertex3f(-0.15, -0.65, 0);
    glVertex3f(-0.15, -0.5, 0);
    glEnd();
    
    // ---------------------------- Letter U ---------------------------------- //
    
    glColor3f(0, 0, 1);

    glBegin(GL_POLYGON);
    glVertex3f(0.50, -0.8, 0);
    glVertex3f(0.50, -0.85, 0);
    glVertex3f(0.25, -0.85, 0);
    glVertex3f(0.25, -0.8, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.25, -0.5, 0);
    glVertex3f(0.25, -0.85, 0);
    glVertex3f(0.30, -0.85, 0);
    glVertex3f(0.30, -0.5, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.45, -0.5, 0);
    glVertex3f(0.45, -0.85, 0);
    glVertex3f(0.50, -0.85, 0);
    glVertex3f(0.50, -0.5, 0);
    glEnd();
    
    // ---------------------------- Letter M ---------------------------------- //
    
    glColor3f(0, 0, 1);

    glBegin(GL_POLYGON);
    glVertex3f(0.70, -0.5, 0);
    glVertex3f(0.70, -0.85, 0);
    glVertex3f(0.75, -0.85, 0);
    glVertex3f(0.75, -0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(1.00, -0.5, 0);
    glVertex3f(1.00, -0.85, 0);
    glVertex3f(1.05, -0.85, 0);
    glVertex3f(1.05, -0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.70, -0.5, 0);
    glVertex3f(0.70, -0.55, 0);
    glVertex3f(0.85, -0.55, 0);
    glVertex3f(0.85, -0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.90, -0.5, 0);
    glVertex3f(0.90, -0.55, 0);
    glVertex3f(1.05, -0.55, 0);
    glVertex3f(1.05, -0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.80, -0.5, 0);
    glVertex3f(0.80, -0.65, 0);
    glVertex3f(0.85, -0.65, 0);
    glVertex3f(0.85, -0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.90, -0.5, 0);
    glVertex3f(0.90, -0.65, 0);
    glVertex3f(0.95, -0.65, 0);
    glVertex3f(0.95, -0.5, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.85, -0.6, 0);
    glVertex3f(0.85, -0.65, 0);
    glVertex3f(0.95, -0.65, 0);
    glVertex3f(0.95, -0.6, 0);
    glEnd();
    

    // ---------------------------- Letter O ---------------------------------- //

    glColor3f(0, 0, 1);

    glBegin(GL_POLYGON);
    glVertex3f(1.5, -0.8, 0);
    glVertex3f(1.5, -0.85, 0);
    glVertex3f(1.25, -0.85, 0);
    glVertex3f(1.25, -0.8, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(1.25, -0.5, 0);
    glVertex3f(1.25, -0.85, 0);
    glVertex3f(1.30, -0.85, 0);
    glVertex3f(1.30, -0.5, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.45, -0.5, 0);
    glVertex3f(1.45, -0.85, 0);
    glVertex3f(1.50, -0.85, 0);
    glVertex3f(1.50, -0.5, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1.5, -0.5, 0);
    glVertex3f(1.5, -0.55, 0);
    glVertex3f(1.25, -0.55, 0);
    glVertex3f(1.25, -0.5, 0);
    glEnd();

    
    ///
    
    glColor3f(0, 1, 0);

    glBegin(GL_POLYGON);
    glVertex3f(-1.10, 0.15, 0);
    glVertex3f(-1.00, 0.10, 0);
    glVertex3f(-1.16, -0.20, 0);
    glVertex3f(-1.06, -0.25, 0);
    glEnd();
    
    
    
    ///
    
    

    
	// We have been drawing everything to the back buffer
	// Swap the buffers to see the result of what we drew
	glFlush();
	glutSwapBuffers();
}

//-------------------------------------------------------
// A function to convert window coordinates to scene
// We use it when a mouse event is handled
// Arguments: 	
//	x, y - the coordinates to be updated
//-------------------------------------------------------
void windowToScene(float& x, float& y) {
	x = (2.0f*(x / float(width))) - 1.0f;
	y = 1.0f - (2.0f*(y / float(height)));
}

//-------------------------------------------------------
// A function to handle window resizing
// Called every time the window is resized
// Arguments: 	
//	b    - mouse button that was clicked, left or right
//	s 	 - state, either mouse-up or mouse-down
//	x, y - coordinates of the mouse when click occured
//-------------------------------------------------------
void appReshapeFunc(int w, int h) {
	// Window size has changed
	width = w;
	height = h;

	double scale, center;
	double winXmin, winXmax, winYmin, winYmax;

	// Define x-axis and y-axis range
	const double appXmin = -1.0;
	const double appXmax = 1.0;
	const double appYmin = -1.0;
	const double appYmax = 1.0;

	// Define that OpenGL should use the whole window for rendering
	glViewport(0, 0, w, h);

	// Set up the projection matrix using a orthographic projection that will
	// maintain the aspect ratio of the scene no matter the aspect ratio of
	// the window, and also set the min/max coordinates to be the disered ones
	w = (w == 0) ? 1 : w;
	h = (h == 0) ? 1 : h;

	if ((appXmax - appXmin) / w < (appYmax - appYmin) / h) {
		scale = ((appYmax - appYmin) / h) / ((appXmax - appXmin) / w);
		center = (appXmax + appXmin) / 2;
		winXmin = center - (center - appXmin)*scale;
		winXmax = center + (appXmax - center)*scale;
		winYmin = appYmin;
		winYmax = appYmax;
	}
	else {
		scale = ((appXmax - appXmin) / w) / ((appYmax - appYmin) / h);
		center = (appYmax + appYmin) / 2;
		winYmin = center - (center - appYmin)*scale;
		winYmax = center + (appYmax - center)*scale;
		winXmin = appXmin;
		winXmax = appXmax;
	}

	// Now we use glOrtho to set up our viewing frustum
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(winXmin, winXmax, winYmin, winYmax, -1, 1);
}


//-------------------------------------------------------
// A function to handle mouse clicks
// Called every time the mouse button goes up or down
// Arguments: 	
//	b    - mouse button that was clicked, left or right
//	s 	 - state, either mouse-up or mouse-down
//	x, y - coordinates of the mouse when click occured
//-------------------------------------------------------
void appMouseFunc(int b, int s, int x, int y) {
	// Convert from Window to Scene coordinates
	float mx = (float)x;
	float my = (float)y;

	windowToScene(mx, my);

	

	// Redraw the scene by calling appDrawScene above
	// so that the point we added above will get painted
	glutPostRedisplay();
}

//-------------------------------------------------------
// A function to handle mouse dragging
// Called every time mouse moves while button held down
// Arguments: 	
//	x, y - current coordinates of the mouse
//-------------------------------------------------------
void appMotionFunc(int x, int y) {

	// Again, we redraw the scene
	glutPostRedisplay();
}

//-------------------------------------------------------
// A function to handle keyboard events
// Called every time a key is pressed on the keyboard
// Arguments: 	
//	key  - the key that was pressed
//	x, y - coordinates of the mouse when key is pressed
//-------------------------------------------------------
void appKeyboardFunc(unsigned char key, int x, int y) {
	

	// After all the state changes, redraw the scene
	glutPostRedisplay();
}


int main(int argc, char** argv) {
	// Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

	// Setup window position, size, and title
	glutInitWindowPosition(20, 60);
	glutInitWindowSize(width, height);
	glutCreateWindow("CSE165 OpenGL Demo");

	// Setup some OpenGL options
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_LINE_SMOOTH);


	// Set callback for drawing the scene
	glutDisplayFunc(appDrawScene);

	// Set callback for resizing th window
	glutReshapeFunc(appReshapeFunc);

	// Set callback to handle mouse clicks
	glutMouseFunc(appMouseFunc);

	// Set callback to handle mouse dragging
	glutMotionFunc(appMotionFunc);

	// Set callback to handle keyboad events
	glutKeyboardFunc(appKeyboardFunc);

	// Start the main loop
	glutMainLoop();
}
