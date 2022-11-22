#pragma once
#include <queue>

template <class Item>
class queue
{
public:
	queue();
	void push(const Item& entry);
	void pop();
	bool empty() const;
	Item front() const;
};