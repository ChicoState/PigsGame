#include <stdlib.h> // for rand()
#include <time.h>

#include "die.h"

Die::Die()
{
    srand(time(NULL));
}

int Die::roll()
{
    return (rand() % DIE_SIDES) + 1;
}
