#include <iostream>

#include <unistd.h>

#include "thread_utils/thread.h"
#include "thread_utils/thread_pool.h"
#include "thread_utils/thread_pool_executor.h"

[[noreturn]] void Wait() {
    while (true) {
        sleep(10);
    }
}

int main() {
    hnjzsdx_utils::Thread thread{};

    hnjzsdx_utils::ThreadPoolExecutor::Main()->Post([]()-> void {
        printf("Hello world!\n");
    });

    hnjzsdx_utils::ThreadPoolExecutor::Main()->PostDelayed([]()-> void {
        printf("Hello world! delay 1s\n");
    }, std::chrono::seconds(1));

    Wait();
}
