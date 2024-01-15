int rand()
{
	static int idx = 0;
	static int arr[] = {8, 8, 7,9, 23, 74};
       if (idx < 6)
       return (arr[idx++]);
	return (-1);       
}
