#include<cassert>

unsigned int length(const char* str)
{
    if (str == nullptr)
    return 0;
    const char* c = str;
    while(*c != '\0')
        ++c;
    return c - str;
}

bool check(const char* s)
{
	int start = 0;
	int end = length(s) - 1;
	for(int i = 0, start = end; i <= start; i++, start--)
	{
		if(s[i] != s[start])
			return false;
	}
	return true;
}

int main()
{ 
	assert(check("aboba") == true);
	assert(check("127721") == true);
	assert(check("abbdaa") == false);
	assert(check(nullptr) == true);
	assert(check(" ") == true);
	return  0;
}