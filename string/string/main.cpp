#include <iostream>
#include <stdio.h>
#include "header.h"



void main() {
	String a;
	String b("hello");
	String c(b);
	String d("This is a string named <d>");
	a.getName();
	b.getName();
	c.getName();
	d.getName();
	
	if (a.checkString())
	{
		c = "bye";
		c.getName();
	}
	system("pause");
}