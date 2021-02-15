#include "ThreadsManager.h"

ThreadsManager::~ThreadsManager()
{
	for (auto& thread : m_Threads)
		thread.join();
}