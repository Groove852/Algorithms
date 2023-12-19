#include "Figure.h"
#include <stdio.h>

Figure::Figure(void)
{
    printf("%s", "Figure constructor called!\n");
}

Figure::~Figure(void)
{
    printf("%s", "Figure destructor called!\n");
}
