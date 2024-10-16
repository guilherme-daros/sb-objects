#pragma once

#include "component/Component.hpp"
#include "component/ComponentBuilder.hpp"

namespace infra {
namespace component {

class ComponentA : public Component {
 public:
  ~ComponentA() = default;

  explicit ComponentA(const ComponentAConfig &config);

  ComponentA() = delete;
  ComponentA(const ComponentA &other) = delete;
  ComponentA(ComponentA &&other) = delete;
  ComponentA &operator=(const ComponentA &other) = delete;
  ComponentA &operator=(ComponentA &&other) = delete;

  auto type() -> Type override { return Component::Type::kComponentA; };
  auto Init() -> void override;

  auto Send() -> void;

 private:
  std::string name_;
  std::array<uint8_t, 8> payload_;
};
}  // namespace component
}  // namespace infra
