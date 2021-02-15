/**
 * @file
 * Code calculates the motions of electron 
 *   under the Poisson-Maxwell equation 
 *     using the Particle-In-Cell (PIC) method
 *
 * @author Shu Wang, shu@stargazingtech.org 
 */

/* ---- System Header einbinden ---- */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

#include <GLFW/glfw3.h>

/* ---- Eigene Header einbinden ---- */
#include "io.h"
#include "scene.h" 
#include "types.h"

/**
 * Error-Callback-Funktion mit Print des Fehlers.
 */
static void error_callback(int error, const char* description)
{
    fputs(description, stderr);
}

/**
 * Hauptprogramm.
 * Initialisiert Fenster, Anwendung und Callbacks, startet glutMainLoop.
 * @param argc Anzahl der Kommandozeilenparameter (In).
 * @param argv Kommandozeilenparameter (In).
 * @return Rueckgabewert im Fehlerfall ungleich Null.
 */
int
main (int argc, char **argv){

	srand (time (0));
	
	glfwSetErrorCallback(error_callback);

	
	if ( !initAndStartIO ("Physical, Partical and Plasma Simulations", 1920, 1080) ){

		fprintf (stderr, "Initialization failed!\n");
		glfwTerminate();
		return 1;

	} 
	
	glfwTerminate();
	
	return 0;
}
