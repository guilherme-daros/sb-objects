#include "component/ComponentA.hpp"
#include "component/ComponentB.hpp"

struct AppConfig {
  std::string_view name;
};

class AppManager {
 public:
  static auto Instance() -> AppManager & {
    static AppManager instance;
    return instance;
  }

  ~AppManager() = default;

  auto Init(const AppConfig &config) -> void;

  auto MakeComponentA(const infra::component::ComponentAConfig &config) -> void;

  auto MakeComponentB(const infra::component::ComponentBConfig &config) -> void;

 private:
  std::unique_ptr<infra::component::ComponentA> comp_a_;
  std::unique_ptr<infra::component::ComponentB> comp_b_;
};
