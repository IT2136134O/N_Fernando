class Feedback
{
    private:
        char username[20];
        char description[250];
        int  rate;

    public:
        Feedback();
        Feedback(char fUsername[20], char fDescription[500], int fRate);
        ~Feedback();
        void setFeedbackDetails();
        void displayFeedbackDetails();
        
};
