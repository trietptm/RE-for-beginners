if (value&0xFFF)
{
	printf ("§значение не делится на 0x1000 (или 4096)§\n");
	printf ("§кстати, остаток§=%d\n", value&0xFFF);
}
else
	printf ("§значение делится на 0x1000 (или 4096)§\n");