/*
AUTHOR: Alexander Le
DATE: 01.09.22
EXECUTION TIME
Process the execution time of a program.
*/

/* Preprocessor Directives */
#include <iostream>
#include <complex>
#include <chrono>
#include <thread>

/* Namespace Declarations */
using namespace std;

// Function Prototypes
int Gseries(int, int, int);

/* Main */ 
int main() 
{
  // Declare and Initialize a
  int a = 0; 

  // For geometric series
  int b = 0, r = 0, n = 0;
  
  // Inistantiate clock_t
  clock_t time_req; 
  /* The time_req object acts as our clock to measure 
   execution time */
  
  // Start clock
  time_req = clock(); 
  
  // Time execution of code
  a = log(Gseries(1, 2, 9)); 

  // Set execution time to the duration of time passed 
  time_req = clock() - time_req; 

  /* This is the difference between the initial system time, 
  clock() and the end time which stops when log 
  is called and your program has finished executing. */
  
  // Format time in seconds and output to console
  cout << "Execution Time: " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl; 

  return 0;
}


int Gseries(int a, int r, int n){

    int sum = 0, temp = a;
 
    for (int i = 0; i < n; i++)
    {
        sum += temp;
        temp *= r;
    }
    cout << "Sum of the geometric sequence: " << sum << endl;
  return sum;
}









// Work in progress to make timer more efficient
// // Structures
// struct Timer 
// {
//   std::chrono::time_point<std::chrono::steady_clock> start, end;
//   std::chrono::duration<float> duration;
  
//   Timer() // Struct constructor
//   {
//     start = std::chrono::high_resolution_clock::now();
//   }
  
//   ~Timer() // Struct destructor
//   {
//     end = std:: chrono::high_resolution_clock::now();
//     duration = end - start;
    
//     float ms = duration.count() * 1000.0f;
//     std::cout << "Execution time: " << ms << "ms\n"; 
//   }
// };
