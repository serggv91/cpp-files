// Written just for fun as the first commit

int str_to_int(char* str) {
	if (str == NULL)
		return 0;
	int num = 0;
	while (*str =! 0) {
		num = num*10 + *str - '0';
		++str;
	}
	return num;
}