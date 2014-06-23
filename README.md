CoordinateCalculator
====================

Reads in text file with 3D coordinates. Sets first coordinate as home point and calculates distance from subsequent points. Prints coordinates ordered by distance.<br>

v1.0

------------------

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
