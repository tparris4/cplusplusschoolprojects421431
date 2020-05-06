#include <iostream> //we are adding ostream and istream
#include <cstdlib>
#include "bag.h"
using namespace std;

 typedef int value_type;
 typedef std::size_t size_type;
bag::bag(size_type initial_capacity) //set capacity, used, and do a dynamic array of value_type
{
	value_type initial_capacity = 30;
	value_type used = 0;
	bags = new value_type[capacity];
}

bag::~bag() //our destructor should release any dynamic memory we've allocated
{
    delete [] bags;
}

bag::bag(const bag& source)
{
    bags = new value_type[copy.initial_capacity];
    for (value_type x = 0; x < copy.used; x++)
    {
        bags[x] = copy.bags[x];
    }
    used = copy.used;
    initial_capacity = copy.initial_capacity;
}

void bag::reserve(size_type new_capacity) //we enlarge our bag, but it should still have the same contents
{
    size_type new_capacity = initial_capacity;
    value_type *new_capacity;
    value_type *oldsize;
    oldsize = bags;
    new_capacity = new value_type[new_capacity];
    for (value_type x = 0; x < initial_capacity; x++)
    {
        new_capacity[x] = oldsize[x];
    }
    delete[] bags;
    bags = new_capacity;
    initial_capacity = new_capacity;
}

bool bag::erase_one (const value_type& target) //erases one item of a given value, returns true if something got erased, 0 if not
{
    value_type x = 0;
    while (bags[x] != target){
        for (int j = 0; j < used; j++)
        {
            bags[j] = bags[j+1]
        }
        used--;
    }
}

size_type bag::erase(const value_type& target) //erases all of the data target from the bag
{
    while(erase_one(target))
    {

    }
    return 0;
}

void bag::insert(const value_type& entry) //inserts an entry into the bag
{
    if (used == initial_capacity)
    {
        z.reserve();
    }
    else{

    bags[used] = entry;
    used++;
    }
}

void bag::operator +=(const bag& addend) //adds the contents of one bag to another
{
    for (size_type x = 0; x < addend.size(); x++)
    {

        insert(addend.bags[x]);
    }
}

void bag::operator =(const bag& source) //makes two bags equal
{
    value_type* data = new value_type[source.initial_capacity];

    for (value_type x = 0; x < source.size(); x++)
    {
        insert(source.bags[x]);
    }
    delete[] bags;
    bags = data;
    initial_capacity = source.initial_capacity;
    used = source.size();
}

size_type bag::count (const value_type& target) const //returns how many things are currently in the bag
{
    for (size_type x = 0; 0 < target.used; x++)
    {
        if (target == bags[x])
        {
            size_type y += 1;
        }
    }
    return y;
}

ostream& operator <<(ostream& outs, const bag& source)
{
	for(unsigned int r=0; r<source.used; r++)
		{
			outs<<source.data[r]<<",";
		}
		//outs<<endl;
	return outs;
}
