#include "pch.h"
#include <iostream>
#include<string.h>
/*商品结构*/
typedef struct _prop
{
	int id;//道具唯一编号
	char name[50];//道具名称
	double price; //道具单价
	int stock;    //库存量：如果在背包中，表示叠加数量
	char desc[200];//道具描述
}Prop;

/*背包结构*/
typedef struct _bag
{
	int playerId;//所属玩家编号
	int count;	//当前背包中，道具数量
	int max=8;	//当前背包插槽总数-插槽数量，用RMB买
	Prop props[8]; //背包数组
}Bag;

/*玩家结构*/
typedef struct _player
{
	int id; //玩家编号
	char name[50];//用户名/昵称
	char pass[50];//密码
	double gold; //玩家金币-人性显示， ：100000铜币转换成银币，金币
	Bag bag;	  //玩家的背包
	double sysee;//元宝数量
}Player;

Prop *tradeProp;//需要购买的商品指针
Prop *props;    //道具指针
Player *players;//玩家指针
int propsCount= 0;
int playerCount = 0;
void Init();
void ShowProps();
void ShowPlayers();
/*交易函数参数1：参与交易的玩家指针，为了方便修改玩家交易后的金币数
*玩家购买的商品ID
*/
void Trade(Player *player,int propId);

int main()
{
	 Init();//初始化数据
	 printf("\n*************交易前*******************\n");
	 ShowProps();
	 ShowPlayers();
	 Trade(&players[0],3); Trade(&players[0], 3); Trade(&players[0], 3);
	 Trade(&players[1], 4);//1号玩家买4号物品
	 Trade(&players[1], 5);//1号玩家买4号物品
	 Trade(&players[1], 2);//1号玩家买2号物品 Trade(&players[1], 2);//1号玩家买2号物品
	 
/*	 Trade(&players[2], 2);//1号玩家买4号物品 
	 Trade(&players[2], 2);*/

	 printf("\n*************交易后*******************\n");
	 ShowProps();
	 ShowPlayers();
}
void Trade(Player *player, int propId)//propId玩家要买的商品ID
{
	//需要判断：商品库存，玩家余额，玩家背包空间够不够
	// tradeProp 需要购买的指针
	
 	int i;
	for ( i = 0; i < propsCount; i++)
	{
		if (propId == props[i].id)
		{
			tradeProp = &props[i];//tradeProp= props + i;
			break;
		}
	}
	if (tradeProp->stock <= 0)//需要购买商品的库存量
	{
		printf("商店被买空啦，明早再来哦~\n");
		return;
	}
	if (player->gold < tradeProp->price)//判断金币是否足够买道具
	{
		printf("钱包瘪瘪的，努力吧骚年~\n");
		return;
	}
	if (player->bag.count >= player->bag.max && player->bag.count!=0)//判断背包空间是否够用
	{
		printf("背包已满！\n");
		return;
	}
	//满足交易条件
	//1.商品库存-1
	tradeProp->stock--;
	//2.玩家金币-商品单价
	player->gold -= tradeProp->price;
	//3.玩家道具增加
	//判断玩家背包中是否有该商品；
	//如果没有该商品，背包中的该商品总数+1;
	for ( i = 0; i < player->bag.count; i++)
	{
		if (propId == player->bag.props[i].id)
		{
			player->bag.props[i].stock++;
			break;
		}
	}
	if (i == player->bag.count)
	{
		//向背包中创建一个商品
		int newIndex = player->bag.count;
		player->bag.props[newIndex].id = tradeProp->id;
		player->bag.props[newIndex].price = tradeProp->price;
		player->bag.props[newIndex].stock = 1;
		strcpy_s(player->bag.props[newIndex].name, tradeProp->name);
		strcpy_s(player->bag.props[newIndex].desc, tradeProp->name);
		player->bag.count++;
	}
}

void Init() 
{
	//1.初始化数据
	static	Prop propArray[] = {
			{1,"双倍经验卡",3000,10,"双击666"},
			{2,"腐烂的道袍",5000,8,"双击222"},
			{3,"生锈的铁剑",8000,10,"双击333"},
			{4,"无极袍",3000,5,"双击444"},
			{5,"变异海毛虫",83000,10,"滑翔666"},
		};
	propsCount =sizeof(propArray)/sizeof(Prop);
	props = propArray;//设定指针指向
	Bag b;
	static	Player playerArray[] = {
			{1,"超级毛毛虫1","123456", 888888},//playerArray[0].bag.max=88,
			{2,"超级毛毛虫2","123456", 500000},
			{3,"超级毛毛虫3","123456",500001},
			{4,"超级毛毛虫4","123456",110000}
	};										//	playerArray[0].bag.max = 8;
	playerCount =sizeof(playerArray)/sizeof(Player);
		players = playerArray;
}
void ShowProps()
{
	if (props == NULL) return;
	printf("%-5s%-14s%-7s库存\t商品介绍\n","编号","名称","单价");
	for (int i = 0; i < propsCount; i++)
	{
		printf("%-5d%-14s%-7.1lf%d\t%s\n",props[i].id,props[i].name, props[i].price, props[i].stock, props[i].desc);
	}
}
void ShowPlayers()
{
	int i, j;
	if (players == NULL) return;
	printf("编号\t%-14s金币\n","名称");
	for ( i = 0; i < playerCount; i++)
	{
		printf("%d\t%-14s%0.1lf\n", players[i].id, players[i].name, players[i].gold);
		for (j = 0; j < players[i].bag.count;j++)
		{
			printf("\t%s\t%d\t",players[i].bag.props[j].name,players[i].bag.props[j].stock);
		}
		printf("\n");
	}
}