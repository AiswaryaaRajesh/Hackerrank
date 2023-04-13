int main()
{
	int var, sum = 0, input_count = 0;
    int i=0;
	while (i<5)
	{
		scanf("%d", &var);
		sum += var;
		input_count ++;
        i++;
	}
	printf("%d", sum);
	return 0;
}
