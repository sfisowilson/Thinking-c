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
	void	ft_print_alph_num(char a, char sign, char z);
	void	ft_is_negetive(int n);
	void	disp(int *tab, int n);
	void	ft_print_combn(int n);
#endif
