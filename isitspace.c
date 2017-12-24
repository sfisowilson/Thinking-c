
int	isitspace(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\v') || (c == '\t') || (c == '\r') || (c == '\f'))
		return (1);
	else
		return (0);
}
