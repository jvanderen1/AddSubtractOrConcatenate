/*******************************************************************************************************************************************
 * Joshua Van Deren
 * General Programming
 * Program AddSubtractorConcatenate
 *
 * Program to find a set of equations using only addition, subtraction, or concatenation, from a range of natural numbers, to equate to a
 *   given resultant.
 */

/***** #include Directives ****************************************************************************************************************/
#include <iostream>
#include <queue>

using namespace std;

/***** #define Directives ****************************************************************************************************************/
#define NATURAL_NUMBER_LIMIT    9      // Last natural number to go to.
#define FINAL_RESULTANT         100    // Resulting equations must equal this.

/******************************************************************************************************************************************/
void findPotentialEquations(int leftGuy, unsigned short iteration, string currentString, int resultant);

void add (int leftGuy, unsigned short iteration, string currentString, int resultant);
void subtract (int leftGuy, unsigned short iteration, string currentString, int resultant);
void concatenate (int leftGuy, unsigned short iteration, string currentString, int resultant);

unsigned long concatenateRemainder(unsigned short iteration);

/******************* Function Prototypes **************************************************************************************************/

queue <const string> Q;       // Used to store correct equations.

int main(void) {
    unsigned short i = 1;

    findPotentialEquations(1, 1, "1", FINAL_RESULTANT);            /* leftGuy: Value on the leftmost of the equation. Will be tested      */
                                                                   /*   using addition, subtraction, and concatenation to follow.         */
                                                                   /* iteration: Determines how many times a function was called for a    */
                                                                   /*   single equation.                                                  */
                                                                   /* currentString: Stores the potential equation the form of a string.  */
                                                                   /* resultant: Driver to find equations. Must equate to 0 at the end    */
                                                                   /*   of the sequence to be considered a valid equation.                */

    while (!Q.empty()) {
        cout << "Equation " << i << ": " << Q.front() << endl;
        Q.pop();
        i++;
    }

    return 0;
}

void findPotentialEquations(int leftGuy, unsigned short iteration, string currentString, int resultant) {
/***** Function used to call add, subtract, and concatenate to find a possible equation to satisfy the result. ****************************/

    if (iteration < NATURAL_NUMBER_LIMIT) {
        add(leftGuy, iteration + 1, currentString, resultant);
        subtract(leftGuy, iteration + 1, currentString, resultant);
        concatenate(leftGuy, iteration + 1, currentString, resultant);
    }

    else {                                                         /* Once the last value has been processed from the natural numbers,    */
        resultant -= leftGuy;                                      /*   the program tests to see if it is valid equation.                 */

        if (resultant == 0)
            Q.push(currentString);
    }

    return;
}

void add (int leftGuy, unsigned short iteration, string currentString, int resultant) {
/***** Function used to subtract the leftGuy with the current resultant, and make the next leftGuy positive. *******************************
****** (i.e. if 56 is old leftGuy, then 7 will be the new leftGuy) ************************************************************************/

    resultant -= leftGuy;

    if (concatenateRemainder(iteration) < abs(resultant))                              /* It is not possible to reach resultant, if true. */
        return;                                                                        /*   (i.e. -12345 + 6789 < 100)                    */
                                                                                       /* [ IMPROVES ] computation speed this way.        */

    currentString += " + " + to_string(iteration);
    findPotentialEquations(iteration, iteration, currentString, resultant);

    return;
}

void subtract (int leftGuy, unsigned short iteration, string currentString, int resultant) {
/***** Function used to subtract the leftGuy with the current resultant, and make the next leftGuy negative. *******************************
****** (i.e. if 56 is old leftGuy, then -7 will be the new leftGuy) ***********************************************************************/

    resultant -= leftGuy;

    if (concatenateRemainder(iteration) < abs(resultant))                              /* It is not possible to reach resultant, if true. */
        return;                                                                        /*   (i.e. -12345 + 6789 < 100)                    */
                                                                                       /* [ IMPROVES ] computation speed this way.        */

    currentString += " - " + to_string(iteration);
    findPotentialEquations(-iteration, iteration, currentString, resultant);

    return;
}

void concatenate (int leftGuy, unsigned short iteration, string currentString, int resultant) {
/***** Function used to concatenate the next integer with the current leftGuy. *************************************************************
****** (i.e. if 6 is old leftGuy, then 67 will be the new leftGuy) ************************************************************************/

    currentString += to_string(iteration);
    leftGuy *= 10;

    if (leftGuy > 0)
        leftGuy += iteration;

    else /* (leftGuy < 0) */
        leftGuy += -iteration;

    if (leftGuy + concatenateRemainder(iteration) < abs(resultant))                    /* It is not possible to reach resultant, if true. */
        return;                                                                        /*   (i.e. -12345 + 6789 < 100)                    */
                                                                                       /* [ IMPROVES ] computation speed this way.        */

    findPotentialEquations(leftGuy, iteration, currentString, resultant);

    return;
}

unsigned long concatenateRemainder(unsigned short iteration) {
/***** Function used to find highest valued, concatenated integer from the remaining integers **********************************************
****** (i.e. if NATURAL_NUMBER_LIMIT = 9, then concatenateRemainder(6) =  6789) ***********************************************************/

    unsigned short i;
    unsigned long result = 0;

    for (i = iteration; i <= NATURAL_NUMBER_LIMIT; i++) {
        result *= 10;
        result += i;
    }

    return result;
}