#include <iostream>
#include <list>

int main()
{
    int d;
    float a;

    std::cout << "Enter the degree of the polynomial: ";
    std::cin >> d;

    std::list<int> l = {};
    std::list<float> ans = {};



    for (int i = 0; i < d+1; i++) {
        std::cout << "Enter odds for x^"<< d - i<<": ";
        std::cin >> a;
        l.push_back(a);
    }



    std::list<int> q = {};
    std::list<int> P = {};



    for (int i = 1; i < l.front(); i++) {
        if ((l.front() % i) == 0)
        {
            q.push_back(i);
        }
    }



    for (int i = 1; i < l.back(); i++) {
        if ((l.back() % i) == 0)
        {
            P.push_back(i);
        }
    }

    

    for (int i = 0; i < P.size(); i++) {
        for (int k = 0; k < q.size(); k++) {
            a = P.front() / q.front();
            std::cout << P.front();
            ans.push_back(a);
        }
    }

}
