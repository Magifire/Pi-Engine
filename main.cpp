#include <iostream>
#include <string>
#include <sstream>

// Dear anyone visiting this repl, to use: change the characterX and characterY values to numbers from 1-57 for x and 1-21 for a starting pos. Then type in w, a, s, or d to move respectibly.! The hastag is the player, and the astric is the key to the door. Please write a comment under this when you are finished experimenting!

// DO NOT EDIT THE main FILE!!!! THIS WILL FOREVER DESTROY MY PROGECT!



// I know its bad practice, but it makes my code clearer :)
using namespace std;

// define variables and classes for usage in processing

class Character{
  public:
    char characterSymbol = '#';
    int characterX = 1;
    int characterY = 11;
    bool hasKey1 = false;
    int eventNum = 1;
    int plSteps = 0;
    string xPosArrayNK [59] = {
"|#                              |                             |", 
"| #                             |                             |", 
"| * #                           |                             |", 
"| *  #                          |                             |", 
"| *   #                         |                             |", 
"| *    #                        |                             |", 
"| *     #                       |                             |", 
"| *      #                      |                             |", 
"| *       #                     |                             |", 
"| *        #                    |                             |", 
"| *         #                   |                             |", 
"| *          #                  |                             |", 
"| *           #                 |                             |", 
"| *            #                |                             |", 
"| *             #               |                             |", 
"| *              #              |                             |", 
"| *               #             |                             |", 
"| *                #            |                             |", 
"| *                 #           |                             |", 
"| *                 #           |                             |", 
"| *                  #          |                             |", 
"| *                   #         |                             |", 
"| *                    #        |                             |", 
"| *                     #       |                             |", 
"| *                      #      |                             |", 
"| *                       #     |                             |", 
"| *                        #    |                             |", 
"| *                         #   |                             |",  
"| *                          #  |                             |", 
"| *                           # |                             |", 
"| *                            #|                             |", 
"| *                             #                             |", 
"| *                             |#                            |", 
"| *                             | #                           |", 
"| *                             |  #                          |", 
"| *                             |   #                         |", 
"| *                             |    #                        |", 
"| *                             |     #                       |", 
"| *                             |      #                      |", 
"| *                             |       #                     |", 
"| *                             |        #                    |", 
"| *                             |         #                   |", 
"| *                             |          #                  |", 
"| *                             |           #                 |", 
"| *                             |            #                |", 
"| *                             |             #               |", 
"| *                             |                 #           |", 
"| *                             |                  #          |",
"| *                             |                   #         |", 
"| *                             |                    #        |", 
"| *                             |                     #       |", 
"| *                             |                      #      |", 
"| *                             |                       #     |", 
"| *                             |                        #    |", 
"| *                             |                         #   |", 
"| *                             |                          #  |", 
"| *                             |                           # |", 
"| *                             |                            #|"
};
string xPosArray[59] = {"|#                              |                             |", 
"| #                             |                             |", 
"|   #                           |                             |", 
"|    #                          |                             |", 
"|     #                         |                             |", 
"|      #                        |                             |", 
"|       #                       |                             |", 
"|        #                      |                             |", 
"|         #                     |                             |", 
"|          #                    |                             |", 
"|           #                   |                             |", 
"|            #                  |                             |", 
"|             #                 |                             |", 
"|              #                |                             |", 
"|               #               |                             |", 
"|                #              |                             |", 
"|                 #             |                             |", 
"|                  #            |                             |", 
"|                   #           |                             |", 
"|                   #           |                             |", 
"|                    #          |                             |", 
"|                     #         |                             |", 
"|                      #        |                             |", 
"|                       #       |                             |", 
"|                        #      |                             |", 
"|                         #     |                             |", 
"|                          #    |                             |", 
"|                           #   |                             |",  
"|                            #  |                             |", 
"|                             # |                             |", 
"|                              #|                             |", 
"|                               #                             |", 
"|                               |#                            |", 
"|                               | #                           |", 
"|                               |  #                          |", 
"|                               |   #                         |", 
"|                               |    #                        |", 
"|                               |     #                       |", 
"|                               |      #                      |", 
"|                               |       #                     |", 
"|                               |        #                    |", 
"|                               |         #                   |", 
"|                               |          #                  |", 
"|                               |           #                 |", 
"|                               |            #                |", 
"|                               |             #               |", 
"|                               |                 #           |", 
"|                               |                  #          |",
"|                               |                   #         |", 
"|                               |                    #        |", 
"|                               |                     #       |", 
"|                               |                      #      |", 
"|                               |                       #     |", 
"|                               |                        #    |", 
"|                               |                         #   |", 
"|                               |                          #  |", 
"|                               |                           # |", 
"|                               |                            #|"};
}character;

