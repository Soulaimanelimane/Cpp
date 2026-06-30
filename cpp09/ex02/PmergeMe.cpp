/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 04:43:16 by slimane           #+#    #+#             */
/*   Updated: 2026/06/30 21:24:31 by slimane          ###   ########.fr       */
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
		int next = elem2 + 2 * elem1;
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


std::deque<int> jackopstall_dq(int sz)
{
    std::deque<int> ord;
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
		int next = elem2 + 2 * elem1;
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
bool comp_deque(const std::deque<int> &dq1, const std::deque<int> &dq2)
{
	return dq1.front() < dq2.front();
}


void ft_sort_group_vector(std::vector<std::vector<int> > &vecs)
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


    
    ft_sort_group_vector(vecs);
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
        std::vector<std::vector<int> >::iterator insert_pos ;
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

			insert_pos = std::lower_bound(winners.begin(), partner_pos, pend[idx], cmp);
		}
		else
		{
			insert_pos = std::lower_bound(winners.begin(), winners.end(), pend[idx], cmp);
		}
        winners.insert(insert_pos, pend[idx]);
	}
    vecs = winners;
}


void ft_sort_group_deque(std::deque<std::deque<int> > &deqs)
{
    
    if (deqs.size() == 1)
        return;
    
    int lft_over = 0;
    std::deque<int> lft_deque;
    if (deqs.size() % 2 != 0)
    {
        lft_over = 1;
        lft_deque = deqs.back();
        deqs.pop_back();
    }

    std::deque<std::deque<int> > win_deq;
    for (size_t i = 0; i + 1 < deqs.size(); i += 2)
    {
        if (deqs[i].front() < deqs[i + 1].front())
            std::swap(deqs[i], deqs[i+1]);
        
        deqs[i].insert(deqs[i].end(), deqs[i+1].begin() , deqs[i+1].end());
        win_deq.push_back(deqs[i]);
    }
    
    
    deqs = win_deq ;
    ft_sort_group_deque(deqs);

    std::deque<std::deque<int> > main ;
    std::deque<std::deque<int> > pend;
    
    int pr_size = deqs.front().size() / 2;

    for (size_t i = 0; i < deqs.size(); i++)
    {
        std::deque<int> winners(deqs[i].begin(), deqs[i].begin() + pr_size);
        std::deque<int> losers(deqs[i].begin() + pr_size , deqs[i].end());

        main.push_back(winners);
        pend.push_back(losers);
    }

    if (lft_over)
        pend.push_back(lft_deque);

    
    std::deque<int> help_deque;
    for (size_t i = 0; i < main.size(); i++)
        help_deque.push_back(main[i].front());
    
    if (!pend.empty())
        main.push_front(pend[0]);
    
    std::deque<int> order_dq = jackopstall_dq(pend.size());

    for (size_t i = 1; i < order_dq.size(); i++)
    {
        size_t idx = order_dq[i];
        if (idx  >= main.size())
            continue;
        
        if (idx < help_deque.size())
        {
            int hlp_vl = help_deque[idx];
            ;
            std::deque<std::deque<int> >::iterator exptd_pos;
            for (std::deque<std::deque<int> >::iterator it = main.begin(); it!= main.end(); it++)
            {
                if ((*it).front() == hlp_vl)
                {
                    exptd_pos = it;
                    break;
                }
            }
            std::deque<std::deque<int> >::iterator insrt_pos = std::lower_bound(main.begin(), exptd_pos, pend[idx], comp_deque) ;
            main.insert(insrt_pos, pend[idx]);
        }
        else
        {
            std::deque<std::deque<int> >::iterator insrt_pos = std::lower_bound(main.begin(), main.end(), pend[idx], comp_deque) ;
            main.insert(insrt_pos, pend[idx]);
        }
    }
    deqs = main;
}

void ft_container(std::vector<int> &vec, std::deque<int> &deq)
{
    std::vector<std::vector<int> > group_vector;
    std::deque<std::deque<int> > group_deque;
    
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::vector<int> tmp;
        std::deque<int> tmp_dq;
        tmp.push_back(vec[i]);
        tmp_dq.push_back(deq[i]);
        group_vector.push_back(tmp);
        group_deque.push_back(tmp_dq);
    }
    

	clock_t vec_start = clock();
    ft_sort_group_vector(group_vector);
	clock_t vec_end = clock();
	double vctime = static_cast<double>(vec_end - vec_start) / CLOCKS_PER_SEC * 1000000.0;


	clock_t deq_start = clock();
	ft_sort_group_deque(group_deque);
	clock_t deq_end = clock();
	double dqtime = static_cast<double>(deq_end - deq_start) / CLOCKS_PER_SEC * 1000000.0;
    
   

    std::cout << "sort vector :";
    for (size_t i = 0; i < group_vector.size(); i++)
    {
        for (size_t j= 0; j < group_vector[i].size(); j++)
        {
            std::cout << group_vector[i][j] <<  " ";
        }
    }
    std::cout << std::endl;

    

    std::cout << "sort deque :";
    for (size_t i = 0; i < group_deque.size(); i++)
    {
        for (size_t j= 0; j < group_deque[i].size(); j++)
        {
            std::cout << group_deque[i][j] <<  " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vctime << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque  : " << dqtime << " us" << std::endl;
    
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
    ft_container(vec, deq);
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
