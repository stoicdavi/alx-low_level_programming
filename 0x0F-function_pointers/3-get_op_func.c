/**
 * get_op_func - funtion that holds 5 functions
 * @s: operator passed as argument
 * Return: 0 for success
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i] != NULL)
	{
		if (strcp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
