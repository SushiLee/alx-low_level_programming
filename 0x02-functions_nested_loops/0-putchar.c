#include <stdio.h>

/**Prints _putchar
 * This code just requires me to write comments
 */
 

int write(int filedes, const char *buf, unsigned int nbyte); 

int main( int argc, char** argv ) 

{ 

	   write(1, "_putchar\n", 13); 

return(0);
}
