# The-issue-of-Hanoi-Tower
to solve the issure of Hanoi Tower by programmed
void hanoi(int n,char source, char auxiliary, char target)
{
	if (n == 1)
	{
		printf("%c->%c\n", source, target);
	}
	else
	{
		hanoi(n - 1, source, target, auxiliary);
		printf("% c->% c\n", source, target);
		hanoi(n - 1, auxiliary, source, target);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	hanoi(n,'A', 'B', 'C');
}
