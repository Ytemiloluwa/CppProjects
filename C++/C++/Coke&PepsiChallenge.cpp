//
//  Coke&PepsiChallenge.cpp
//  C++
//
//  Created by Temiloluwa on 25/11/2023.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void CountVote(std::string vote, int &coke_votes, int &pepsi_votes)
{
    string cokevote = "coke";
    string pepsivote = "pepsi";
    
    while (vote == "Coke" || "Pepsi") {
        
        cout << "Enter a vote for 'coke' or 'pepsi': ";
        cin >> vote;
        
        if (vote == cokevote) {
            
            std::cout << coke_votes++ << " vote for Coke" << std::endl;
            
        }else if (vote == pepsivote)
            std::cout << pepsi_votes++ << " vote for Pepsi" << std::endl;
        
        else
            std::cout << "Invalid Vote" << std::endl;
        
    }
}

int main()
{
    int coke_votes = 1, pepsi_votes = 1;
    string vote;
    
    CountVote(vote, coke_votes, pepsi_votes);
    
}
