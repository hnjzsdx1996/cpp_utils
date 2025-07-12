#include "thread_pool_executor.h"

using namespace hnjzsdx_utils;

std::shared_ptr<ThreadPool> ThreadPoolExecutor::main_ = nullptr;
std::shared_ptr<ThreadPool> ThreadPoolExecutor::io_ = nullptr;
std::shared_ptr<ThreadPool> ThreadPoolExecutor::compute_ = nullptr;