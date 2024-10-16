#include <string_view>

#include "App1Controller.hpp"
#include "AppManager.hpp"
#include "Config.hpp"

using namespace std::literals::string_view_literals;

constexpr AppConfig app_cfg = {
    .name = "MyApp"sv,
};

auto App1Controller::Init() -> void {
  auto &manager = AppManager::Instance();

  manager.Init(app_cfg);
  manager.MakeComponentA(component_a_cfg);
  manager.MakeComponentB(component_b_cfg);
}
