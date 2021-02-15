#include "BaseWrapperThread.h"

BaseWrapperThread::BaseWrapperThread(const std::function<void()>& in_Function)
	: m_Function(in_Function)
{

}

BaseWrapperThread::~BaseWrapperThread()
{
	m_Thread.join();
}

void BaseWrapperThread::Start()
{
	m_Thread = std::thread(m_Function);
}