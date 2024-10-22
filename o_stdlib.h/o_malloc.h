#ifndef O_MALLOC_H
#define O_MALLOC_H

#include <stddef.h>

/*
 *  This is a so called Opaque type
 *  The "encapsulation" hides the internal details and workings of the interface (o_malloc)
 *  Hidding the implementation is good for maintainability, flexibility, security and preventing errors.
 *  Overall this makes it better and easier to use:
 *
 */

typedef struct o_malloc_context o_malloc_context;

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


/* 
 * This initializes the memory context.
 * @param heap_size parameter is the size of the memory pool to allocate
 * @return o_malloc_status return value can help with error detection for success or failure
 *
 *
 * There will be user level functions and lower level functions. User level function 
 * will be something like o_malloc_init(), this is the "frontend" of the function 
 * and something like void *allocate_memory_pool would be a lower level "backend" 
 * function that does the actuall allocation. o_malloc_init would just do validation 
 * of input and error checking, logic flow ...
 *
*/
o_malloc_status o_malloc_init(size_t heap_size); 

// https://stackoverflow.com/questions/77310920/what-is-nullable-pointer-in-c
// https://www.man7.org/linux/man-pages/man3/malloc.3.html

/*
 * This frees allocated memory
 * @param ptr: This is the pointer to the allocated memory block to free.
*/
void o_malloc_free(void *_Nullable ptr);


#ifdef __cplusplus
}
#endif

#endif
