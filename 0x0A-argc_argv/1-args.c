#include <stdio.h>

int main(int argc, char *argv[])
{
(void)argv; /*Unused variable to suppress a warning*/

printf("%d\n", argc - 1);

return (0);
}
