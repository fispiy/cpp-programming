int multiply(int a, int b) {
	if (b < 0) {
		b *= -1;
		for (; b > 2; b--) {
			a += a;
		}
		return -a;
	}
	else if (b > 0) {
		for (; b > 2; b--) {
			a += a;
		}
		return a;
	}
	return 0;
}

	int sum_up_to(int n) 
	{
		return n * (n+1) / 2;
	}
