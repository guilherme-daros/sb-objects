#include <App1Controller.hpp>

#include <memory>

int main(int argc, char const* argv[]) {
  auto app = std::make_unique<App1Controller>();

  app->Init();

  while (true)
    pause();
  return 0;
}
