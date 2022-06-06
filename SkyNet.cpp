//
/* Eli Beutler
June 5th, 2022.
Skynet
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int mapBuilder = 1;

const int mapRow = 8;
const int mapCol = 8;
int battleMap[mapRow][mapCol] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64};

// if I can get this to work, this will fill out all spots in the array.
int size = 64;

// this will be randomly decided. 
int enemyLocation = 75;

// the robot on the hunt's location
int skyNet = 1;


int main()
{

    srand(time(0)); // seed


    // map time
    cout << "Battle Map:" << endl;
    //  one that we eventually got to work, doesn't work entirely as desired but still. 
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            //cout << "bottumFloor[" << i << "][" << j << "] = " << bottumFloor[i][j] << endl;
            cout << "\t" << battleMap[i][j] << endl;

        }
    }
    cout << "Let's begin the hunt for rebel scum." << endl;
    system("pause");

    
    enemyLocation = (rand() % 64) + 1; 

    // linear hunt
    while (enemyLocation != skyNet) {
        cout << "Enemy not found on " << skyNet << ", further investigation is required." << endl;
        skyNet = skyNet++;
        system("pause");
    }
    if (enemyLocation == skyNet) {
        cout << "The rebel scum has been found and dealth with on " << skyNet << "." << endl;
    }
    system("pause");

    // binary Hunt
    cout << "The hunt is one again but binarically!" << endl;
    system("pause");
    // new enemy location
        enemyLocation = (rand() % 64) + 1;
       // skynet now has two bots 
        int skyNetHigh = 64;
        int skyNetLow = 1;

        // binary searching from either side
      while (skyNetHigh != enemyLocation && skyNetLow != enemyLocation) {
          cout << "the rebel sucm was not found on either " << skyNetHigh << " or " << skyNetLow << ". We will keep searching." << endl;
          skyNetHigh = skyNetHigh - 1;
          skyNetLow = skyNetLow++;
          system("pause");

      }
      if (skyNetHigh == enemyLocation) {
          cout << "The enemy was found on " << skyNetHigh << " by the upper search." << endl;
      }
      if (skyNetLow == enemyLocation) {
          cout << "The enemy was found on " << skyNetLow << " by the lower search." << endl;
      }





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
