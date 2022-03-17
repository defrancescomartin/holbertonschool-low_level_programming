#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
<<<<<<< HEAD
	char *op;
	int (*f)(int a, int b);
=======
    char *op;
    int (*f)(int a, int b);
>>>>>>> 34cef2e40bbf7a4c1f5b62ac970743faaaa33ea0
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
