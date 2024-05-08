#pragma once
#include <iostream>

class MyStack
{
	struct Node
	{
		int value; // 5
		Node* next; //Pointer to node that contains value = 7
	};
	Node* m_top;
	size_t m_size = 0;

public:
	MyStack()
	{
		m_top = nullptr;
		m_size = 0;
	}
	int Top() const
	{
		if (m_top == nullptr)
			return -1;
		return m_top->value;

	}

	void Push(int value)
	{
		//Create node
		Node* node = new Node(); // HEAP
		node->value = value;

		Node node1; //STACK
		node1.value = value;

		//Update top node
		if (m_top == nullptr)
		{
			m_top = node;
		}
		else
		{
			node->next = m_top;
			m_top = node;
		}
	}

	int Pop()
	{
		if (m_top == nullptr)
			return -1;

		Node* nodeToRemove = m_top;
		int valueToRemove = nodeToRemove->value;

		m_top = m_top->next;
		delete nodeToRemove;
		--m_size;
		return valueToRemove;
	}

	void Print() const
	{
		Node* copyTopPointer = m_top;
		while (copyTopPointer != nullptr) 
		{
			std::cout << copyTopPointer->value<< "-";
			copyTopPointer = copyTopPointer->next;
		}
		std::cout << std::endl;
	}

};

