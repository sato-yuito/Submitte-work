#pragma once
#include "Engine/GameObject.h"
#include"Map.h"
class Player:public GameObject
{
    int hModel_;    //モデル番号
    Map* map;

    enum class Playeraction
    {
        wait,//何もしていない状態
        Walk,//歩く
        run,//走る
        jump,//ジャンプ
        attack,//攻撃
        useitem//アイテムを使う
    }playerstate_;
    
    //歩く
    void PlayerWalk();
    //走る
    void PlayerRun();
    //ジャンプ
    void PlayerJump();
    //攻撃
    void PlayerAttack();
    //アイテムを使う
    void UseAitem();

public:
    //コンストラクタ
    Player(GameObject* parent);

    //デストラクタ
    ~Player();

    //初期化
    void Initialize() override;

    //更新
    void Update() override;

    //描画
    void Draw() override;

    //開放
    void Release() override;
    
    

    
    int GetModelHandle() { return hModel_; }
};

