#pragma once
#include "util/Joaat.hpp"

namespace rage
{
	class scrThread;
}

namespace YimMenu::Scripts
{
	extern rage::scrThread* FindScriptThread(joaat_t hash);
	extern void RunAsScript(rage::scrThread* thread, std::function<void()> callback);
}