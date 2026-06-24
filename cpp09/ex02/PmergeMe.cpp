/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 04:43:16 by slimane           #+#    #+#             */
/*   Updated: 2026/06/24 18:25:21 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int ft_atoi(char *str)
{
    long res = 0;
    long max = std::numeric_limits<int>::max();
    if (!str)
        return -1;
    if (str[0] == '-')
        return -1;
    int i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return -1;
        res = res * 10 + (str[i] - '0');
        if (res > max)
            return -1;
        i++;
    }
    return static_cast<int>(res);
}

std::vector<int> jackopstall(int sz)
{
    std::vector<int> ord;
    if (sz == 0)
        return ord;
    
    ord.push_back(0);
    if (sz == 1)
        return ord;
        
	int elem1 = 1;
    int elem2 = 1;
    int prev = 1;

	while (elem2 <= sz)
	{
		int next = elem1 + 2 * elem1;
		elem1 = elem2;
		elem2 = next;

		for (int k = elem2 - 1; k >= prev; k--)
		{
			if (k < sz)
				ord.push_back(k);
		}
		prev = elem2;
	}
	return ord;
}

bool cmp(const std::vector<int> &vc1, const std::vector<int> &vc2)
{
	return vc1.front() < vc2.front();
}

void ft_sort_group(std::vector<std::vector<int> > &vecs)
{
    if (vecs.size() <= 1)
        return ;
    
    int left_over = 0;
    std::vector<int> lftovr ;
    if (vecs.size() % 2 != 0)
    {
        left_over = 1;
        lftovr = vecs.back();
        vecs.pop_back();
    }

    std::vector<std::vector<int> > win;
    
    for (size_t i = 0; i+1 < vecs.size(); i += 2)
    {
        if (vecs[i].front() < vecs[i+1].front())
            std::swap(vecs[i], vecs[i + 1]);
        vecs[i].insert(vecs[i].end(), vecs[i + 1].begin(), vecs[i + 1].end());
        win.push_back(vecs[i]);
    }
    
    vecs = win;


    
    ft_sort_group(vecs);
    int pr_size = vecs.front().size() / 2 ;
    
    std::vector<std::vector<int> > winners;
    std::vector<std::vector<int> > pend;

    for (size_t i = 0; i < vecs.size(); i++)
    {
		std::vector<int> winner(vecs[i].begin(), vecs[i].begin() + pr_size);
		std::vector<int> loser(vecs[i].begin() + pr_size, vecs[i].end());
        winners.push_back(winner);
        pend.push_back(loser);

        
    }
    
    if (left_over)
        pend.push_back(lftovr);


    std::vector<int> hlp_vec;
    for (size_t i = 0; i < winners.size(); i++)
        hlp_vec.push_back(winners[i].front());

    std::vector<int> or_jcb = jackopstall(pend.size());
    
    if (!pend.empty())
        winners.insert(winners.begin(), pend[0]);

        
    for (size_t i = 1; i < or_jcb.size(); i++)
	{
		size_t idx = or_jcb[i];
		if (idx >= pend.size())
			continue;

		if (idx < hlp_vec.size())
		{
			int partner_value = hlp_vec[idx];

			std::vector<std::vector<int> >::iterator partner_pos = winners.end();
			for (std::vector<std::vector<int> >::iterator it = winners.begin(); it != winners.end(); ++it)
			{
				if ((*it).front() == partner_value)
				{
					partner_pos = it;
					break;
				}
			}

			std::vector<std::vector<int> >::iterator insert_pos = std::lower_bound(winners.begin(), partner_pos, pend[idx], cmp);
			winners.insert(insert_pos, pend[idx]);
		}
		else
		{
			std::vector<std::vector<int> >::iterator insert_pos = std::lower_bound(winners.begin(), winners.end(), pend[idx], cmp);
			winners.insert(insert_pos, pend[idx]);
		}
	}
    vecs = winners;
}

void ft_containervector(std::vector<int> &vec)
{
    std::vector<std::vector<int> > group;
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::vector<int> tmp;
        tmp.push_back(vec[i]);
        group.push_back(tmp);
        
    }
    
    ft_sort_group(group);
    
}

PmergeMe::PmergeMe(char **av)
{
    int i = 0;
    while (av[i])
    {
        int var = ft_atoi(av[i]);
        if (var < 0)
        {
            std::cout << "Error" << std::endl;
            return ;
        }

        vec.push_back(var);
        deq.push_back(var);
        i++;
    }
    ft_containervector(vec);
}

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    *this = obj;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
    if (this != &obj)
        return *this;
    vec = obj.vec;
    deq = obj.deq;
    return *this;
}

PmergeMe::~PmergeMe()
{
}
