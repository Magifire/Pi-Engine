#include <iostream>
#include <string>
#include <sstream>


// I know its bad practice, but it makes my code clearer :)
using namespace std;

// define variables and classes for usage in processing

class Character{
  public:
    char characterSymbol = '#';
    int characterX = 0;
    int characterY = 0;
    string xPosArray [59] = {"|#                                                            |", "| #                                                           |", "|  #                                                          |", "|   #                                                         |", "|    #                                                        |", "|     #                                                       |", "|      #                                                      |", "|       #                                                     |", "|        #                                                    |", "|         #                                                   |", "|          #                                                  |", "|           #                                                 |", "|            #                                                |", "|             #                                               |", "|              #                                              |", "|               #                                             |", "|                #                                            |", "|                 #                                           |", "|                  #                                          |", "|                   #                                         |", "|                    #                                        |", "|                     #                                       |", "|                      #                                      |", "|                       #                                     |", "|                        #                                    |", "|                         #                                   |", "|                          #                                  |", "|                           #                                 |",  "|                            #                                |", "|                             #                               |", "|                              #                              |", "|                               #                             |", "|                                #                            |", "|                                 #                           |", "|                                  #                          |", "|                                   #                         |", "|                                    #                        |", "|                                     #                       |", "|                                      #                      |", "|                                       #                     |", "|                                        #                    |", "|                                         #                   |", "|                                          #                  |", "|                                           #                 |", "|                                            #                |", "|                                             #               |", "|                                                 #           |", "|                                                  #          |", "|                                                   #         |", "|                                                    #        |", "|                                                     #       |", "|                                                      #      |", "|                                                       #     |", "|                                                        #    |", "|                                                         #   |", "|                                                          #  |", "|                                                           # |", "|                                                            #|"};
}character;

class DebugStart{
  public:
    const string ASCIIDEBUG1 = " _____________________________________________________________";
    const string ASCIIDEBUG2 = "|                                                             |";
}DebugStart;


int vertiWallExtra1 = 0;
int vertiWallExtra2 = 0;
int debugAmount = 0;


//Screen Scripts


// code from others! Big thanks!

void playerCharacter(){
  
}

void ClearScreen()
    {
    cout << string( 100, '\n' );
    }

void runClearScreen(){
  cout << DebugStart.ASCIIDEBUG1 << endl ;
  if (character.characterY == 1){
    cout << character.xPosArray[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG2 << endl ;
  cout << DebugStart.ASCIIDEBUG1;
}


// My main code, This is where the input is gathered and processed.
int main() {
 //screen printing
    ClearScreen();
    runClearScreen();

 //clear data for usage in next processing round
}