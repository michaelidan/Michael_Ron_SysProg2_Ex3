// Email: michael9090124@gmail.com

#pragma once
#include "Role.hpp"
namespace coup { class General: public Role{ public: std::string name() const override { return "General"; }
bool canBlockCoup() const override { return true; } }; }
