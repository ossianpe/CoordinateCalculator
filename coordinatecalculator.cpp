/*****************************************************************/
/*                                                               */
/*  Programmer Name: Peter Ossian                                */
/*  Date: 6/17/2014                                              */
/*                                                               */
/*===============================================================*/
/*                                                               */
/*  Program Definition:                                          */
/*                                                               */
/*   Reads from textfile called "inFile.txt" and calculates the  */
/*  distance from the first coordinate to the remaining          */
/*  coordinates in the text file. The program sorts the          */
/*  coordinates by distance and prints them onscreen             */
/*                                                               */
/*===============================================================*/
/*                                                               */
/*  Identifier Dictionary:                                       */
/*                                                               */
/*     class coordHandler  |                                     */
/*  _______________________|                                     */
/* /                                                             */
/* | x           --|                                             */
/* | y             |__ struct coordinates                        */
/* | z             |    (defined as coordinates hpoint &         */
/* | distance    --|            vector<coordinates> cdvec)       */
/* | setHomePoint                                                */
/* | readNextLine                                                */
/* | calculateDistance                                           */
/* | printSortedByDistance                                       */
/* | sortVector                                                  */
/* | pushElements                                                */
/* | incrementVectorSize                                         */
/*                                                               */
/*****************************************************************/


#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <math.h>

using namespace std;

struct coordinates {
	//Stores x, y, z coordinates and distance from first point
	int x;
	int y;
	int z;
	int distance;
}; 

bool compareByLength(const coordinates &a, const coordinates &b) {
	//Compares calculated respective distances from first point 
    return a.distance < b.distance;
}

class coordHandler {
	public:
		coordHandler() {}
		void setHomePoint(ifstream& infile) {
			//Reads first point to make all distance calculations from
			infile>>hpoint.x>>hpoint.y>>hpoint.z;
		}
		void readNextLine(ifstream& infile) {
			//Reads next line of input into vector
			infile>>cdvec[cdvec.size()-1].x>>cdvec[cdvec.size()-1].y>>cdvec[cdvec.size()-1].z;
		}
		void calculateDistance() {
			//Calculates distance from 
			coordinates tempcoor;
			//Finds difference between first point and current point
 	    	tempcoor.x = hpoint.x - cdvec[cdvec.size()-1].x;
 	    	tempcoor.y = hpoint.y - cdvec[cdvec.size()-1].y;
 	    	tempcoor.z = hpoint.z - cdvec[cdvec.size()-1].z;
			
			//Squares axises
			tempcoor.x *=tempcoor.x;
			tempcoor.y *=tempcoor.y;
			tempcoor.z *=tempcoor.z;
			
			//Adds and find square root of the total
			cdvec[cdvec.size()-1].distance = sqrt(tempcoor.x + tempcoor.y + tempcoor.z);
		}
		void printSortedByDistance() {
			//Iterates through vector and prints sorted points
			for (i = 0; i < cdvec.size(); ++i) {
				cout<<cdvec[i].x<<" "<<cdvec[i].y<<" "<<cdvec[i].z<<endl;
			}
		}
		void sortVect() {
			//Sorts vector by distance from first point
			std::sort(cdvec.begin(), cdvec.end(), compareByLength);  
		}
		void pushElement() {
			//Push coordinate into vector
			cdvec.push_back(coordinates());
		}
	private:
		coordinates hpoint;
		vector<coordinates> cdvec;
		size_t i;
};

int main (int argc, const char *argv[]) {
	//Loads inFile.txt and gives error if inFile is undetected
	ifstream inFile;
	inFile.open("inFile.txt", ios ::in);
	if (!inFile) {
		cout << "inFile open error!" << endl;
	}
	coordHandler cdHandler;
	cdHandler.setHomePoint(inFile);
	while(!inFile.eof())
		//Loops until end of file
		//Reads from inFile.txt
		//Calculates distance from first point
	{
		cdHandler.pushElement();
		cdHandler.readNextLine(inFile);
		cdHandler.calculateDistance();
	}
	//Sorts vector based on distance from first point
	cdHandler.sortVect();
	//Prints the vector sorted by distance form first point
	cdHandler.printSortedByDistance();
}