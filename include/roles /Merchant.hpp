// Email: michael9090124@gmail.com

#pragma once
#include "Role.hpp"
namespace coup { class Merchant: public Role{ public: std::string name() const override { return "Merchant"; } }; }
