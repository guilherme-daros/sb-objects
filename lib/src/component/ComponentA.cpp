#include <component/ComponentA.hpp>
#include <iostream>

namespace infra {
namespace component {

ComponentA::ComponentA(const ComponentAConfig& config)
    : name_(config.name), payload_(config.payload) {
  std::cout << "ComponentA::ComponentA()" << std::endl;
};

auto ComponentA::Init() -> void {
  std::cout << "ComponentA::Init()" << std::endl;
}

auto ComponentA::Send() -> void {
  std::cout << "ComponentA::Send()" << std::endl;
}

}  // namespace component
}  // namespace infra