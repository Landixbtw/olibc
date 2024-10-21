#ifndef O_MALLOC_H
#define O_MALLOC_H

#include <stddef.h>

/*
 *  This is a so called Opaque type
 *  The "encapsulation" hides the internal details and workings of the interface (o_malloc)
 *  Hidding the implementation is good for maintainability, flexibility, security and preventing errors.
 *  Overall this makes it better and easier to use:
 *
 *  So now someone can then go ahead an declare char *something = malloc_create(sizeof(int));
 */
typedef struct o_malloc o_malloc;

typedef enum {
    O_MALLOC_OK = 0,                // Everything is fine
    O_MALLOC_ERR = -1,              // Error for example not enought size 
    O_MALLOC_INVALID_PARAM = -2,    // User entered invalid parameter
} o_malloc_status;


#ifdef __cplusplus
extern "C" {
#endif

/*
 * What does malloc need ? 
 * create 
 * free
 *
*/

// Maybe give option to initialize ?


// *_Nullable ptr ? 

void malloc_create(size_t size); 

// https://stackoverflow.com/questions/77310920/what-is-nullable-pointer-in-c
// https://www.man7.org/linux/man-pages/man3/malloc.3.html

void malloc_free(void *_Nullable ptr);


#ifdef __cplusplus
}
#endif

#endif
