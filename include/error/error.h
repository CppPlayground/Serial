#pragma once

template <typename T>
constexpr auto error(const T& stat) -> int {
    return static_cast<int>(stat);
}