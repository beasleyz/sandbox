#include <stdarg.h>
#include <stdio.h>

int	ft_sum(int count, ...)
{
	va_list arg;
	int sum;
	int i;

	i = 0;
	sum = 0;
	va_start(arg, count);
	while (i++ < count)
		sum += va_arg(arg, int);
	va_end(arg);
	return(sum);
}

int main()
{
	printf("%d\n", ft_sum(3, 5, 6, 7));
}