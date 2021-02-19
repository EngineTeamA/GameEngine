#include "ThreadsManager.h"

ThreadsManager::ThreadsManager(const std::initializer_list<std::function<void()>>& in_FunctionList)
{
	for (const auto& func : in_FunctionList)
	{
		m_Threads.emplace_back(func);
	}
}

ThreadsManager::~ThreadsManager()
{
	for (auto& thread : m_Threads)
	{
		thread.join();
	}
}