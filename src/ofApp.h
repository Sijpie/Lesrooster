#pragma once

#include "ofMain.h"
#include "Modules.h"
#include "Leerlingen.h"
#include "Docenten.h"
#include "Lokalen.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

	private:
		Modules Kernmodule;
		Modules Keuzemodule;
		Modules SellIt;
		// Modules hebben starttijd en eindtijd, mogen niet overlappen.

		Leerlingen IAD2;
		Leerlingen GAR2A;
		Leerlingen GAR2B;
		Leerlingen GDS2;
		Leerlingen GDV2;

		Docenten Hoofddocent;
		Docenten Docent;

		Lokalen Lokaal(nummer)
		//Ik zou het liefst van elk lokaal een object maken met eigen eigenschappen 
		//(grootte, apparatuur) en zo het programma een lokaal laten koppelen
		//aan elke module object. 
		
};
