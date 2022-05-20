#include"Feedback.h"
#include<cstring>
#include<iostream>
using namespace std;
Feedback::Feedback(){
}
Feedback::Feedback(char fUsername[20], char fDescription[500], int fRate){
        strcpy(username,fUsername);
        strcpy(description,fDescription);
        rate=fRate;
}
void Feedback::setFeedbackDetails(){
}
void Feedback::displayFeedbackDetails(){
        cout << "Your Feedback Username: " << username << endl;
        cout << "Feedback: " << description << endl;
        cout << "Your Rating: " << rate << endl;
}

Feedback::~Feedback(){
}

