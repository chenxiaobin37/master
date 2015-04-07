int func(const int src[], int len)
{
	int max_sum = 0;
	int val = 0;
	int i = 0;
    int flag = 0;

	do
	{
		if (i < len && src[i] > 0)
		{
			if (val < src[i])
			{
				val = src[i];
			}
			flag = 1;
		}
		else
		{
			if (flag)
			{
				max_sum += val;
			}
			flag = 0;
		}
	} while (i++ < len);
	
	return max_sum;
}
int func(const int src[], int len){
	int max_sum = 0;
	int val = 0;
	int i = 0;
    int flag = 0;
	do{
		if (i < len && src[i] > 0){
			if (val < src[i]){
				val = src[i];
			}
			flag = 1;
		}
		else{
			if (flag)
			{
				max_sum += val;
			}
			flag = 0;
		}
	} while (i++ < len);
	
	return max_sum;
}