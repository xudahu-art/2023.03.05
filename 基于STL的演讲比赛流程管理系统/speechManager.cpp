#include "speechManager.h"

SpeechManager::SpeechManager()
{
	//初始化容器和属性
	this->initSpeech();

	this->createSpeaker();
}

void SpeechManager::show_Menu()
{
	cout << "*****************************************" << endl;
	cout << "********  欢迎参加演讲比赛！ ********" << endl;
	cout << "************  1.开始演讲比赛  ***********" << endl;
	cout << "************  2.查看往届记录  ***********" << endl;
	cout << "************  3.清空比赛记录  ***********" << endl;
	cout << "************  0.退出比赛程序  ***********" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech()
{
	//容器都都置空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	this->m_Index = 1;
}

//创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0;i < nameSeed.size();i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int j = 0;j < 2;j++)
		{
			sp.m_Score[j] = 0;
		}
		this->v1.push_back(i + 10001);
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

SpeechManager::~SpeechManager()
{

}