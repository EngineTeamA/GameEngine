#pragma once

#include <thread>
#include <vector>
#include <functional>

class ThreadsManager
{
private:
	std::vector<std::thread> m_Threads;

public:
	ThreadsManager(const std::initializer_list<std::function<void()>>& in_FunctionList);
	~ThreadsManager();
	
};