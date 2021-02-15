#pragma once

#include <thread>
#include <vector>
#include <functional>

#include "BaseWrapperThread.h"

class ThreadsManager
{
private:
	std::vector<BaseWrapperThread> m_Threads;

public:
	ThreadsManager();
	~ThreadsManager();
	
};