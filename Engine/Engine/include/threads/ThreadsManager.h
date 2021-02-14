#pragma once

#include <thread>
#include <vector>
#include <functional>

class ThreadsManager
{
private:
	std::vector<std::thread> m_Threads;

public:
	using FunctionList = std::initializer_list<std::function<void()>>;

	ThreadsManager(const FunctionList& in_Functions);
	~ThreadsManager();
	
};