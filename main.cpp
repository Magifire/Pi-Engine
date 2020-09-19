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
    int characterX = 50;
    int characterY = 1;
    bool hasKey1 = false;
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
    const string ACIIDEBUG2WK ="|*                              |                             |";
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
    cout << DebugStart.ASCIIDEBUG2 << endl;
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
  }
  else if(Input == "s"){
    character.characterY++;
    isRun = true;
  }
  else if(Input == "a" && character.characterX != 1){
    character.characterX--;
    isRun = true;
  }
  else if(Input == "d" && character.characterX != 57 && character.characterX != 30){
    if(character.characterX != 30){
      if(character.characterY == 11 && character.hasKey1 == true){
        character.characterX++;
        isRun = true;
      }
      }
    character.characterX++;
    isRun = true;
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
      //clear data for usage in next processing round
      isRun = false;
   // }
  }
 
}