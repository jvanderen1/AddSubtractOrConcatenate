/*******************************************************************************************************************************************
 * Joshua Van Deren
 * General Programming
 * Program AddSubtractOrConcatenate
 *
 * Program to find a set of equations using only addition, subtraction, or concatenation, from a range of natural numbers, to equate to a
 *   given resultant.
 */

/******************* #include DIRECTIVES **************************************************************************************************/
#include <iostream>

using namespace std;

/******************* #define DIRECTIVES ***************************************************************************************************/
#define NATURAL_NUMBER_LIMIT    2      // Last natural number to go to.
#define FINAL_RESULTANT         12     // Resulting equations must equal this.

/******************* Function Prototypes **************************************************************************************************/
unsigned short findPotentialEquations(int leftGuy, unsigned short iteration, const string &currentString, int resultant);

void add(unsigned short iteration, string currentString, int resultant);
void subtract(unsigned short iteration, string currentString, int resultant);
void concatenate (int leftGuy, unsigned short iteration, string currentString, int resultant);

unsigned long concatenateRemainder(unsigned long possibleLeftGuy, unsigned short iteration);

/******************************************************************************************************************************************/
int main() {

    unsigned short numberOfEquations;

    numberOfEquations = findPotentialEquations(1, 1, "1", FINAL_RESULTANT);
                                                                   /* leftGuy: Value on the leftmost of the equation. Will be tested      */
                                                                   /*   using addition, subtraction, and concatenation to follow.         */
                                                                   /* iteration: Determines how many times a function was called for a    */
                                                                   /*   single equation.                                                  */
                                                                   /* currentString: Stores the potential equation the form of a string.  */
                                                                   /* resultant: Driver to find equations. Must equate to 0 at the end    */
                                                                   /*   of the sequence to be considered a valid equation.                */
    if (numberOfEquations == 0)
        cout << endl << "There were no possible equations" << endl;

    else
        cout << endl << "There were a total of " << numberOfEquations << " equations" << endl;

    return 0;
}

unsigned short findPotentialEquations(int leftGuy, unsigned short iteration, const string &currentString, int resultant) {
/***** Function used to call add, subtract, and concatenate to find a possible equation to satisfy the result. ****************************/

    static unsigned short equationNumber = 0;                 // Used to keep track of number of correct equations.

    if (iteration < NATURAL_NUMBER_LIMIT) {

        if (concatenateRemainder(0, iteration + 1) >= abs(resultant - leftGuy)) {     /* It is not possible to reach resultant, if false. */
                                                                                      /*   (i.e. 6789 >= |100 - 12345|)                   */
                                                                                      /* [ IMPROVES ] computation speed this way.         */
            add(iteration + 1, currentString, resultant - leftGuy);
            subtract(iteration + 1, currentString, resultant - leftGuy);
        }

        concatenate(leftGuy, iteration + 1, currentString, resultant);
    }

    else {                                                         /* Once the last value has been processed from the natural numbers,    */
        resultant -= leftGuy;                                      /*   the program tests to see if it is valid equation.                 */

        if (resultant == 0) {
            equationNumber++;
            cout << "Equation " << equationNumber << ": " << currentString << endl;
        }
    }

    return equationNumber;
}

void add(unsigned short iteration, string currentString, int resultant) {
/***** Function used to subtract the leftGuy with the current resultant, and make the next leftGuy positive. *******************************
****** (i.e. if 56 is old leftGuy, then 7 will be the new leftGuy) ************************************************************************/

    currentString += " + " + to_string(iteration);
    findPotentialEquations(iteration, iteration, currentString, resultant);
}

void subtract(unsigned short iteration, string currentString, int resultant) {
/***** Function used to subtract the leftGuy with the current resultant, and make the next leftGuy negative. *******************************
****** (i.e. if 56 is old leftGuy, then -7 will be the new leftGuy) ***********************************************************************/

    currentString += " - " + to_string(iteration);
    findPotentialEquations(-iteration, iteration, currentString, resultant);
}

void concatenate (int leftGuy, unsigned short iteration, string currentString, int resultant) {
/***** Function used to concatenate the next integer with the current leftGuy. *************************************************************
****** (i.e. if 6 is old leftGuy, then 67 will be the new leftGuy) ************************************************************************/

    float div = iteration;

    currentString += to_string(iteration);

    do {                                                                              /* Allows the concatenated number to shift over to  */
        leftGuy *= 10;                                                                /*   the correct spot.                              */
        div /= 10;
    } while (div >= 1);

    if (leftGuy > 0)
        leftGuy += iteration;

    else /* (leftGuy < 0) */
        leftGuy += -iteration;

    if (concatenateRemainder(abs(leftGuy), iteration + 1) >= abs(resultant))          /* It is not possible to reach resultant, if false. */
        findPotentialEquations(leftGuy, iteration, currentString, resultant);         /*   (i.e. |-12345| + 6789 >= |100|)                */
                                                                                      /* [ IMPROVES ] computation speed this way.         */
    else
        return;
}

unsigned long concatenateRemainder(unsigned long possibleLeftGuy, unsigned short iteration) {
/***** Function used to find highest valued, concatenated integer from the remaining integers **********************************************
****** (i.e. if NATURAL_NUMBER_LIMIT = 9, then concatenateRemainder(6) =  6789) ***********************************************************/

    unsigned short i;
    unsigned long long result = 0;
    float div;

    for (i = iteration; i <= NATURAL_NUMBER_LIMIT; i++) {
        div = i;

        do {                                                                          /* Allows the concatenated number to shift over to  */
            result *= 10;                                                             /*   the correct spot.                              */
            div /= 10;
        } while (div >= 1);

        result += i;
    }

    if (possibleLeftGuy > 0) {        // Used for the concatenate function
        unsigned long j = 1;

        while (j <= result)
            j *= 10;

        possibleLeftGuy *= j;
        result += possibleLeftGuy;
    }

    return result;
}
