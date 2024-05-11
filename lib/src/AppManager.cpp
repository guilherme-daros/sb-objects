#include <AppManager.hpp>
#include <iostream>

auto AppManager::Init(const AppConfig& config) -> void {
  std::cout << "AppManager::Init()" << std::endl;
}

auto AppManager::MakeComponentA(
    const infra::component::ComponentAConfig& config) -> void {
  std::cout << "AppManager::MakeComponentA()" << std::endl;
  comp_a_ = std::make_unique<infra::component::ComponentA>(config);
}

auto AppManager::MakeComponentB(
    const infra::component::ComponentBConfig& config) -> void {
  std::cout << "AppManager::MakeComponentB()" << std::endl;
  comp_b_ = std::make_unique<infra::component::ComponentB>(config);
}