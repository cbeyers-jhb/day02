int ft_putchar(void);
void ft_print_comb(void)
{
    int a;
	int b;

	a = 0;
	while (a++ < '8')
	{
	    b = a;
		while (b++ < '9')
		{
		    ft_putchar(a);
			ft_putchar(b);
			if (a != '8')
			{
			    ft_putchar(',');
				ft_putchar(' ');
			}	
		}	
	}	
}

