#include <component/ComponentB.hpp>
#include <iostream>

namespace infra {
namespace component {

ComponentB::ComponentB(const ComponentBConfig& config)
    : path_(config.path), timeout_(config.timeout) {
  std::cout << "ComponentB::ComponentB()" << std::endl;
};

auto ComponentB::Init() -> void {
  std::cout << "ComponentB::Init()" << std::endl;
}

auto ComponentB::Run() -> void {
  std::cout << "ComponentB::Send()" << std::endl;
}

}  // namespace component
}  // namespace infra