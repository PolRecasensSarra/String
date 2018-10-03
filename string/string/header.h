#ifndef _HEADER_H_
#define _HEADER_H_
#include <string.h>
#include <assert.h>

class String {
private:
	char* name = nullptr;
	unsigned int allocated_memory = 0u;

public:
	String() {};
	String(const char* name) 
	{
		assert(name != nullptr);
		if (name != nullptr)
		{
			allocated_memory = strlen(name) + 1; //el strlen nomes agafa els caràcters i no agafa el '/0'
			this->name = new char[allocated_memory];
			strcpy_s(this->name, allocated_memory, name);
		}
	};

	String(const String& s) {
		assert(s.name != nullptr);
		if (s.name != nullptr)
		{
			allocated_memory = strlen(s.name) + 1; //el strlen nomes agafa els caràcters i no agafa el '/0'
			this->name = new char[allocated_memory];
			strcpy_s(this->name, allocated_memory, s.name);
		}
	}

	~String()
	{
		assert(name != nullptr);
		if (name != nullptr)
		{
			delete[] name;
			name = nullptr;
			allocated_memory = 0u;
		}

	}

	String operator=(const char* n)
	{
		if (name != nullptr)
		{
			if (strlen(n) <= allocated_memory) {
				allocated_memory = strlen(name) + 1; //el strlen nomes agafa els caràcters i no agafa el '/0'
				strcpy_s(this->name, allocated_memory, name);
			}
			else
			{
				allocated_memory = strlen(name) + 1; //el strlen nomes agafa els caràcters i no agafa el '/0'
				strcpy_s(this->name, allocated_memory, name);
				delete[] name;
				this->name = new char[allocated_memory];
			}
		}
	}
};
#endif