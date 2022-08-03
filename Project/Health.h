#pragma once
#include "PlacableActor.h"
class Health : public PlacableActor
{
public:
	Health(int x, int y, ActorColor color);

	virtual ActorType GetType() override { return ActorType::Health; }
	virtual void Draw() override;
};

