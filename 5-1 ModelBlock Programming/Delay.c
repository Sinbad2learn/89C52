void Delay(unsigned int t_ms)		//@12.000MHz
{
	unsigned char i, j;

	unsigned int t;
	for(t = 0; t < t_ms; t++){
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}
