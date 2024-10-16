#include <iostream>

#include "component/ComponentA.hpp"
#include "component/ComponentB.hpp"
#include "component/ComponentBuilder.hpp"

namespace infra {
namespace component {

template <>
auto BuildComponent(const ComponentAConfig &config) -> std::shared_ptr<ComponentA> {
  std::cout << "BuildComponent() -> std::shared_ptr<ComponentA>" << std::endl;
  auto component_a = std::make_shared<ComponentA>(config);
  component_a->Init();
  return component_a;
};

auto BuildComponent(const ComponentBConfig &config) -> std::shared_ptr<ComponentB> {
  std::cout << "BuildComponent() -> std::shared_ptr<ComponentB>" << std::endl;
  auto component_b = std::make_shared<ComponentB>(config);
  component_b->Init();
  return component_b;
};

}  // namespace component
}  // namespace infra
