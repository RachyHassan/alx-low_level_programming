#ifndef ADDS_H
#define ADDS_H

__attribute__((visibility("default"))) int add(int a, int b)
{
	return a + b;
}

__attribute__((visibility("default"))) int sub(int a, int b)
{
	return a - b;
}

__attribute__((visibility("default"))) int mul(int a, int b)
{
	return a * b;
}

__attribute__((visibility("default"))) int div(int a, int b)
{
	return a / b;
}

__attribute__((visibility("default"))) int mod(int a, int b)
{
	return a % b;
}

#endif
