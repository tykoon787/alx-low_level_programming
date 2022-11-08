/* This file contains all the function prototypes and data  */
/* structures used by the program.  */
/* You can use this structure: */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
