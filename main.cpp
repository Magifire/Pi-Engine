#include <iostream>
#include <string>
#include <sstream>

// Dear anyone visiting this repl, to use: change the characterX and characterY values to numbers from 1-57 for x and 1-21 for a starting pos. Then type in w, a, s, or d to move respectibly. Use the z key as an action. The hastag is the player, and the astric is the key to the door. Please write a comment under this when you are finished experimenting!

// DO NOT EDIT THE main FILES!!!! THIS WILL FOREVER DESTROY MY PROGECT!



// I know its bad practice, but it makes my code clearer :)
using namespace std;

// define variables and classes for usage in processing

class Character{
  public:
    bool selScreen = true;
    int charlevel = 1;
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
    string xPosArrayWH [59] = {
"|#                              |                             |", 
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
"|                               #                            @|", 
"|                               |#                           @|", 
"|                               | #                          @|", 
"|                               |  #                         @|", 
"|                               |   #                        @|", 
"|                               |    #                       @|", 
"|                               |     #                      @|", 
"|                               |      #                     @|", 
"|                               |       #                    @|", 
"|                               |        #                   @|", 
"|                               |         #                  @|", 
"|                               |          #                 @|", 
"|                               |           #                @|", 
"|                               |            #               @|", 
"|                               |             #              @|", 
"|                               |                 #          @|", 
"|                               |                  #         @|",
"|                               |                   #        @|", 
"|                               |                    #       @|", 
"|                               |                     #      @|", 
"|                               |                      #     @|", 
"|                               |                       #    @|", 
"|                               |                        #   @|", 
"|                               |                         #  @|", 
"|                               |                          # @|", 
"|                               |                           #@|", 
"|                               |                            #|"
};
    string xPosArrayWHNC [59] = {
"|#                              |                             |", 
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
"|                                                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|",
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|", 
"|                               |                            @|"
};
string xPosArrayEx[59] = {"|#                                                            |", 
"| #                             |                              ", 
"|   #                           |                              ", 
"|    #                          |                              ", 
"|     #                         |                              ", 
"|      #                        |                              ", 
"|       #                       |                              ", 
"|        #                      |                              ", 
"|         #                     |                              ", 
"|          #                    |                              ", 
"|           #                   |                              ", 
"|            #                  |                              ", 
"|             #                 |                              ", 
"|              #                |                              ", 
"|               #               |                              ", 
"|                #              |                              ", 
"|                 #             |                              ", 
"|                  #            |                              ", 
"|                   #           |                              ", 
"|                   #           |                              ", 
"|                    #          |                              ", 
"|                     #         |                              ", 
"|                      #        |                              ", 
"|                       #       |                              ", 
"|                        #      |                              ", 
"|                         #     |                              ", 
"|                          #    |                              ", 
"|                           #   |                              ",  
"|                            #  |                              ", 
"|                             # |                              ", 
"|                              #|                              ", 
"|                               #                              ", 
"|                               |#                             ", 
"|                               | #                            ", 
"|                               |  #                           ", 
"|                               |   #                          ", 
"|                               |    #                         ", 
"|                               |     #                        ", 
"|                               |      #                       ", 
"|                               |       #                      ", 
"|                               |        #                     ", 
"|                               |         #                    ", 
"|                               |          #                   ", 
"|                               |           #                  ", 
"|                               |            #                 ", 
"|                               |             #                ", 
"|                               |                 #            ", 
"|                               |                  #           ",
"|                               |                   #          ", 
"|                               |                    #         ", 
"|                               |                     #        ", 
"|                               |                      #       ", 
"|                               |                       #      ", 
"|                               |                        #     ", 
"|                               |                         #    ", 
"|                               |                          #   ", 
"|                               |                           #  ", 
"|                               |                            # "};
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
    const string ASCIIDEBUG2EX="|                               |                              ";
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

void runClearScreen1(){
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
    cout << character.xPosArrayEx[character.characterX] << endl;
  }
  else{
    cout << DebugStart.ASCIIDEBUG2EX << endl;
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
    if(character.characterX >= 32){
      cout << character.xPosArrayWH[character.characterX] << endl;
    }
    else{
    cout << character.xPosArray[character.characterX] << endl;
  }}
  else{
     if(character.characterX >= 32){
          cout << character.xPosArrayWHNC[character.characterX] << endl;
      }
      else{
    cout << DebugStart.ASCIIDEBUG2 << endl;
  }}
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
  else if(Input == "d" && character.characterX != 58){
    if(character.characterX == 58){
      if(character.characterY == 10){
        character.charlevel++;
      }
      character.characterX = 57;
    }
    
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
  else if(Input == "z"){
    // Use actions here
    if(character.characterX == 57 && character.characterY == 19 && character.eventNum == 3){
      character.eventNum++;
    }
  }
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
    cout << endl << "Hello? You shout down the small hole. Hi! She said back, please, find a way to save me! Then you realise that this is the long lost princess. You think to yourself, are you up for the chall" << endl << "enge? Will you go through the dungeon to save the princess and gain infinite glory and riches? Don't wory, I am " << endl << "coming, you shout down.";
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
      runClearScreen1();
      eventSyst();
      //clear data for usage in next processing round
      isRun = false;
   // }
  }
 
}