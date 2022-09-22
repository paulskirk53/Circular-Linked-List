#pragma once
#include <Arduino.h>

//note these are declarations - which is all you're alowed in a .h file
//the definition is in the .cpp file - the definition can include an initialisation, whereas the declaration can't

extern int TargetAzimuth;
extern int CurrentAzimuth;
extern int savedAzimuth ;
extern int stepsToTarget;
extern const int A[360] ;
extern int CDArray[360];

extern const int *currentAzPtr ;
extern const int *targetAzPtr  ;

extern int calculateClockwiseSteps();
// extern int calculateAnticlockwiseSteps();
extern int countDown(String direction);
extern int initialiseCDArray();

