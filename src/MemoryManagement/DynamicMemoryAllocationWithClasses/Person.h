class Person
{
    private:
        std::string firstName;
        std::string lastName;
        int age;
    
    public:
        // Constructors and destructor
        Person();
        Person(std::string, std::string);
        Person(std::string, std::string, int);
        ~Person();
        
        // Setters
        void setFirstName(std::string);
        void setLastName(std::string);
        void setAge(int);

        // Getters
        std::string getFirstName();
        std::string getLastName();
        int getAge(); 
};