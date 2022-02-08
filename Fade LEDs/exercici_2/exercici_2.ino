
/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 9;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //A
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //D
  ratlla();
  punt();
  punt();
  //Espai entre paraules
  espaiL();
  //U
  punt();
  punt();
  ratlla();
  //Espai entre paraules
  espaiL();
  //I
  punt();
  punt();
  //Espai entre paraules
  espaiL();
  //N
  ratlla();
  punt();
  //Espai entre paraules
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre paraules
  espaiP();
  //2
  punt();
  punt();
  ratlla();
  ratlla();
  ratlla();
  //Espai entre paraules
  espaiL();
  //0
  ratlla();
  ratlla();
  ratlla();
  ratlla();
  ratlla();
  //Espai entre paraules
  espaiL();
  //2
  punt();
  punt();
  ratlla();
  ratlla();
  ratlla();
  //Espai entre paraules
  espaiL();
  //2
  punt();
  punt();
  ratlla();
  ratlla();
  ratlla();
  //Espai entre paraules
  espaiL();
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
