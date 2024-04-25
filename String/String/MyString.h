#pragma once

class MyString
{
private:
	char* m_text = nullptr;
	size_t m_sizeOfText;
public:
	MyString(const char* ch);

	~MyString();

	size_t GetSize();

};

