#include<iostream>
#include<vector>
int main()
{


    std::vector<int> arr = {1, 23, 34, 45, 23, 23};
    std::cout << "Print the size of vector" << '\n';
    std::cout << arr.size() << '\n';

    std::cout << "Print the capacity of the vector" << '\n';
    std::cout << arr.capacity() << '\n'; 

    // push the elements in vector
    arr.push_back(100);
    arr.push_back(200);

    std::cout << "Print the capacity of the vector after inserting 2 elements" << '\n';
    std::cout << arr.capacity() << '\n';
    
    std::cout << "Print the vector" << '\n';
    for(int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';


    std::cout << '\n';
    std::cout << '\n';

    // vector initilized with Fill constructor 
    std::vector<int> arrr(10, 7);
    
    // print the fill constructor
    for(int i = 0; i < arrr.size(); i++)
    {
        std::cout << arrr[i] << ' ';
    }
    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';


    std::cout << "----------------2D Vector Array----------------" << '\n';


    std::vector<std::vector<int>>arrTwoD = {{2, 3, 4},
                                            {5, 6, 7},
                                            {8, 9, 10}};

    for(int i = 0; i < arrTwoD.size(); i++)
    {
        for(int j = 0; j < arrTwoD.size(); j++)
        {
            std::cout << arrTwoD[i][j] << " ";
        }
        std::cout << '\n';
    }


    std::cout << '\n';
    std::cout << '\n';

    return 0;
}