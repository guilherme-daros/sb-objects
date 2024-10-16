#include <unistd.h>
#include <memory>

#include "App1Controller.hpp"

auto main(int argc, char const *argv[]) -> int {
  auto app = std::make_unique<App1Controller>();

  app->Init();

  while (true) pause();
  return 0;
}