class DebugStart{
  public:
    const string ASCIIDEBUG1 = " _____________________________________________________________";
    const string ASCIIDEBUG2 = "|                               |                             |";
    const string ACIIDEBUG2WK ="| *                             |                             |";
}DebugStart;


int vertiWallExtra1 = 0;
int vertiWallExtra2 = 0;
int debugAmount = 0;
bool isRun = true;
string Input = "";

//Screen Scripts


// code from others! Big thanks!
void ClearScreen()
    {
    cout << string( 100, '\n' );
    }

void runClearScreen(){
  cout << DebugStart.ASCIIDEBUG1 << endl ;
  if (character.characterY == 1 || character.characterY == 0){
    if(character.characterY == 0){
      character.characterY = 1;
    }
    if(character.hasKey1 == true){
    cout << character.xPosArray[character.characterX] << endl;
  } else{
    cout << character.xPosArrayNK[character.characterX] << endl;
  }
  }
  else{
    if(character.hasKey1 == true){
      cout << DebugStart.ASCIIDEBUG2 << endl;
    }
    else{
    cout << DebugStart.ACIIDEBUG2WK << endl;
    }
 }
    if (character.characterY == 2){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 3){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 4){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 5){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 6){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 7){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 8){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 9){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 10){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 11){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 12){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 13){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 14){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 15){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 16){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 17){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 18){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 19){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 20){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
    if (character.characterY == 21 || character.characterY == 22){
    if(character.characterY == 22){
      character.characterY = 21;
    }
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
  cout << DebugStart.ASCIIDEBUG1;
}

void processIn(){
  cin >> Input;
  if(Input == "w"){
    character.characterY--;
    isRun = true;
    character.plSteps++;
  }
  else if(Input == "s"){
    character.characterY++;
    isRun = true;
    character.plSteps++;
  }
  else if(Input == "a" && character.characterX != 1){
    character.characterX--;
    isRun = true;
    character.plSteps++;
  }
  else if(Input == "d" && character.characterX != 57){
    if(character.characterX != 30){
      if(character.characterY == 11 && character.hasKey1 == true){
        character.characterX++;
        isRun = true;
        character.plSteps++;
      }
      
    character.characterX++;
    isRun = true;
    character.plSteps++;
  }}
  if(character.characterX == 1 && character.characterY == 1 && character.hasKey1 != true){
    character.hasKey1 = true;
    character.plSteps++;
  }
  if((character.plSteps >= 10 && character.eventNum == 1) || (character.plSteps == 14 && character.eventNum == 2)){
    character.eventNum++;
  }
}

void eventSyst(){
  if(character.eventNum == 1){
    cout << endl << "You hear a faint sound, seemingly comeing from below you. Hello? Is anyone there? If there is, please find a way to me, " << endl << "someone locked me in here!";
  }
  if(character.eventNum == 2){
    cout << endl << "As you take a couple steps, the voice becomes clearer, and the person seems to be shouting. HELP ME PLEASE! THERE SHOULD BE A SMALL HOLE SOMEWHEAR NEAR YOU! THIS PERSON NORMALLY FEEDS ME THROUGH IT, MAYBE WE CAN TALK THROUGH THERE!";
  }
  if(character.eventNum == 4){

  }
}

// My main code, This is where the input is gathered and processed.
int main() {
  while (true)
  {
    processIn();
    //if(isRun == true){
     //screen printing
      ClearScreen();
      runClearScreen();
      eventSyst();
      //clear data for usage in next processing round
      isRun = false;
   // }
  }
 
}