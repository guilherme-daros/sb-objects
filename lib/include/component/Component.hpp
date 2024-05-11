#include <iostream>
#pragma once

namespace infra {
namespace component {

class Component {
 public:
  enum class Type { kComponentA };

  ~Component() = default;

  [[nodiscard]] virtual auto type() -> Type = 0;

  virtual auto Init() -> void = 0;
};

}  // namespace component
}  // namespace infra