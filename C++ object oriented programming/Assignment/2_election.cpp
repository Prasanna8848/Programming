/*Q2 An election is contested by 3 candidates and the candidates are numbered from 1
to 3. The voting is done by marking the candidate number on the ballot paper. Write a
program using constructor and destructor to (i) cast the vote for user supplied n
voters, and to (ii) read the ballots and count the votes for each candidate. In case a
number read is outside the range of 1 to 3, the ballot should be considered as a ‘spoilt
ballot’ and the program should also count the number of spoilt ballots.*/
#include<iostream>
using namespace std;

class candidate{
    private:
        int votes;
        int candidate_no;
    public:
        candidate(int x){
            votes = 0;
            candidate_no = x;
        }
        void votecounter();
        int getdata();
        ~candidate(){
            if(candidate_no!=4){
            cout<<"\n\nVotes obtained by candidate no :"<<candidate_no<<" is "<<votes;
            }
            else{
                cout<<"The number of spoilt ballots are : "<<votes;
            }
        }
};

void candidate::votecounter(){
    votes++;
}

int candidate::getdata(){
    return votes;
}


int main(){
    int n , i=0 , choice;
    candidate c[] = {candidate(1),candidate(2),candidate(3),candidate(4)};
    cout<<"Enter the number of voters that will vote in the election : ";
    cin>>n;
    cout<<"\n\nPress the candidate number in the ballot paper to vote the candidate.";
    while(i<=n){
        cout<<"\n\n Your choice :";
        cin>>choice;
        switch(choice){
            case 1:
                c[0].votecounter();
                break;
            case 2:
                c[1].votecounter();
                break;
            case 3:
                c[2].votecounter();
                break;
            default:
                c[3].votecounter();
                break;    
        }
        i++;
    }
    cout<<"\n\nElection ended\n\ncounting votes>>>>>>>\n";
}