#include "o_malloc.h"


/*
 * WHAT DO WE NEED FOR malloc_create
 * - Need to check if the amount of memory the user wants is available. 
 * - Need to check if the memory is used by something ( can you check that ?)
 * - If the size is available and not used, give the user the needed memory
 * ( - Make it possible to check if the memory was given by malloc_create or malloc ? )
*/



/*
 * WHAT DO WE NEED FOR malloc_free
 * - Need to check if the pointer that is passed is legit.
 * ( - Only free if made with malloc_create or malloc ? )
 * - Than just free that shit.
 *  - (prob memset ?)
*/
