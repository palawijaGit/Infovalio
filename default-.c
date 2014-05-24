
#pragma config(Sensor, S4,     lightSensor2,   sensorLightActive)
#pragma config(Sensor, S2,     lightSensor3,   sensorLightActive)
#pragma config(Sensor, S3,     lightSensor1,   sensorLightActive)
#pragma config(Sensor, S1,     colorSensor4,   sensorCOLORFULL)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*--------------------------------------------------------------------------------------------------------*\
|*                                                                                                        *|
|*                                           - Line Tracker -                                             *|
|*                                            ROBOTC on NXT                                               *|
|*                                                                                                        *|
|*  This program allows your taskbot to follow a line in reverse.                                         *|
|*                                                                                                        *|
|*                                        ROBOT CONFIGURATION                                             *|
|*    NOTES:                                                                                              *|
|*    1)  The Light Sensor is attached to the back of the robot.                                          *|
|*    2)  Be sure to take readings of your Light Sensor over the light and dark areas.  Once you have     *|
|*        the values, add them and divide by 2 to find your threshold.  Then, use your threshold as a     *|
|*        comparison in your program.                                                                     *|
|*                                                                                                        *|
|*    MOTORS & SENSORS:                                                                                   *|
|*    [I/O Port]              [Name]              [Type]              [Description]                       *|
|*    Port B                  motorB              NXT                 Right motor                         *|
|*    Port C                  motorC              NXT                 Left motor                          *|
|*    Port 1                  lightSensor         Light Sensor        Back mounted                        *|
\*---------------------------------------------------------------------------------------------------4246-*/

task main()
{

	  int threshold =34;

   wait1Msec(50);                        // The program waits 50 milliseconds to initialize the light sensor.

   while (true)
  	{
    	switch (SensorValue[colorSensor4])
    	{
    		case REDCOLOR:



						motor[motorA]  = -5;  //utk tutup
						wait1Msec(2000);
						motor[motorA] = 0;

      			//motor[motorA]  = 3; //utk buka
      			//wait1Msec(2000);

      			while(true)                           // Infinite loop
   {
      if(SensorValue[lightSensor1] > threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorB] = 35;                  // Motor B is run at a 60 power level.
				motor[motorC] = 35;                  // Motor C is run at a 20 power level.

      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorB] = 0;                  // Motor B is run at a 20 power level.
				motor[motorC] = 0;                  // Motor C is run at a 60 power level.
				motor[motorA] = 2;
      }
   }

   {
      if(SensorValue[lightSensor2] < threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorC] = 35;                  // Motor B is run at a 60 power level.
				motor[motorB] = 35;                  // Motor C is run at a 20 power level.

      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorC] = 0;                  // Motor B is run at a 20 power level.
				motor[motorB] = 0;                  // Motor C is run at a 60 power level.
				motor[motorA] = 2;
      }
   }

   {
      if(SensorValue[lightSensor3] < threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorC] = 35;                  // Motor B is run at a 60 power level.
				motor[motorB] = 25;                  // Motor C is run at a 20 power level.


      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorC] = 0;                  // Motor B is run at a 20 power level.
				motor[motorB] = 0;                  // Motor C is run at a 60 power level.
				motor[motorA] = 2;

				}


   }
   			//	motor[motorA]  = 3; //utk buka
      	//	wait1Msec(2000);

      			break;


 continue;
      			case BLUECOLOR:


						motor[motorA]  = -5;  //utk tutup
						wait1Msec(2000);
						motor[motorA] = 0;

      			//motor[motorA]  = 3; //utk buka
      			//wait1Msec(2000);



      			while(true)                           // Infinite loop
   {
      if(SensorValue[lightSensor1] > threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorB] = 35;                  // Motor B is run at a 60 power level.
				motor[motorC] = 35;                  // Motor C is run at a 20 power level.



      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorB] = 0;                  // Motor B is run at a 20 power level.
				motor[motorC] = 0;                  // Motor C is run at a 60 power level.
				motor[motorA] = 2;
      }
   }

   {
      if(SensorValue[lightSensor2] < threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorC] = 35;                  // Motor B is run at a 60 power level.
				motor[motorB] = 35;                  // Motor C is run at a 20 power level.



      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorC] = 0;                  // Motor B is run at a 20 power level.
				motor[motorB] = 0;                  // Motor C is run at a 60 power level.
				motor[motorA] = 2;
      }
   }

   {
      if(SensorValue[lightSensor3] < threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorC] = 35;                  // Motor B is run at a 60 power level.
				motor[motorB] = 25;                  // Motor C is run at a 20 power level.



      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorC] = 0;                  // Motor B is run at a 20 power level.
				motor[motorB] = 0;                  // Motor C is run at a 60 power level.
				motor[motorA] = 2;
      }
   }
        //motor[motorA]  = 3; //utk buka
      //	wait1Msec(2000);

   break;


      			default:
      			while(true)                           // Infinite loop
   {
      if(SensorValue[lightSensor1] > threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorB] = 35;                  // Motor B is run at a 60 power level.
				motor[motorC] = 35;                  // Motor C is run at a 20 power level.
      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorB] = 0;                  // Motor B is run at a 20 power level.
				motor[motorC] = 0;                  // Motor C is run at a 60 power level.
      }
   }

   {
      if(SensorValue[lightSensor2] < threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorC] = 35;                  // Motor B is run at a 60 power level.
				motor[motorB] = 35;                  // Motor C is run at a 20 power level.
      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorC] = 0;                  // Motor B is run at a 20 power level.
				motor[motorB] = 0;                  // Motor C is run at a 60 power level.
      }
   }

   {
      if(SensorValue[lightSensor3] < threshold)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorC] = 35;                  // Motor B is run at a 60 power level.
				motor[motorB] = 25;                  // Motor C is run at a 20 power level.
      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorC] = 0;                  // Motor B is run at a 20 power level.
				motor[motorB] = 0;                  // Motor C is run at a 60 power level.
      }
   }




      			break;



			}
	}
StopAllTasks ();




}
