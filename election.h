/**
	@file
	@brief Заголовочный файл для класса выборов
*/
#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "voter.h"
#include "poll.h"
using namespace std;

/**
	@brief Класс исключения выборов
	Вызывается в случае неправильного использования класса выборов
*/
class electionException : public exception {};

/**
	@brief Класс выборов
	Контейнерный класс для указателей на избирателей. Наследован от vector<voter*>
*/
class election : public vector<voter*> {
	size_t state;
	size_t *votes;
	size_t maximum;
	size_t all;
	public:
	election();
	election(const election& o);
	int getIndex(string VoterName);
	void start();
	size_t* finish(vector<poll> &polls, size_t& n);
	size_t getState();
	size_t getMaximum();
	size_t getVotes(size_t i);
	size_t getAll();
	~election();
};