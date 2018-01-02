#ifndef FT_HEADER_H
#define FT_HEADER_H
	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	void	ft_putnbr(int nb);
	void	first_word(char *str);
	char	*ft_strcpy(char *s1, char *s2);
	void    maff_alpha(void);
	void    rush(int x, int y);
	void	rush_cpu(char start, char middle, char end, int x);
	int	ft_strlen(char *str);
	int	isitspace(char c);
	int	ft_atoi(const char *str);
	char	*ft_strrev(char *str);
	void	ft_ft(int *nbr);
	void	ft_ultimate_ft(int *********nbr);
	void	ft_swap(int *a, int *b);
	void	ft_div_mod(int a, int b, int *div, int *mod);
	void	ft_ultimate_div_mod(int *a, int *b);
	void	ft_sort_integer_table(int *tab, int size);
	void	ft_print_alph_num(char a, char sign, char z);
	void	ft_is_negetive(int n);
	void	disp(int *tab, int n);
	int     ft_find_next_prime(int nb);
	void	ft_print_combn(int n);
	int	ft_recursive_factorial(int nb);
	int	ft_iterative_factorial(int nb);
	int	ft_iterative_power(int nb, int power);
	int     ft_recursive_power(int nb, int power);
	int     ft_sqrt(int nb);
	int     ft_fibonacci(int index);
	int     ft_is_prime(int nb);
	int     ft_n_queens_puzzle(int n);
	void    rot_n(int n, char *str);
#endif
