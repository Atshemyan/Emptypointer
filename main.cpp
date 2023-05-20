#include <iostream>
#include <vector>
class Empty
{

};

class Airplane : public Empty
{
    public:
        void CreateHands()
        {
            m_lefthand = m_righthand = true;
        }

        void KillHands()
        {
            m_lefthand = m_righthand = false;

        }

    private:
        bool m_lefthand = false;
        bool m_righthand = false;
};


class Student : public Empty
{
    


    private:
        std::string name;
        std::string surname;
        int age;
};


int main()
{

    std::vector<Empty*> v;
    v.push_back(new Airplane);
    v.push_back(new Student);



    return 0;
}