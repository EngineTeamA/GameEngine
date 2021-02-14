#include "ThreadsManager.h"

ThreadsManager::ThreadsManager(const FunctionList& in_Functions)
{

}

ThreadsManager::~ThreadsManager()
{
	for (auto& thread : m_Threads)
		thread.join();
}