CoordinateCalculator
====================

Reads in text file with 3D coordinates. Sets first coordinate as home point and calculates distance from subsequent points. Prints coordinates ordered by distance.<br>

v1.0

------------------

/*****************************************************************/<br>
/*                                                               */<br>
/*  Programmer Name: Peter Ossian                                */<br>
/*  Date: 6/17/2014                                              */<br>
/*                                                               */<br>
/*===============================================================*/<br>
/*                                                               */<br>
/*  Program Definition:                                          */<br>
/*                                                               */<br>
/*   Reads from textfile called "inFile.txt" and calculates the  */<br>
/*  distance from the first coordinate to the remaining          */<br>
/*  coordinates in the text file. The program sorts the          */<br>
/*  coordinates by distance and prints them onscreen             */<br>
/*                                                               */<br>
/*===============================================================*/<br>
/*                                                               */<br>
/*  Identifier Dictionary:                                       */<br>
/*                                                               */<br>
/*     class coordHandler  |                                     */<br>
/*  _______________________|                                     */<br>
/* /                                                             */<br>
/* | x           --|                                             */<br>
/* | y             |__ struct coordinates                        */<br>
/* | z             |    (defined as coordinates hpoint &         */<br>
/* | distance    --|            vector<coordinates> cdvec)       */<br>
/* | setHomePoint                                                */<br>
/* | readNextLine                                                */<br>
/* | calculateDistance                                           */<br>
/* | printSortedByDistance                                       */<br>
/* | sortVector                                                  */<br>
/* | pushElements                                                */<br>
/* | incrementVectorSize                                         */<br>
/*                                                               */<br>
/*****************************************************************/<br>
