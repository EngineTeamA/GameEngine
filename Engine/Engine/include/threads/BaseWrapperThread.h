#pragma once

#include <functional>
#include <thread>

class BaseWrapperThread
{
private:
	std::function<void()> m_Function;
	std::thread m_Thread;

public:
	BaseWrapperThread(const std::function<void()>& in_Function);
	virtual ~BaseWrapperThread();

	virtual void Start();

	virtual void ThreadMainLoop();

};