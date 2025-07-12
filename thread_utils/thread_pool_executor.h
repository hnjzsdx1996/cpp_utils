#pragma once

#include <memory>
#include <thread_pool.h>

#include "../class_utils/non_copyable.h"

namespace hnjzsdx_utils {
    class ThreadPoolExecutor : public NonCopyable {
    public:
        static ThreadPoolExecutor &getInstance() {
            static ThreadPoolExecutor instance;
            return instance;
        }

        static std::shared_ptr<ThreadPool> Main() {
            if (main_ == nullptr) {
                main_ = std::make_shared<ThreadPool>();
            }
            return main_;
        }

    private:
        static std::shared_ptr<ThreadPool> main_;
        static std::shared_ptr<ThreadPool> io_;
        static std::shared_ptr<ThreadPool> compute_;
    };
}
