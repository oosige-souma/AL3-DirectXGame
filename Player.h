#pragma once
#include "Model.h"
#include "WorldTransform.h"

class Player {



public:

	Player();

	~Player();

	void Initialize(Model* model, uint32_t textureHandle);
	
	void Update();

	void Draw(ViewProjection &viewProjection);




	private:

	uint32_t textureHandle_ = 0;

	Model* model_ = nullptr;

	WorldTransform worldTransform_;

};