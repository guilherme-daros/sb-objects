#pragma once

#include <chrono>
#include <string_view>

#include "component/ComponentBuilder.hpp"

using namespace std::chrono_literals;
using namespace std::literals::string_view_literals;

constexpr infra::component::ComponentAConfig component_a_cfg = {
    .name = "CAN"sv,
    .payload = {1, 2, 3, 4, 5, 6, 7, 8},
};

constexpr infra::component::ComponentBConfig component_b_cfg = {
    .path = "/dev/watchdog"sv,
    .timeout = 10s,
};
