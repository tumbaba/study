#include "stdafx.h"



list<int> List;
list<int> ListRemove;
set<int>b;
list<int> Erase;
int main()
{
	
	for(int i = 0; i<20;i++)
	{
		int a = rand() %20;
		List.push_back(a);
	}
	cout << "------램덤 리스트-----------" << endl;
	for (auto list1 = List.begin(); list1 != List.end(); list1++)
	{
		cout << *list1 << endl;
	}

	
	for (auto list1 = List.begin(); list1 != List.end(); list1++)
	{
		for (auto list2 = List.begin(); list2 != List.end(); list2++)
		{
			if ((*list1 == *list2) && (list1 !=list2))
			{
				ListRemove.push_back(*list1);
			}
		}
	}

	for (auto list1 = ListRemove.begin(); list1 != ListRemove.end(); list1++)
	{
		List.remove(*list1);
	}
	cout << "---------중복값 제거----------" << endl;
	for (auto list1 = List.begin(); list1 != List.end(); list1++)
	{
		cout << *list1 << endl;
	}
	cout << "----------set으로 중복된 값표시---------" << endl;
	for (auto list1 = ListRemove.begin(); list1 != ListRemove.end(); list1++)
	{
		for (auto list2 = ListRemove.begin(); list2 != ListRemove.end(); list2++)
		{
			if ((*list1 == *list2) && (list1 != list2))
			{
				b.insert(*list1);
			}
		}
	}
	

	



	
	for (auto list1 = b.begin(); list1 != b.end(); list1++)
	{
		cout << *list1 << endl;
	}
	cout << "--------중복된 값표시----------------" << endl;

	for (auto list1 = ListRemove.begin(); list1 != ListRemove.end(); list1++)
	{
		for (auto list2 = ListRemove.begin(); list2 != ListRemove.end(); list2++)
		{
			if ((*list1 == *list2) && (list1 != list2))
			{
				Erase.push_back(*list1);
			}
		}
	}
	for (auto list1 = ListRemove.begin(); list1 != ListRemove.end(); ++list1)
	{
		for (auto list2 = Erase.begin(); list2 != Erase.end(); ++list2)
		{
			if (*list1 == *list2)
			{
				for (auto list3 = ListRemove.begin(); list3 != list1; ++list3)
				{
					if (count(ListRemove.begin(), list1, *list3) > 1)
					{
						//int temp = *li;
						//advance(li, li);
						list3 = ListRemove.erase(list3);

						//a.insert(li, temp);

					}
					
						
				}
			}
		}
	}


	
	auto list = ListRemove.begin();
	advance(list, ListRemove.size() - 1);
	ListRemove.erase(list);
	//ListRemove.sort();
	for (auto list1 = ListRemove.begin(); list1 != ListRemove.end(); list1++)
	{
		cout << *list1 << endl;
	}



	return 0;
}