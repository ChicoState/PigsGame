#include <cstdlib> // for rand()

#include "die.h"

int Die::roll()
{
    return (rand() % DIE_SIDES) + 1;
}
