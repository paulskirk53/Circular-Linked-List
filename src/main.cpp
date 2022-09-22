//this code will be named whichDirection and will return the string 'direction'
//anglemod360 I think works out the difference between target and current az on a  mod basis. what replaces that idea in the linked list version?
//anglemod360 is also used to provide info to the monitor program - need to check the monitor to find out what's required


#include "linkedList.h"


void setup()
{
  // clcount and  cclcount both set to zero in the linkedList.h
  
  Serial.begin(9600);
  Serial.setTimeout(3000);
  //initialiseList();
}

void loop()
{
  
}