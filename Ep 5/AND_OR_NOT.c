#include <stdio.h>

int mafin(){



    int TRUE = 1;
    int FALSE = 0;

    int result;

    result = TRUE && TRUE; //result = 1
    result = TRUE && FALSE; //result = 0
    result = FALSE && TRUE; //result = 0
    result = FALSE && FALSE; //result = 0

    result = TRUE || TRUE; //result = 1
    result = TRUE || FALSE; //result = 1
    result = FALSE || TRUE; //result = 1
    result = FALSE || FALSE; //result = 0

    result = !TRUE; //result = 0
    result = !FALSE; //result = 1

    //result == 1 || result == 2




}
