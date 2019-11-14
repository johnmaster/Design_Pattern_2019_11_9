#include <iostream>
#include <list>
using namespace std;

class Observer;

//抽象被观察者
class Subject
{
protected:
	list<Observer*> observer_list_;
	int state_;
public:
	virtual void Attach(Observer*) = 0;
	virtual void Detach(Observer*) = 0;
	virtual void Notify() = 0;
	virtual int GetState()
	{
		return state_;
	}
	void SetState(int state)
	{
		state_ = state;
	}
};
//抽象观察者
class Observer
{
protected:
	Subject* p_subject_;
public:
	Observer(Subject* sub) :p_subject_(sub) {}
	virtual void Update() = 0;
};
//具体观察者1
class Observer1 :public Observer
{
public:
	Observer1(Subject *p_subject):Observer(p_subject) {}
	void Update() override
	{
		cout << "Observer1 get the update:" << p_subject_->GetState() << endl;
	}
};
//具体观察者2
class Observer2 :public Observer
{
public:
	Observer2(Subject* p_subject) :Observer(p_subject) {}
	void Update() override
	{
		cout << "Observer2 get the update:" << p_subject_->GetState() << endl;
	}
};
//具体被观察者
class ConcreteSubject :public Subject
{
public:
	void Attach(Observer* pObserver) override
	{
		observer_list_.push_back(pObserver);
	}
	void Detach(Observer* pObserver) override
	{
		observer_list_.remove(pObserver);
	}
	void Notify() override;
};
//核心操作，循环通知所有观察者
void ConcreteSubject::Notify()
{
	auto it = observer_list_.begin();
	while (it != observer_list_.end())
	{
		(*it++)->Update();
	}
}
int main()
{
	//创建被观察者
	Subject* p_subject = new ConcreteSubject();
	//创建观察者
	Observer* p_observer1 = new Observer1(p_subject);
	Observer* p_observer2 = new Observer2(p_subject);
	//改变状态
	p_subject->SetState(2);

	//注册观察者
	p_subject->Attach(p_observer1);
	p_subject->Attach(p_observer2);
	p_subject->Notify();

	p_subject->Detach(p_observer1);
	
	p_subject->SetState(3);
	p_subject->Notify();

	return 0;
}








