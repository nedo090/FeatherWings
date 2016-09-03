/*
 *  COS1511_ASSIGNMENT220160905
 *
 *  * Calculate how many oranges are left after being placed
 *  * in a box with user specified size (measure in number 
 *  * of oranges it can take)
 *  
 *  @author: Anthony Mans
 *  @student number: 54875064
 *  @date: Sept 3rd, 2016
 */

#include <iostream>

using namespace std;

int main(){
        // Initialize variables
        int nrOranges = 1256, nrBoxes, nrLeft, boxSize;
        
        // Ask for input
        cout << "How big is the box? ";
        cin >> boxSize;

        // Calculate number of boxes and number remaining
        nrBoxes = nrOranges / boxSize;
        nrLeft = nrOranges % boxSize;

        // Output results to the user
        cout << "There are " << nrBoxes << " boxes packed with "
                << boxSize << " oranges.\n";
        cout << "There are " << nrLeft << " left.\n";

        return 0;
}// end function: main
