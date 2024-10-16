#pragma once

#include "component/Component.hpp"
#include "component/ComponentBuilder.hpp"

namespace infra {
namespace component {

class ComponentB : public Component {
 public:
  ~ComponentB() = default;

  explicit ComponentB(const ComponentBConfig &config);

  ComponentB() = delete;
  ComponentB(const ComponentB &other) = delete;
  ComponentB(ComponentB &&other) = delete;
  ComponentB &operator=(const ComponentB &other) = delete;
  ComponentB &operator=(ComponentB &&other) = delete;

  auto type() -> Type override { return Component::Type::kComponentB; };
  auto Init() -> void override;

  auto Run() -> void;

 private:
  std::string path_;
  std::chrono::seconds timeout_;
};
}  // namespace component
}  // namespace infra
