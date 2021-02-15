#include "ThreadWithCommonBuffer.h"

std::atomic_flag ThreadWithCommonBuffer::m_IsReadyToSwapBuffer;

ThreadWithCommonBuffer::ThreadWithCommonBuffer(const std::function<void()>& in_Function)
	: BaseWrapperThread(in_Function)
{

}