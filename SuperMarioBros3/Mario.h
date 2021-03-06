#pragma once
#include "GameObject.h"


#define MARIO_WALKING_SPEED_START	0.04f 
#define MARIO_WALKING_ACCELERATION	0.00015f
#define MARIO_WALKING_GROUND_FRICTION	0.00025f
#define MARIO_WALKING_AIR_FRICTION	0.00005f
#define MARIO_WALKING_SPEED_MAX		0.1
#define MARIO_FLYING_SPEED_MAX		0.06
#define MARIO_IMMINANT_WALKING_SPEED		0.02
#define MARIO_JUMP_SPEED_Y		0.2f
#define MARIO_HIGH_JUMP_SPEED_Y		0.6f
#define MARIO_JUMP_DEFLECT_SPEED 0.3f
#define LUIGI_JUMP_DEFLECT_SPEED	0.72f
#define MARIO_GRAVITY			0.002f
#define MARIO_RACCOON_FLY_GRAVITY_COEFFICIENT 0.37
#define MARIO_DIE_DEFLECT_SPEED	 0.5f
#define MARIO_MAX_FALL_SPEED	0.3
#define MARIO_MAX_FALL_SLOWLY_SPEED	0.05


#define MARIO_STATE_IDLE			0
#define MARIO_STATE_WALKING			100
#define MARIO_STATE_WALKING_RIGHT	100
#define MARIO_STATE_WALKING_LEFT	200
#define MARIO_STATE_JUMP			300
#define MARIO_STATE_DIE				400
#define MARIO_STATE_BEND_DOWN		500
#define MARIO_STATE_HIGH_JUMP		600

#define MARIO_ANI_BIG_IDLE_RIGHT			0
#define MARIO_ANI_BIG_IDLE_LEFT				1
#define MARIO_ANI_BIG_WALKING_RIGHT			2
#define MARIO_ANI_BIG_WALKING_LEFT			3
#define MARIO_ANI_BIG_JUMPING_RIGHT			4
#define MARIO_ANI_BIG_JUMPING_LEFT			5
#define MARIO_ANI_BIG_RUNNING_RIGHT			6
#define MARIO_ANI_BIG_RUNNING_LEFT			7
#define MARIO_ANI_BIG_RUNNING_JUMP_RIGHT	8
#define MARIO_ANI_BIG_RUNNING_JUMP_LEFT		9
#define MARIO_ANI_BIG_HOLDING_IDLE_RIGHT	10
#define MARIO_ANI_BIG_HOLDING_RIGHT			11
#define MARIO_ANI_BIG_HOLDING_JUMP_RIGHT	12
#define MARIO_ANI_BIG_HOLDING_IDLE_LEFT		13
#define MARIO_ANI_BIG_HOLDING_LEFT			14
#define MARIO_ANI_BIG_HOLDING_JUMP_LEFT		15
#define MARIO_ANI_BIG_DUCKING_RIGHT			16
#define MARIO_ANI_BIG_DUCKING_LEFT			17
#define MARIO_ANI_BIG_KICKING_RIGHT			18
#define MARIO_ANI_BIG_KICKING_LEFT			19
#define MARIO_ANI_BIG_SKIDDING_RIGHT		20
#define MARIO_ANI_BIG_SKIDDING_LEFT			21
#define MARIO_ANI_BIG_BONK					109
#define MARIO_ANI_BIG_LOOKING_UP			110

#define MARIO_ANI_SMALL_IDLE_RIGHT			22
#define MARIO_ANI_SMALL_IDLE_LEFT			23
#define MARIO_ANI_SMALL_WALKING_RIGHT		24
#define MARIO_ANI_SMALL_WALKING_LEFT		25
#define MARIO_ANI_SMALL_JUMPING_RIGHT		26
#define MARIO_ANI_SMALL_JUMPING_LEFT		27
#define MARIO_ANI_SMALL_SKIDDING_RIGHT		28
#define MARIO_ANI_SMALL_SKIDDING_LEFT		29
#define MARIO_ANI_SMALL_RUNNING_RIGHT		30
#define MARIO_ANI_SMALL_RUNNING_LEFT		31
#define MARIO_ANI_SMALL_RUNNING_JUMP_RIGHT	32
#define MARIO_ANI_SMALL_RUNNING_JUMP_LEFT	33
#define MARIO_ANI_SMALL_HOLDING_IDLE_RIGHT	34
#define MARIO_ANI_SMALL_HOLDING_IDLE_LEFT	35
#define MARIO_ANI_SMALL_HOLDING_RIGHT		36
#define MARIO_ANI_SMALL_HOLDING_LEFT		37
#define MARIO_ANI_SMALL_HOLDING_JUMP_RIGHT	38
#define MARIO_ANI_SMALL_HOLDING_JUMP_LEFT	39
#define MARIO_ANI_SMALL_KICKING_RIGHT		40
#define MARIO_ANI_SMALL_KICKING_LEFT		41
#define MARIO_ANI_SMALL_SLIDING_RIGHT		42
#define MARIO_ANI_SMALL_SLIDING_LEFT		43
#define MARIO_ANI_DIE						44

