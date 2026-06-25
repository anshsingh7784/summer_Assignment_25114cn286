#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

struct Ques
{
    string ques;
    vector<string> options;
    char ans;
};

void quiz(const vector<Ques> &question)
{
    int score=0;
    for(int i=0;i<question.size();i++)
    {
        cout<<"\nQuestion "<<i+1<<" : "<<question[i].ques<<"\n";

        for(const string &option: question[i].options)
        {
            cout<<option<<"\n";

        }
        char answer;
        cout<<"Enter your answer (A, B, C, or D) :";
        cin>>answer;
        answer=toupper(answer);
        if(answer==question[i].ans)
        {
            cout<<"correct! 👍 \n";
            score++;
        }
        else
        {
            cout<<"Wrong. The correct answer was : "<<question[i].ans<<".\n";

        }

    }
    cout<<"--THE END--\n";
    cout<<"Your final score is "<<score<<" out of "<<question.size()<<"\n";
    double percent=(score/question.size())*100.00;
    cout<<"PERCENTAGE : "<<percent<<"%\n";
}

int main()
{
    vector<Ques> data={
    {
        "What is the capital of Japan? ",
        {"A) Beijing","B) Seoul","C) Tokyo","D) Bangkok"},
        'C'
    },
    {
        "Which planet is known as the Red Planet?",
        {"A) Venus", "B) Mars", "C) Jupiter", "D) Saturn"},
        'B'
    },
    {
        "What is the largest mammal in the world?",
        {"A) Elephant", "B) Blue Whale", "C) Giraffe", "D) Great White Shark"},
        'B'
    }
};
cout<<"---QUIZ---\n";
quiz(data);
return 0;
}