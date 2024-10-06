echo"Hello World"
#include <iostream>
#include <chrono>
#include "StringData.h"

//Linear search algorithm
=======

// Linear Search Algorithm
>>>>>>> 67b0a91e03c7f383e49684e463334b489b5983d8
int linearSearch(const std::vector<std::string> container, const std::string element)
{
    
    for (int i = 0; i < container.size(); i++)
    {
        if (container[i] == element)
        {
            return i;
        }
    }
    return -1;
}

//Binary search algorithm
int binarySearch(const std::vector<std::string> container, const std::string element)
{
    int low = 0;
    int high = container.size()-1;

    while (low<=high)
    {
        int mid = (low+high)/2;

        if (container[mid] == element) {
            return mid;
        }
        else if (container[mid] < element) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
//if not in container
    return -1;
}

// Main, tests each search algorithm and records time taken for each string
int main()
{
    std::vector<std::string> data= getStringData();
    std::cout <<"Linear search of \"not_here\":\n";
    auto startTime =  std::chrono::system_clock::now() ;
    std::cout << linearSearch(data, "not_here");
    auto endTime =  std::chrono::system_clock::now()  - startTime;
    std::cout <<"\nTime taken: \n"<< endTime;


    std::cout <<"Binary search of \"not_here\":\n";
    startTime = std::chrono::system_clock::now();
    std::cout << binarySearch(data, "not_here");
    endTime = std::chrono::system_clock::now()  - startTime;
    std::cout <<"\nTime taken: \n"<< endTime;


    std::cout <<"Linear search of \"mzzzz\":\n";
    startTime =  std::chrono::system_clock::now() ;
    std::cout << linearSearch(data, "mzzzz");
    endTime =  std::chrono::system_clock::now()  - startTime;
    std::cout <<"\nTime taken: \n"<< endTime;


    std::cout <<"Binary search of \"mzzzz\":\n";
    startTime = std::chrono::system_clock::now();
    std::cout << binarySearch(data, "mzzzz");
    endTime = std::chrono::system_clock::now()  - startTime;
    std::cout <<"\nTime taken: \n"<< endTime;


    std::cout <<"Linear search of \"aaaaa\":\n";
    startTime = std::chrono::system_clock::now();
    std::cout << linearSearch(data, "aaaaa");
    endTime = std::chrono::system_clock::now()  - startTime;
    std::cout <<"\nTime taken: \n"<< endTime;


    std::cout <<"Binary search of \"aaaaa\":\n";
    startTime = std::chrono::system_clock::now();
    std::cout << binarySearch(data, "aaaaa");
    endTime = std::chrono::system_clock::now()  - startTime;
    std::cout <<"\nTime taken: \n"<< endTime;


}