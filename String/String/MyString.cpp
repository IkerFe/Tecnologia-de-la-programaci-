#include "MyString.h"
#include <cstring>
#include <string.h>

MyString::MyString(const char* ch)
{
	m_sizeOfText = strlen(ch) + 1;
	m_text = new char[m_sizeOfText];

	strcpy_s(m_text, m_sizeOfText, ch);

}

MyString::~MyString()
{
	if(m_text != nullptr)
	{
		delete[] m_text;
	}

}

size_t MyString::GetSize() 
{
	return m_sizeOfText;
}
