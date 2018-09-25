#ifndef _HEADER_H_
#define _HEADER_H_



class String {
public:
	char* name;
public:
	String() 
	{
		this->name = "default";
	}
	String(char* name)
	{
		this->name = name;
		
	}
	void getName() 
	{
		std::cout << "String  = " << this->name << std::endl;
	}
};
#endif