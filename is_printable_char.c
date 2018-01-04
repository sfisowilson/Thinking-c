int	is_printable_char(char c)
{
	if ((c > 31) && (c <= 127))
		return (1);
	return (0);
}
