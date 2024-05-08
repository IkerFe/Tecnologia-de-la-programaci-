#pragma once
#include <iostream>
class MyQueue
{
private:
	struct Node
	{
		int value;
		Node* next;
	};

	Node* m_first;
	Node* m_last;
	size_t* m_size = 0;
public:
	MyQueue()
	{
		m_first = nullptr;
		m_last = nullptr;
		m_size = 0;
	}

	void Push(int value)
	{
		//Create node
		Node* node = new Node();
		node->value = value;

		if (m_first == nullptr)
		{
			m_first = node;
			m_last = node;
		}
		else
		{

			//2. Update last
			m_last->next = node;
			m_last = m_last->next;
		}
		++m_size;
	}
	int Pop()
	{
		if (m_first == nullptr)
		{
			return -1;
		}

		Node* nodeToRemove = m_first;
		int valueToRemove = nodeToRemove->value;
		m_first = m_first->next;

		delete nodeToRemove;
		--m_size;

		return valueToRemove;
	}
	int Front() const
	{
		if (m_first == nullptr) 
		{
			return -1;
		}
		return m_first->value;
	}

	int Back() const
	{
		if (m_last == nullptr)
		{
			return -1;
		}
	}
};