#define MARIO_ANI_RACCOON_IDLE_RIGHT			45
#define MARIO_ANI_RACCOON_IDLE_LEFT				46
#define MARIO_ANI_RACCOON_WALKING_RIGHT			47
#define MARIO_ANI_RACCOON_WALKING_LEFT			48
#define MARIO_ANI_RACCOON_JUMPING_RIGHT			49
#define MARIO_ANI_RACCOON_JUMPING_LEFT			50
#define MARIO_ANI_RACCOON_FALLING_RIGHT			51
#define MARIO_ANI_RACCOON_FALLING_LEFT			52
#define MARIO_ANI_RACCOON_WAGGING_RIGHT			53
#define MARIO_ANI_RACCOON_WAGGING_LEFT			54
#define MARIO_ANI_RACCOON_RUNNING_RIGHT			55
#define MARIO_ANI_RACCOON_RUNNING_LEFT			56
#define MARIO_ANI_RACCOON_FLYING_RIGHT			57
#define MARIO_ANI_RACCOON_FLYING_LEFT			58
#define MARIO_ANI_RACCOON_DUCKING_RIGHT			59
#define MARIO_ANI_RACCOON_DUCKING_LEFT			60
#define MARIO_ANI_RACCOON_SLIDING_RIGHT			61
#define MARIO_ANI_RACCOON_SLIDING_LEFT			62
#define MARIO_ANI_RACCOON_SKIDDING_RIGHT		63
#define MARIO_ANI_RACCOON_SKIDDING_LEFT			64
#define MARIO_ANI_RACCOON_HOLDING_RIGHT			65
#define MARIO_ANI_RACCOON_HOLDING_LEFT			66
#define MARIO_ANI_RACCOON_HOLDING_IDLE_RIGHT	67
#define MARIO_ANI_RACCOON_HOLDING_IDLE_LEFT		68
#define MARIO_ANI_RACCOON_HOLDING_JUMP_RIGHT	69
#define MARIO_ANI_RACCOON_HOLDING_JUMP_LEFT		70
#define MARIO_ANI_RACCOON_KICKING_RIGHT			71
#define MARIO_ANI_RACCOON_KICKING_LEFT			72
#define MARIO_ANI_RACCOON_SPINNING_RIGHT		73
#define MARIO_ANI_RACCOON_SPINNING_LEFT			74
#define MARIO_ANI_RACCOON_SWING_TAIL_1_RIGHT	75
#define MARIO_ANI_RACCOON_SWING_TAIL_1_LEFT		76
#define MARIO_ANI_RACCOON_SWING_TAIL_2_RIGHT	77
#define MARIO_ANI_RACCOON_SWING_TAIL_2_LEFT		78

#define MARIO_ANI_FIRE_IDLE_RIGHT				79
#define MARIO_ANI_FIRE_IDLE_LEFT				80
#define MARIO_ANI_FIRE_WALKING_RIGHT			81
#define MARIO_ANI_FIRE_WALKING_LEFT				82
#define MARIO_ANI_FIRE_DUCKING_RIGHT			83
#define MARIO_ANI_FIRE_DUCKING_LEFT				84
#define MARIO_ANI_FIRE_JUMPING_RIGHT			85
#define MARIO_ANI_FIRE_JUMPING_LEFT				86
#define MARIO_ANI_FIRE_RUNNING_RIGHT			87
#define MARIO_ANI_FIRE_RUNNING_LEFT				88
#define MARIO_ANI_FIRE_RUNNING_JUMP_RIGHT		89
#define MARIO_ANI_FIRE_RUNNING_JUMP_LEFT		90
#define MARIO_ANI_FIRE_THROWING_RIGHT			91
#define MARIO_ANI_FIRE_THROWING_LEFT			92
#define MARIO_ANI_FIRE_SKIDDING_RIGHT			93
#define MARIO_ANI_FIRE_SKIDDING_LEFT			94
#define MARIO_ANI_FIRE_HOLDING_IDLE_RIGHT		95
#define MARIO_ANI_FIRE_HOLDING_IDLE_LEFT		96
#define MARIO_ANI_FIRE_HOLDING_JUMP_RIGHT		97
#define MARIO_ANI_FIRE_HOLDING_JUMP_LEFT		98
#define MARIO_ANI_FIRE_HOLDING_RIGHT			99
#define MARIO_ANI_FIRE_HOLDING_LEFT				100
#define MARIO_ANI_FIRE_KICKING_RIGHT			101
#define MARIO_ANI_FIRE_KICKING_LEFT				102
#define MARIO_ANI_FIRE_SLIDING_RIGHT			103
#define MARIO_ANI_FIRE_SLIDING_LEFT				104

#define MARIO_ANI_GROWING_RIGHT				105
#define MARIO_ANI_GROWING_LEFT				106
#define MARIO_ANI_SHRINKING_RIGHT			107
#define MARIO_ANI_SHRINKING_LEFT			108

#define EXPLOSION_ANI_ID_RIGHT		11003
#define EXPLOSION_ANI_ID_LEFT		11004


