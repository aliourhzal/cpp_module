/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 02:33:56 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/03 16:06:57 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> class Array
{
	private:
		T	*arr;
		int _size;
	public:
		Array()
		{
			arr = nullptr;
			_size = 0;
		}
		Array(int n)
		{
			_size = n;
			arr = new T[n];
		}
		Array(const Array & copy)
		{
			arr = new T[copy._size];
			*this = copy;
		}
		Array & operator = (const Array &copy)
		{
			delete [] arr;
			arr = new T[copy._size];
			for (int i = 0; i < copy._size; i++)
				arr[i] = copy.arr[i];
			_size = copy._size;
			return (*this);
		}
		T & operator [] (int i)
		{
			if (i < 0 || i >= _size)
				throw std::exception();
			return (arr[i]);
		}
		int size()
		{
			return (_size);
		}
		~Array()
		{
			delete [] arr;
		}
};
	#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;

}