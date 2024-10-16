#pragma once

#include <array>
#include <chrono>
#include <memory>

namespace infra {
namespace component {

struct ComponentAConfig {
  std::string_view name;
  std::array<uint8_t, 8> payload;
};

struct ComponentBConfig {
  std::string_view path;
  std::chrono::seconds timeout;
};

template <class ComponentType, class ConfigType>
auto BuildComponent(const ConfigType &config) -> std::shared_ptr<ComponentType>;

}  // namespace component
}  // namespace infra
