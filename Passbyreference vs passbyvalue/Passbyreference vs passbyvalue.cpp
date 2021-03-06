// Passbyreference vs passbyvalue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void passbyvalue(int i);
void passbyaddress(int *i);
int main()
{
	int tuna = 20;
	passbyvalue(tuna);//value is just passing a copy of the variable
	printf_s("Passing by value; tuna is now %d\n", tuna);
	passbyaddress(&tuna);//&tuna is the memory address of tuna. and the address passes the variable itself
	printf_s("Passing by address; tuna is now %d\n", tuna);
    return 0;
}
void passbyvalue(int i) {
	i = 99;
}
void passbyaddress(int *i) {
	*i = 64;
}