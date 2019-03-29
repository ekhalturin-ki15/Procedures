#pragma once

//������� ���������� ��������� ������������ ������
template <typename Data>
class ElementRL
{
public:
	Data data;
	ElementRL<Data> *next;
	ElementRL<Data> *prev;

	friend const ElementRL<Data>& operator++(ElementRL<Data>& el);
};

template <typename Data>
const ElementRL<Data>& operator++(ElementRL<Data>& el)
{
	el.next;
	return i;
}


//���������� ������������� ������
template <typename DataRL>
class RingList
{
public:
	
	RingList();


	// �������� � �����
	void PushBack(DataRL &object);

	//void In(ifstream &infile);
	
	ElementRL<DataRL>* begin();

	////�������
	void Clear();


	int WatAmount();



private:

	ElementRL<DataRL>* start;
	ElementRL<DataRL>* end;
	ElementRL<DataRL>* now; // ��� ������������ ������ 
	int amountEl;

};



//��� ������������� ��������, ���������� ������ ���������, ��� ��� ��� ��������� �� ����� ����������


template <typename  DataRL>
RingList<DataRL>::RingList()
{

	start = 0;
	end = 0;
	now = 0;
	amountEl = 0;
}

template <typename  DataRL>
ElementRL<DataRL>* RingList<DataRL>::begin()
{
	return start;
}


template <typename  DataRL>
void RingList<DataRL>::PushBack(DataRL &object)
{
	

	ElementRL<DataRL>* newEl;
	newEl = new ElementRL<DataRL>;


	if (start)
	{ 
		end->next = newEl;
		newEl->prev = end;
		newEl->next = start;
		newEl->data = object;
		end = newEl;
		start->prev = end;
	}
	else
	{
		start = newEl;
		start->next = start;
		start->prev = start;
		start->data = object;
		end = start;
	}
	this->amountEl++;
}



//����� ��� ��� ������������ � ��� �������� ����������
template <typename  DataRL>
void RingList<DataRL>::Clear()
{
	ElementRL<DataRL> *it = this->begin();
	ElementRL<DataRL> *nextit;
	if (it != 0) nextit = it->next;
	for (int i = 0; i < this->WatAmount(); i++)
	{
		delete it;
		it = nextit;
		nextit = nextit->next;
	}

	amountEl = 0;
	start = 0;
	end = 0;
	now = 0;
}

template <typename  DataRL>
int RingList<DataRL>::WatAmount()
{
	return this->amountEl;
}