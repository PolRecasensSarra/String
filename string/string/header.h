#ifndef _HEADER_H_
#define _HEADER_H_



class String {
public:
	const char* name;
public:
	String() {};
	String(const char* name):name(name) {};
	void getName() const
	{
		printf("String = %s\n", this->name);
	}
	bool checkString() 
	{
		if (this->name == nullptr) return true;
		else return false;
	}
	String operator=(const char* name)
	{
		return (this->name = name);
	}
	/*bool operator==(const char* name)const
	{
		return(this->name == name);
	}*/
};
#endif