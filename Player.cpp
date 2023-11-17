#include "Player.h"
#include "Engine/Model.h"
#include "Engine/Input.h"
Player::Player(GameObject* parent) :GameObject(parent, "Player"), hModel_(-1)
{
}

//�f�X�g���N�^
Player::~Player()
{
}

//������
void Player::Initialize()
{
    //���f���f�[�^�̃��[�h
    hModel_ = Model::Load("Player.fbx");
    assert(hModel_ >= 0);
}

//�X�V
void Player::Update()
{
    if (Input::IsKey(DIK_D))
    {
        transform_.position_.x += 0.3f;
    }

    if (Input::IsKey(DIK_A))
    {
        transform_.position_.x -= 0.3f;
    }
    if (Input::IsKey(DIK_W))
    {
        transform_.position_.z += 0.3f;
    }
    if (Input::IsKey(DIK_S))
    {
        transform_.position_.z -= 0.3f;
    }
}

//�`��
void Player::Draw()
{
    Model::SetTransform(hModel_, transform_);
    Model::Draw(hModel_);
}

//�J��
void Player::Release()
{
}