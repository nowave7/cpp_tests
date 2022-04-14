// C++ Usage of thread-safe type.
#include <atomic>
#include <thread>
#include <vector>
#include <iostream>

// A very simple thread-safe type.
class ThreadSafeCounter {
 public:
  ThreadSafeCounter() : counter_(0) {}
  void Increment() { counter_.fetch_add(1); }
  int GetCount() const { return counter_; }

 private:
  std::atomic_int32_t counter_;
};

int main() {
  ThreadSafeCounter counter;
  const int n = 10;
  std::vector<std::thread> threads;

  // Spawn `n` threads that all share a single counter.
  for (int i = 0; i < n; i++) {
    threads.push_back(std::thread([&counter] {
      // Unsynchronized call of a non-const method.
      // Only safe because the type is thread-safe.
      counter.Increment();
    }));
  }
  for (auto& thread : threads) { thread.join(); }

  // This will ultimately print `n`.
  std::cout << counter.GetCount() << "\n";
  return 0;
}
