#pragma once

#include <atomic>

#include "BaseWrapperThread.h"

class ThreadWithCommonBuffer : public BaseWrapperThread
{
private:

	
public:
	ThreadWithCommonBuffer(const std::function<void()>& in_Function);

protected:
	static std::atomic_flag m_IsReadyToSwapBuffer;
	//common buffer
};