#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int div = 0, prime = 2;
	long long in = 0, num = 0;
	printf("***Project Euler***\nProblem No.3 Largest Prime Factor\n\nEnter one number: ");
	scanf("%lld", &in);
	num = in;
	while (num >= 1 && num >= prime) {
		int count = 0;
		for (int i = 1; i <= prime; i++) {
			if (prime % i == 0) count++;
			else if (prime % i != 0) continue;

			if (count == 2 && i == prime) {
				if (num % prime == 0) {
					printf("Number %lld can be divided by prime number %d\n", num, prime);
					num /= prime;
					div = prime;
					printf("Current number after divided is %lld\n\n", num);
				}
				else break;
			}
			else if (count > 2) break;
		}
		prime++;
	}
	printf("The largest prime factor of the number %lld is %d\n", in, div);
	return 0;
}