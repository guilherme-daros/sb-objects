#include <App1Controller.hpp>
#include <AppManager.hpp>
#include <Config.hpp>

#include <string_view>

using namespace std::literals::string_view_literals;

constexpr AppConfig app_cfg = {
    .name = "MyApp"sv,
};

auto App1Controller::Init() -> void {
  AppManager::Instance().Init(app_cfg);
  AppManager::Instance().MakeComponentA(component_a_cfg);
  AppManager::Instance().MakeComponentB(component_b_cfg);
}
