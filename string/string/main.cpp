#include <iostream>
#include <stdio.h>
#include "header.h"



void main() {
	String a;
	String b("hello");
	String c(b);
	a.getName();
	b.getName();
	c.getName();
	
	if (a.checkString())
	{
		c = "bye";
		c.getName();
	}
	a = b;
	printf("After a=b : ");
	a.getName();
	
	system("pause");
}