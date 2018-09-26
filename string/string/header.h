#ifndef _HEADER_H_
#define _HEADER_H_



class String {
public:
	char* name;
public:
	String() 
	{
		this->name = "";
	}
	String(char* name)
	{
		this->name = name;
		
	}
	void getName() 
	{
		std::cout << "String  = " << this->name << std::endl;
	}
	bool checkString() 
	{
		if (this->name == "") return true;
		else return false;
	}
};
#endif