#define	MARIO_LEVEL_SMALL	1
#define	MARIO_LEVEL_BIG		2
#define	MARIO_LEVEL_RACCOON	3
#define	MARIO_LEVEL_FIRE	4
#define	MARIO_MAX_LEVEL		4

#define MARIO_BIG_BBOX_WIDTH  14
#define MARIO_BIG_BBOX_HEIGHT 27
#define MARIO_SMALL_BBOX_WIDTH  13
#define MARIO_SMALL_BBOX_HEIGHT 15
#define MARIO_RACCOON_BBOX_WIDTH  14
#define MARIO_RACCOON_BBOX_HEIGHT 27
#define MARIO_RACCOON_TAIL_BBOX_WIDTH  9
#define MARIO_RACCOON_HEAD_BBOX_HEIGHT  15
#define MARIO_FIRE_BBOX_WIDTH  14
#define MARIO_FIRE_BBOX_HEIGHT 27
#define MARIO_BBOX_DUCKING_HEIGHT	18

#define MARIO_UNTOUCHABLE_TIME 2000
#define MARIO_CHANGE_IMMINENT_TIME	200
#define MARIO_PERFORM_THROW_TIME	210
#define MARIO_THROWING_TIME			300
#define MARIO_SWING_TAIL_TIME		300
#define MARIO_PERFORM_SWING_TAIL_TIME	210
#define MARIO_EACH_STAGE_IN_SWING_TAIL_TIME	50
#define MARIO_KICKING_TIME			300
#define MARIO_FALLING_SLOWLY_TIME	300
#define MARIO_RACCOON_CAN_FLY_TIME	4500
#define MARIO_TRANSFORM_TIME		120
#define MARIO_GROWING_TIME			500
#define MARIO_BONK_TIME				200


#define MARIO_MAX_JUMPIMG_STACKS 19
#define MARIO_MAX_IMMINENT_STACKS 7

#define MARIO	1
#define LUIGI	2


class CMario : public CGameObject
{
	int level;
	int type;
	unsigned int money;
	unsigned int points;
	unsigned int life;
	int* typeCard;
	float start_x;			// initial position of Mario at scene
	float start_y;
	vector<LPGAMEOBJECT> Bullets;

	int untouchable;
	DWORD untouchable_start;
	DWORD throwFire_start;
	DWORD swingTail_start;
	DWORD kick_start;
	DWORD changeImminent_start;
	DWORD fallSlowly_start;
	DWORD canFlyHigh_start;
	DWORD transform_start;
	DWORD bonk_start;
 
	int jumpStack;
	int imminentStack;
	int StageOfSwingTail;
	void Calculate_vx(DWORD _dt);
	void Calculate_vy(DWORD _dt);
	void UpdateFlagBaseOnTime();
	void UpdateBullets(DWORD dt, vector<LPGAMEOBJECT>* coObjects);

public: 
	bool IsReadyJump;
	bool IsReadyHolding;


	bool IsTouchingGround;
	bool IsJumping;
	bool IsFalling;
	bool IsFlying;
	bool IsWalkingRight;
	bool IsWalkingLeft;
	bool IsHolding;
	bool IsIdle;
	bool IsKicking;
	bool IsThrowing;
	bool IsRunning;
	bool IsSwingTail;
	bool IsFallingSlowly;
	bool IsRaccoonCanFlyHigh;
	bool IsTransforming;
	bool IsGrowing;
	bool IsDucking;
	bool IsBonk;
	bool IsLookingUp;
	bool IsEnteringDrain;


	CMario(float x = 0.0f, float y = 0.0f);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT> *colliable_objects = NULL);
	virtual void Render();
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);

	void SetState(int state);
	void SetLevel(int l) { level = l; }
	void StartUntouchable() { untouchable = 1; untouchable_start = GetTickCount64(); }
	void SetJumpStack(int _num) { jumpStack = _num; }


	void Reset();
	void StartThrowFire();
	void StartSwingTail();


	void BasicCollision(float min_tx, float min_ty, float nx, float ny, float x0, float y0);
	int GetJumpStack() { return jumpStack; }
	int GetImminentStack() { return imminentStack; }
	int GetLevel() { return level; }
	int GetType() { return type; }
	void SetType(int _type) { type = _type; }
	int GetMoney() { return money; }
	void SetMoney(unsigned int _money) { money = _money; }
	int GetPoints() { return points; }
	void SetPoints(unsigned int _p) { points = _p; }
	unsigned int GetLife() { return life; }
	void SetTypeCard(int* tc) { typeCard = tc; }
	int* GetTypeCard() { return typeCard; }
	void AddCard(int card);
	void SetLife(unsigned int l) { life = l; }
	void UpJumpStack() { jumpStack += 1; }
	void downImminent();
	void upImminent();
	void UpPoints(unsigned int _points) { points += _points; }
	void UpLife() { life += 1; }
	void UpMoney() { money += 1; }
	void BeDamaged();
	void SlowFall();
	void StartKick();
	void RaccoonStartFlyHigh();
	bool IsRaccoonReadyFly();
	bool IsUntouchable() { if (untouchable == 1) return true; return false; }
	void UpLevel();
};