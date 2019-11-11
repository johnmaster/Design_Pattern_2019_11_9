#pragma once
#ifndef CONCRETE_BUILDER_H
#define CONCRETE_BUILDER_H

#include "builder.h"

class ThinkPadBuilder :public IBuilder
{
private:
	Computer* m_pComputer;
public:
	ThinkPadBuilder()
	{
		m_pComputer = new Computer();
	}
	void BuildCpu()
	{
		m_pComputer->SetmCpu("i5-6200U");
	}
	void BuildMainboard()
	{
		m_pComputer->SetmMainboard("Intel DH57DD");
	}
	void BuildRam()
	{
		m_pComputer->SetmRam("DDR4");
	}
	void BuildVideoCard()
	{
		m_pComputer->SetVideoCard("NVIDIA Geforce 920MX");
	}
	Computer* GetResult()
	{
		return m_pComputer;
	}
};

class YogaBuilder :public IBuilder
{
private:
	Computer* m_pComputer;
public:
	YogaBuilder()
	{
		m_pComputer = new Computer();
	}
	void BuildCpu()
	{
		m_pComputer->SetmCpu("i7-7500U");
	}
	void BuildMainboard()
	{
		m_pComputer->SetmMainboard("Intel DP55KG");
	}
	void BuildRam()
	{
		m_pComputer->SetmRam("DDR5");
	}
	void BuildVideoCard()
	{
		m_pComputer->SetVideoCard("NVIDIA Geforce 940MX");
	}
	Computer* GetResult()
	{
		return m_pComputer;
	}
};

#endif

