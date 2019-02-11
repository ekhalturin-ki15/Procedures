#pragma once

using namespace std;


//Элемент контейнера кольцевой двусвязанный список
template <typename Data>
class ElementRL
{
public:
	Data data;
	ElementRL<Data> *next;
	ElementRL<Data> *prev;
};



//Объявление двусвязанного списка
template <typename DataRL>
class RingList
{
public:
	
	RingList();

	~RingList();

	void PushBack(DataRL flower);

	void In(ifstream &infile);
	
	////Вывод
	void Out(ofstream &outfile);

	////Удалить
	void Clear();

	//Инициализация
	void Init();

	int WatAmount();



private:
	ElementRL<DataRL>* start;
	ElementRL<DataRL>* end;
	int amountEl;

};



//При использовании шаблонов, реализацию нельзя разделять, так как она требуется на этапе компановки


template <typename  DataRL>
RingList<DataRL>::RingList()
{
	this->Init();
}


template <typename  DataRL>
void RingList<DataRL>::PushBack(DataRL flower)
{
	

	ElementRL<DataRL>* newEl;
	newEl = new ElementRL<DataRL>;


	if (start)
	{ 
		end->next = newEl;
		newEl->prev = end;
		newEl->next = start;
		newEl->data = flower;
		end = newEl;
		start->prev = end;
	}
	else
	{
		start = newEl;
		start->next = start;
		start->prev = start;
		start->data = flower;
		end = start;
	}
	this->amountEl++;
}


template <typename  DataRL>
void RingList<DataRL>::Out(ofstream &outfile)
{

	ElementRL<DataRL>* newEl = start;
	for (int i = 0; i < this->amountEl; ++i)
	{
		newEl->data->Out(outfile);
		newEl = newEl->next;
	}

}


template <typename  DataRL>
void RingList<DataRL>::Clear()
{
	ElementRL<DataRL>* newEl = start;
	ElementRL<DataRL>* newElnext;
	if (start!=0)  newElnext  = start->next;

	for (int i = 0; i < this->amountEl; ++i)
	{
		delete newEl->data;

		delete newEl;
		newEl = newElnext;
		newElnext = newElnext->next;
	}

	this->Init();
}


//Общий код для конструктора и для очищения контейнера
template <typename  DataRL>
void RingList<DataRL>::Init()
{
	this->amountEl = 0;
	start = 0;
	end = 0;
}

template <typename  DataRL>
RingList<DataRL>::~RingList()
{
	this->Clear();
}


template <typename  DataRL>
int RingList<DataRL>::WatAmount()
{
	return this->amountEl;
}

#define TREE 1
#define BUSH 2

template <typename  DataRL>
void RingList<DataRL>::In(ifstream &infile)
{
	int type;

	while (true)
	{
		type = 0;
		infile >> type;
		if (!type) break;
		//Значит ввод не закончен
		Flower *object;


		if (type == TREE)
		{
			object = new Tree;
		}

		if (type == BUSH)
		{
			object = new Bush;
		}

		object->In(infile);
		this->PushBack(object);

	}

}