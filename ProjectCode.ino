//By Patrick macartney-Filgate and Steven Perez
#include <Servo.h>

//variables for the three diffrent servos 
Servo myservoSpaceship;
Servo myservoEva;
Servo myservoRock;

int pos = 0;    // variable to store the servo position

void setup() {
  myservoSpaceship.attach(2);  // attaches the spaceship servo on pin 2 to the servo object
  myservoEva.attach(3);  // attaches the Eva servo on pin 3 to the servo object
  myservoRock.attach(4);  // attaches the rock servo on pin 4 to the servo object



   for (pos = 60; pos >= 0; pos -= 1) { // goes from 0 degrees to 60 degrees
    // in steps of 1 degree
    myservoSpaceship.write(pos);              // tell  the spaceship servo to go to position in variable 'pos'
    delay(30);                       // waits 30 ms for the servo to reach the position
  }

 for (pos = 90; pos >= 0; pos -= 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservoEva.write(pos);              // tell the Eva servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }


   for (pos = 90; pos >= 0; pos -= 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservoRock.write(pos);              // tell teh rock servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }

}

void loop() {
 //Not needed for this project.
}


/*

//pattern 1 - Runs the code, when pasted in the setup section

    for (pos = 60; pos >= 0; pos -= 1) { // goes from 0 degrees to 60 degrees
    // in steps of 1 degree
    myservoSpaceship.write(pos);              // tell  the spaceship servo to go to position in variable 'pos'
    delay(30);                       // waits 30 ms for the servo to reach the position
  }

 for (pos = 90; pos >= 0; pos -= 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservoEva.write(pos);              // tell the Eva servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }


   for (pos = 90; pos >= 0; pos -= 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservoRock.write(pos);              // tell teh rock servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }





 //pattern 2 resets the code when pasted into the setup section.


 for (pos = 0; pos <= 60; pos += 1) { 
    // in steps of 1 degree                      // tell  the spaceship servo to go to position in variable 'pos'
    myservoSpaceship.write(pos);              // waits 30 ms for the servo to reach the position
    delay(30);                       
  }

 for (pos = 0; pos <= 90; pos += 1) { 
    // in steps of 1 degree
    myservoEva.write(pos);             // tell the Eva servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }


 for (pos = 0; pos <= 90; pos += 1) { 
    // in steps of 1 degree
    myservoRock.write(pos);              // tell teh rock servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }

  */
