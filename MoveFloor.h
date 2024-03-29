#pragma once
#include"Engine/GameObject.h"
class MoveFloor :public GameObject
{
private:
	int movefloor;
public:
	MoveFloor(GameObject* parent);

	~MoveFloor();
    //初期化
    void Initialize() override;

    //更新
    void Update() override;

    //描画
    void Draw() override;

    //開放
    void Release() override;

    int GetModelHandle() { return movefloor; }
};

