#include <atomic>
#include <ios>
#include <thread>
#include <vector>
#include <iostream>
#include <mutex>

std::mutex shared_object;

void thread_func(std::atomic_int32_t &count)
{
    shared_object.lock();
    std::cout<<"starting thread function: "<<count.fetch_add(1)<<"\n";
    shared_object.unlock();
}

std::atomic_int32_t counter{0};

int main() {
  const int n = 10;
  std::vector<std::thread> threads;

  // Spawn `n` threads that all share a single counter.
  for (int i = 0; i < n; i++) {
    threads.push_back(std::thread(thread_func, std::ref(counter)));
  }
  for (auto& thread : threads) { thread.join(); }

  // This will ultimately print `n`.
  return 0;
}
