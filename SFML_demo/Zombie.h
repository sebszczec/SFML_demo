#pragma once
#include "Character.h"

namespace Engine
{
	class Zombie : public Character
	{
	public:
		Zombie() = default;
		~Zombie() = default;

		bool LoadResources();
		void Draw();
	private:
		
	};
}

